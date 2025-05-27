#include "intraoperativeimage.h"
#include "ui_intraoperativeimage.h"
#include <QDebug>
#include <QScreen.h>
#include <QDir>
#include <vtkActor.h>
#include <vtkRenderer.h>
#include <QScreen.h>
#include <vtkNIFTIImageReader.h>
#include <vtkImageData.h>
#include <vtkSmartPointer.h>
#include <vtkImageData.h>
#include <vtkImageReslice.h>
#include <vtkMatrix4x4.h>
#include <QApplication>
#include <QLabel>
#include <QImage>
#include <QPixmap>
#include <vtkLookupTable.h>
#include <vtkImageMapToColors.h>
#include <vtkImageActor.h>
#include <vtkImageMapper3D.h>
#include <vtkRenderWindow.h>
#include <vtkInteractorStyleImage.h>
#include <vtkDataSet.h>
#include <vtkPointData.h>
#include <QVTKOpenGLNativeWidget.h>
#include <QScreen.h>
#include "GlobalVTKDataManager.h"

#include <vtkCylinderSource.h>
#include <vtkPolyDataMapper.h>
#include <vtkInteractorStyleTrackballCamera.h>
#include <vtkNamedColors.h>
#include <vtkSphereSource.h>
#include <vtkActor.h>
#include <vtkRenderer.h>
#include <vtkSphereSource.h>
#include <vtkGenericOpenGLRenderWindow.h>
#include <vtkProperty.h>
#include <vtkInteractorStyleTrackballActor.h>
#include <QVTKOpenGLNativeWidget.h>
#include <vtkRendererCollection.h>
#include <vtkSphereWidget.h>
#include <vtkSphereRepresentation.h>
#include <vtkCamera.h>

vtkSmartPointer<vtkActor> sphereActor;  //TODO：设置在头文件中
Vector3D spherePosition = {0, 0, 0};

IntraoperativeImage::IntraoperativeImage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::IntraoperativeImage)
{
    ui->setupUi(this);

    QVBoxLayout *layout = static_cast<QVBoxLayout*>(ui->groupBox->layout());
    layout->setStretchFactor(ui->endoscope, 3); // 设置endoscope的伸展因子为2s

    QVBoxLayout *layoutOfImageGroupBox = static_cast<QVBoxLayout*>(ui->imageGroupBox->layout());
    layoutOfImageGroupBox->setStretchFactor(ui->apparatusGroupBox, 4); // 设置endoscope的伸展因子为2s
    layoutOfImageGroupBox->setStretchFactor(ui->groupBox, 3);

    initCamera();

    // monitorWork->moveToThread(monitor);

    // connect(this, &IntraoperativeImage::buildArmMonitor, monitorWork, &LocationMonitor::begin);

    // connect(monitorWork, &LocationMonitor::working, this, [=](double l){
    //     spherePosition = {l, 100, 100};
    //     //sphereActor->SetPosition(l, 100, 100);
    // });

    // connect(monitorWork, &LocationMonitor::finish, this, [=](QString s){
    //     qDebug() << s;
    // });

    // emit buildArmMonitor(100);
    // monitor->start();
}

IntraoperativeImage::~IntraoperativeImage()
{
    delete ui;
}

void IntraoperativeImage::initCamera(){
    //1. 发现摄像头,若没有默认摄像头,就无法进行本示例的操作
    QCameraDevice defaultCameraDevice= QMediaDevices::defaultVideoInput();

    if (defaultCameraDevice.isNull())
    {
        return;
    }
    QByteArray defaultCameraID=defaultCameraDevice.id();
    ui->actStartCamera->setEnabled(true);

    //2. 创建抓取管理器session和各个设备
    session = new QMediaCaptureSession(this);       //抓取管理器
    session->setVideoOutput(ui->endoscope);      //设置视频输出组件，用于视频预览

    //2.2 创建QCamera对象,用于控制摄像头
    camera = new QCamera(this);        //摄像头
    camera->setCameraDevice(defaultCameraDevice);   //
    session->setCamera(camera);        //为session设置摄像头
}

