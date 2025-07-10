#include "intraoperativewidget.h"
#include "ui_intraoperativewidget.h"
#include "GlobalVTKDataManager.h"
#include <QDebug>
#include "ballrenderer_2.h"
#include "ballrenderer.h"
#include <QVBoxLayout>
#include <vtkNIFTIImageReader.h>

QVTKOpenGLNativeWidget *vtkWidget;

IntraoperativeWidget::IntraoperativeWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::IntraoperativeWidget)
{
    ui->setupUi(this);

    initCamera();

    // 在构造函数中添加如下代码：
    vtkWidget = new QVTKOpenGLNativeWidget(ui->widget_4);
    QVBoxLayout *layout = new QVBoxLayout(ui->widget_4);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->addWidget(vtkWidget);
}

IntraoperativeWidget::~IntraoperativeWidget()
{
    delete ui;
}


void IntraoperativeWidget::initImage(){
    if(GlobalVTKDataManager::instance().isLoaded()){
        imageData = GlobalVTKDataManager::instance().getImage();
        int extent[6];
        double spacing[3];
        double origin[3];
        double center[3];

        imageData->GetExtent(extent);
        qDebug()<<extent[1]<<extent[2];
        imageData->GetSpacing(spacing);
        imageData->GetOrigin(origin);

        ui->transverseSlider->setMinimum(origin[2] + spacing[2]*extent[4]);
        ui->transverseSlider->setMaximum(origin[2] + spacing[2]*extent[5]);
        connect(ui->transverseSlider,&QSlider::valueChanged,this,&IntraoperativeWidget::on_transverseSlider_valueChanged);
        ui->transverseSlider->setValue(origin[2] + spacing[2] * 0.5 * (extent[4] + extent[5]));

        ui->coronalSlider->setMinimum(origin[1] + spacing[1]*extent[2]);
        ui->coronalSlider->setMaximum(origin[1] + spacing[1]*extent[3]);
        connect(ui->coronalSlider,&QSlider::valueChanged,this,&IntraoperativeWidget::on_coronalSlider_valueChanged);
        ui->coronalSlider->setValue(origin[1] + spacing[1] * 0.5 * (extent[2] + extent[3]));

        ui->sagittalSlider->setMinimum(origin[0] + spacing[0]*extent[0]);
        ui->sagittalSlider->setMaximum(origin[0] + spacing[0]*extent[1]);
        connect(ui->sagittalSlider,&QSlider::valueChanged,this,&IntraoperativeWidget::on_sagittalSlider_valueChanged);
        ui->sagittalSlider->setValue( origin[0] + spacing[0] * 0.5 * (extent[0] + extent[1]));
    }
}

void IntraoperativeWidget::show3DModel()
{
    QString str = QDir::cleanPath(QCoreApplication::applicationDirPath() + QDir::separator() + QString("file/segment/spine_007.nii.gz"));
    vtkSmartPointer<vtkNIFTIImageReader> reader = vtkSmartPointer<vtkNIFTIImageReader>::New();
    reader->SetFileName(str.toStdString().c_str());
    reader->Update();
    imageSegment = reader->GetOutput();
    GlobalVTKDataManager::instance().setSegment(imageSegment);

    vtkSmartPointer<vtkRenderWindow> threeDimensiona1Render = vtkWidget->renderWindow();
    visualizeTool.show3D(threeDimensiona1Render,imageSegment,true);

    // 渲染小球
    // Ballrenderer::renderBall(vtkWidget);
    // Ballrenderer_2::renderBall(vtkWidget);

    QString stl_fileName = QFileDialog::getOpenFileName(this, QString::fromLocal8Bit("请选择文件路径..."), "*.STL");
    Ballrenderer::createItemFromSTL(vtkWidget, stl_fileName);
}

void IntraoperativeWidget::initCamera(){
    //1. 发现摄像头,若没有默认摄像头,就无法进行本示例的操作
    QCameraDevice defaultCameraDevice= QMediaDevices::defaultVideoInput();

    if (defaultCameraDevice.isNull())
    {
        return;
    }
    QByteArray defaultCameraID=defaultCameraDevice.id();
    //ui->actStartCamera->setEnabled(true);

    //2. 创建抓取管理器session和各个设备
    session = new QMediaCaptureSession(this);       //抓取管理器
    session->setVideoOutput(ui->endoscopyWidget);      //设置视频输出组件，用于视频预览

    //2.2 创建QCamera对象,用于控制摄像头
    camera = new QCamera(this);        //摄像头
    camera->setCameraDevice(defaultCameraDevice);   //
    session->setCamera(camera);        //为session设置摄像头

    camera->start();// 启动摄像头
}

void IntraoperativeWidget::on_backButton_clicked()
{
    emit back_to_imagedisPlayWidget();
}

void IntraoperativeWidget::on_coronalSlider_valueChanged(int value)
{
    if(imageData!=nullptr){
        vtkSmartPointer<vtkRenderWindow> coronalRenderWindow = ui->coronalWidget->renderWindow();
        visualizeTool.showReslice(imageData,coronalRenderWindow,VisualizeTool::Coronal,value,false);
        visualizeTool.zoom(coronalRenderWindow,2);
    }
}


void IntraoperativeWidget::on_sagittalSlider_valueChanged(int value)
{
    if(imageData!=nullptr){
        vtkSmartPointer<vtkRenderWindow> sagittalRenderWindow = ui->sagittalWidget->renderWindow();
        visualizeTool.showReslice(imageData,sagittalRenderWindow,VisualizeTool::Sagittal,value,false);
        visualizeTool.zoom(sagittalRenderWindow,2);
    }
}


void IntraoperativeWidget::on_transverseSlider_valueChanged(int value)
{

    if(imageData!=nullptr){
        vtkSmartPointer<vtkRenderWindow> transverseRenderWindow = ui->transverseWidget->renderWindow();
        visualizeTool.showReslice(imageData,transverseRenderWindow,VisualizeTool::Axial,value,false);
        visualizeTool.zoom(transverseRenderWindow,2);
    }
}

