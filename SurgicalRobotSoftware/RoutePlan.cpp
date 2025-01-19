#include "RoutePlan.h"
#include "ui_RoutePlan.h"
#include "intraoperativeimage.h"
#include "spinalimage.h"
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
#include <QTimer.h>

RoutePlan::RoutePlan(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RoutePlan)
{
    ui->setupUi(this);
}

void RoutePlan::initImage(){
    int extent[6];
    double spacing[3];
    double origin[3];
    double center[3];

    imageData->GetExtent(extent);
    imageData->GetSpacing(spacing);
    imageData->GetOrigin(origin);

    ui->TransverseSlider_2->setMinimum(origin[2] + spacing[2]*extent[4]);
    ui->TransverseSlider_2->setMaximum(origin[2] + spacing[2]*extent[5]);
    connect(ui->TransverseSlider_2,&QSlider::valueChanged,this,&RoutePlan::TransverseSliderChange);
    ui->TransverseSlider_2->setValue(origin[2] + spacing[2] * 0.5 * (extent[4] + extent[5]));

    ui->CoronalSlider_2->setMinimum(origin[1] + spacing[1]*extent[2]);
    ui->CoronalSlider_2->setMaximum(origin[1] + spacing[1]*extent[3]);
    connect(ui->CoronalSlider_2,&QSlider::valueChanged,this,&RoutePlan::CoronalSliderChange);
    ui->CoronalSlider_2->setValue(origin[1] + spacing[1] * 0.5 * (extent[2] + extent[3]));

    ui->SagittalSlider_2->setMinimum(origin[0] + spacing[0]*extent[0]);
    ui->SagittalSlider_2->setMaximum(origin[0] + spacing[0]*extent[1]);
    connect(ui->SagittalSlider_2,&QSlider::valueChanged,this,&RoutePlan::SagittalSliderChange);
    ui->SagittalSlider_2->setValue( origin[0] + spacing[0] * 0.5 * (extent[0] + extent[1]));

    TransverseSliderChange(ui->TransverseSlider_2->value());
    CoronalSliderChange(ui->CoronalSlider_2->value());
    SagittalSliderChange(ui->SagittalSlider_2->value());
}

RoutePlan::~RoutePlan()
{
    delete ui;
}

void RoutePlan::on_Next_2_clicked()
{
    emit nextButton_pressed();
}


void RoutePlan::on_Previous_2_clicked()
{
    emit preButton_pressed();
}

void RoutePlan::TransverseSliderChange(int value){
    vtkSmartPointer<vtkRenderWindow> axialRenderWindow = ui->TransversePlane_2->renderWindow();
    if(isSegment){
        vtkSmartPointer<vtkRenderWindow> axialSegmentRender = ui->TransverseSegment_2->renderWindow();
        visualizeTool.showReslice(imageSegment,axialSegmentRender,VisualizeTool::Axial,value,true);
        visualizeTool.zoom(axialSegmentRender,2);
    }
    visualizeTool.showReslice(imageData,axialRenderWindow,VisualizeTool::Axial,value,false);
    ui->TransverseLabel_2->setText(QString::number(value));
    visualizeTool.zoom(axialRenderWindow,2);
}

void RoutePlan::CoronalSliderChange(int value){
    vtkSmartPointer<vtkRenderWindow> coronalRenderWindow = ui->CoronalPlane_2->renderWindow();
    if(isSegment){
        vtkSmartPointer<vtkRenderWindow> coronalSegmentRender = ui->CoronalSegment_2->renderWindow();
        visualizeTool.showReslice(imageSegment,coronalSegmentRender,VisualizeTool::Coronal,value,true);
        visualizeTool.zoom(coronalSegmentRender,1.7);
    }
    visualizeTool.showReslice(imageData,coronalRenderWindow,VisualizeTool::Coronal,value,false);
    ui->CoronalLabel_2->setText(QString::number(value));
    visualizeTool.zoom(coronalRenderWindow,1.7);
}