void IntraoperativeImage::initImage(){
    int extent[6];
    double spacing[3];
    double origin[3];
    double center[3];

    imageData->GetExtent(extent);
    imageData->GetSpacing(spacing);
    imageData->GetOrigin(origin);

    ui->TransverseSlider_3->setMinimum(origin[2] + spacing[2]*extent[4]);
    ui->TransverseSlider_3->setMaximum(origin[2] + spacing[2]*extent[5]);
    connect(ui->TransverseSlider_3,&QSlider::valueChanged,this,&IntraoperativeImage::TransverseSliderChange);
    ui->TransverseSlider_3->setValue(origin[2] + spacing[2] * 0.5 * (extent[4] + extent[5]));

    ui->CoronalSlider_3->setMinimum(origin[1] + spacing[1]*extent[2]);
    ui->CoronalSlider_3->setMaximum(origin[1] + spacing[1]*extent[3]);
    connect(ui->CoronalSlider_3,&QSlider::valueChanged,this,&IntraoperativeImage::CoronalSliderChange);
    ui->CoronalSlider_3->setValue(origin[1] + spacing[1] * 0.5 * (extent[2] + extent[3]));

    ui->SagittalSlider_3->setMinimum(origin[0] + spacing[0]*extent[0]);
    ui->SagittalSlider_3->setMaximum(origin[0] + spacing[0]*extent[1]);
    connect(ui->SagittalSlider_3,&QSlider::valueChanged,this,&IntraoperativeImage::SagittalSliderChange);
    ui->SagittalSlider_3->setValue( origin[0] + spacing[0] * 0.5 * (extent[0] + extent[1]));

    CoronalSliderChange(ui->CoronalSlider_3->value());
    TransverseSliderChange(ui->TransverseSlider_3->value());
    SagittalSliderChange(ui->SagittalSlider_3->value());
}

void IntraoperativeImage::CoronalSliderChange(int value){
    vtkSmartPointer<vtkRenderWindow> coronalRenderWindow = ui->CoronalPlane_3->renderWindow();
    // if(isSegment){
    //     vtkSmartPointer<vtkRenderWindow> coronalSegmentRender = ui->CoronalSegment_3->renderWindow();
    //     visualizeTool.showReslice(imageSegment,coronalSegmentRender,VisualizeTool::Coronal,value,true);
    // }
    visualizeTool.showReslice(imageData,coronalRenderWindow,VisualizeTool::Coronal,value,false);
    ui->CoronalLabel_3->setText(QString::number(value));
}

void IntraoperativeImage::SagittalSliderChange(int value){
    vtkSmartPointer<vtkRenderWindow> sagittalRenderWindow = ui->SagittalPlane_3->renderWindow();
    // if(isSegment){
    //     vtkSmartPointer<vtkRenderWindow> sagittalSegmentRender = ui->SagittalSegment_3->renderWindow();
    //     visualizeTool.showReslice(imageSegment,sagittalSegmentRender,VisualizeTool::Sagittal,value,true);
    // }
    visualizeTool.showReslice(imageData,sagittalRenderWindow,VisualizeTool::Sagittal,value,false);
    ui->SagittalLabel_3->setText(QString::number(value));
}

void IntraoperativeImage::TransverseSliderChange(int value){
    vtkSmartPointer<vtkRenderWindow> axialRenderWindow = ui->TransversePlane_3->renderWindow();
    // if(isSegment){
    //     vtkSmartPointer<vtkRenderWindow> axialSegmentRender = ui->TransverseSegment_3->renderWindow();
    //     visualizeTool.showReslice(imageSegment,axialSegmentRender,VisualizeTool::Axial,value,true);
    // }
    visualizeTool.showReslice(imageData,axialRenderWindow,VisualizeTool::Axial,value,false);
    ui->TransverseLabel_3->setText(QString::number(value));
}

void IntraoperativeImage::on_Segment_3_clicked()
{
    isSegment=true;
    // ui->TransverseSegment_3->setSizePolicy(QSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding));
    // ui->CoronalSegment_3->setSizePolicy(QSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding));
    // ui->SagittalSegment_3->setSizePolicy(QSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding));
    initImage();
    Vector3D vec = {60, 100, 60};
    createSphereForTest(vec);
    ui->Segment_3->setEnabled(false); // 禁用按钮
}
void IntraoperativeImage::on_refresh_3_clicked()
{
    imageData = GlobalVTKDataManager::instance().getImage();
    imageSegment = GlobalVTKDataManager::instance().getSegment();
    isSegment=false;
    // ui->TransverseSegment_3->setSizePolicy(QSizePolicy(QSizePolicy::Preferred,QSizePolicy::Preferred));
    // ui->CoronalSegment_3->setSizePolicy(QSizePolicy(QSizePolicy::Preferred,QSizePolicy::Preferred));
    // ui->SagittalSegment_3->setSizePolicy(QSizePolicy(QSizePolicy::Preferred,QSizePolicy::Preferred));
    initImage();
}

void IntraoperativeImage::buildAndRespondMonitor(){
    monitorWork->moveToThread(monitor);

    connect(this, &IntraoperativeImage::buildArmMonitor, monitorWork, &LocationMonitor::begin);

    connect(monitorWork, &LocationMonitor::working, this, [=](double l){
        spherePosition = {l, 100, 100};
        updateSpherePosition(spherePosition);
        //sphereActor->SetPosition(l, 100, 100);
    });

    connect(monitorWork, &LocationMonitor::finish, this, [=](QString s){
        qDebug() << s;
    });

    emit buildArmMonitor(100);
    monitor->start();
}

void IntraoperativeImage::createSphereForTest(Vector3D vec){

    QSurfaceFormat::setDefaultFormat(QVTKOpenGLNativeWidget::defaultFormat());

    // 创建球体
    vtkSmartPointer<vtkSphereSource> sphereSource = vtkSmartPointer<vtkSphereSource>::New();
    sphereSource->SetRadius(3);
    sphereSource->SetThetaResolution(20); // 设置球体的经度分辨率
    sphereSource->SetPhiResolution(20); // 设置球体的纬度分辨率

    // 创建映射器
    vtkSmartPointer<vtkPolyDataMapper> sphereMapper = vtkSmartPointer<vtkPolyDataMapper>::New();
    sphereMapper->SetInputConnection(sphereSource->GetOutputPort());

    // 创建颜色对象
    vtkSmartPointer<vtkNamedColors> colors = vtkSmartPointer<vtkNamedColors>::New();

    // 创建球体执行器
    sphereActor = vtkSmartPointer<vtkActor>::New();
    sphereActor->SetMapper(sphereMapper);
    sphereActor->GetProperty()->SetColor(colors->GetColor4d("blue").GetData());
    sphereActor->SetPosition(vec.x, vec.y, vec.z); // x, y, z 坐标

    // 获取渲染窗口
    vtkSmartPointer<vtkRenderWindow> Model3D_3 = ui->model3D->renderWindow();
    visualizeTool.show3D(Model3D_3,imageSegment,false);

    // 获取渲染器
    vtkRendererCollection *renderers = Model3D_3->GetRenderers();
    auto smartRenderer =renderers->GetFirstRenderer();

    smartRenderer->AddActor(sphereActor);
    smartRenderer->Render();
    Model3D_3->Render();

    buildAndRespondMonitor();

    // // 创建交互器
    // vtkSmartPointer<vtkRenderWindowInteractor> interactor = vtkSmartPointer<vtkRenderWindowInteractor>::New();
    // interactor->SetRenderWindow(Model3D_3);

    // // vtkSmartPointer<vtkSphereWidget> sphereWidget = vtkSmartPointer<vtkSphereWidget>::New();

    // // sphereWidget->SetRepresentation(sphereRep); // 绑定表示对象到小部件
    // // vtkSmartPointer<vtkSphereWidget> sphereWidget = vtkSmartPointer<vtkSphereWidget>::New();

    // // sphereWidget->SetRepresentation(sphereRep); // 绑定表示对象到小部件
    // // sphereWidget->SetInteractor(interactor);
    // // sphereWidget->On();  // 激活球体小部件

    // // 设置交互风格为允许控制Actor的移动
    // vtkSmartPointer<vtkInteractorStyleTrackballActor> style = vtkSmartPointer<vtkInteractorStyleTrackballActor>::New();
    // interactor->SetInteractorStyle(style);

    // // 创建并设置相机（确保球体和脊柱模型都能显示）
    // // vtkSmartPointer<vtkCamera> camera = vtkSmartPointer<vtkCamera>::New();
    // // camera->SetPosition(0, 0, 0);  // 设置相机位置
    // // camera->SetFocalPoint(0, 0, 0);      // 设置相机焦点
    // // smartRenderer->SetActiveCamera(camera);

    // // 启动交互器
    // interactor->Initialize();
    // interactor->Start();
}

void IntraoperativeImage::updateSpherePosition(Vector3D newVec) {
    if (sphereActor) {
        // 更新位置
        sphereActor->SetPosition(newVec.x, newVec.y, newVec.z);

        // 刷新渲染窗口
        vtkSmartPointer<vtkRenderWindow> Model3D_3 = ui->model3D->renderWindow();
        Model3D_3->Render();
    } else {
        // 如果小球未初始化，创建小球
        createSphereForTest(newVec);
    }
}

void IntraoperativeImage::on_actStartCamera_clicked()
{//开启摄像头
    camera->start();// 启动摄像头
    ui->actStartCamera->setEnabled(false); // 禁用开始按钮
    ui->actStopCamera->setEnabled(true); // 启用停止按钮
}


void IntraoperativeImage::on_actStopCamera_clicked()
{//关闭摄像头
    camera->stop(); // 停止摄像头
    ui->actStartCamera->setEnabled(true); // 启用开始按钮
    ui->actStopCamera->setEnabled(false); // 禁用停止按钮
}

void IntraoperativeImage::on_updatePositionButton_clicked()
{
    bool ok;
    double x = ui->xLineEdit->text().toDouble(&ok);
    if (!ok) {
        // 处理错误：x不是有效的数字
        return;
    }
    double y = ui->yLineEdit->text().toDouble(&ok);
    if (!ok) {
        // 处理错误：y不是有效的数字
        return;
    }
    double z = ui->zLineEdit->text().toDouble(&ok);
    if (!ok) {
        // 处理错误：z不是有效的数字
        return;
    }

    Vector3D newPosition = {x, y, z};
    //initImage();
    updateSpherePosition(newPosition);
}


void IntraoperativeImage::on_previousPage_clicked()
{
    emit preButton_pressed();
}