void RoutePlan::SagittalSliderChange(int value){
    vtkSmartPointer<vtkRenderWindow> sagittalRenderWindow = ui->SagittalPlane_2->renderWindow();
    if(isSegment){
        vtkSmartPointer<vtkRenderWindow> sagittalSegmentRender = ui->SagittalSegment_2->renderWindow();
        visualizeTool.showReslice(imageSegment,sagittalSegmentRender,VisualizeTool::Sagittal,value,true);
        visualizeTool.zoom(sagittalSegmentRender,3);
    }
    visualizeTool.showReslice(imageData,sagittalRenderWindow,VisualizeTool::Sagittal,value,false);
    ui->SagittalLabel_2->setText(QString::number(value));
    visualizeTool.zoom(sagittalRenderWindow,3);
}

void RoutePlan::on_Refresh_2_clicked()
{
    imageData = GlobalVTKDataManager::instance().getImage();
    imageSegment = GlobalVTKDataManager::instance().getSegment();
    isSegment=false;
    ui->TransverseSegment_2->setSizePolicy(QSizePolicy(QSizePolicy::Preferred,QSizePolicy::Preferred));
    ui->CoronalSegment_2->setSizePolicy(QSizePolicy(QSizePolicy::Preferred,QSizePolicy::Preferred));
    ui->SagittalSegment_2->setSizePolicy(QSizePolicy(QSizePolicy::Preferred,QSizePolicy::Preferred));
    QTimer::singleShot(0, this, [&]() {
        initImage();
    });
}


void RoutePlan::on_Segment_2_clicked()
{
    isSegment=true;
    ui->TransverseSegment_2->setSizePolicy(QSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding));
    ui->CoronalSegment_2->setSizePolicy(QSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding));
    ui->SagittalSegment_2->setSizePolicy(QSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding));
    QTimer::singleShot(0, this, [&]() {
        initImage();
    });
    //vtkSmartPointer<vtkRenderWindow> Model3D_2 = ui->Model3D_2->renderWindow();
    //visualizeTool.show3D(Model3D_2,imageSegment);
    createCylinderForTest();
}

void RoutePlan::createCylinderForTest(){

    QSurfaceFormat::setDefaultFormat(QVTKOpenGLNativeWidget::defaultFormat());

    // 获取渲染窗口
    vtkSmartPointer<vtkRenderWindow> Model3D_2 = ui->Model3D_2->renderWindow();
    visualizeTool.show3D(Model3D_2,imageSegment,false);
    // vtkSmartPointer<vtkRenderer> renderer = Model3D_3->GetRenderers();

    // 获取渲染器
    vtkRendererCollection *renderers = Model3D_2->GetRenderers();
    auto smartRenderer =renderers->GetFirstRenderer();
    // if (renderers->GetNumberOfItems() > 0) {
    //     // 获取第一个渲染器
    //     smartRenderer =renderers->GetFirstRenderer();
    // }

    // 创建颜色对象
    vtkSmartPointer<vtkNamedColors> colors = vtkSmartPointer<vtkNamedColors>::New();

    // 创建圆柱体
    vtkSmartPointer<vtkCylinderSource> cylinderSource = vtkSmartPointer<vtkCylinderSource>::New();
    cylinderSource->SetHeight(66.0);
    cylinderSource->SetCenter(0.0, 0.0, 0.0);
    cylinderSource->SetRadius(3.0);
    cylinderSource->SetResolution(50);

    // 创建圆柱体映射器
    vtkSmartPointer<vtkPolyDataMapper> cylinderMapper = vtkSmartPointer<vtkPolyDataMapper>::New();
    cylinderMapper->SetInputConnection(cylinderSource->GetOutputPort());

    // 创建圆柱体执行器
    vtkSmartPointer<vtkActor> cylinderActor = vtkSmartPointer<vtkActor>::New();
    cylinderActor->SetMapper(cylinderMapper);
    cylinderActor->GetProperty()->SetColor(colors->GetColor4d("yellow").GetData());
    cylinderActor->SetPosition(60.0, 100.0, 30.0); // x, y, z 坐标

    smartRenderer->AddActor(cylinderActor);

    // 创建交互器
    vtkSmartPointer<vtkRenderWindowInteractor> interactor = vtkSmartPointer<vtkRenderWindowInteractor>::New();
    interactor->SetRenderWindow(Model3D_2);

    // 设置交互风格为允许控制Actor的移动
    vtkSmartPointer<vtkInteractorStyleTrackballActor> style = vtkSmartPointer<vtkInteractorStyleTrackballActor>::New();
    interactor->SetInteractorStyle(style);

    // 启动交互器
    interactor->Initialize();
    interactor->Start();
}
