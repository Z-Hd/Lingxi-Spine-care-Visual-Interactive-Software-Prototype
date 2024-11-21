#include "spinalimage.h"
#include "ui_spinalimage.h"
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
#include "visualizeTool.h"



SpinalImage::SpinalImage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SpinalImage)
{
    ui->setupUi(this);
}

// void SpinalImage::show3D(vtkSmartPointer<vtkRenderWindow>& renderWindow){
//     auto renderer = vtkSmartPointer<vtkRenderer>::New();
//     vtkRenderWindowInteractor* ir = renderWindow->GetInteractor();
//     renderWindow->AddRenderer(renderer);
//     auto style = vtkSmartPointer<vtkInteractorStyleTrackballCamera>::New();
//     ir->SetInteractorStyle(style);
//     // 通过过滤器从数据中抽取一系列等值面
//     auto volumeMapper = vtkSmartPointer<vtkSmartVolumeMapper>::New();
//     volumeMapper->SetInputData(imageSegment);

//     // 创建体积对象
//     auto volume = vtkSmartPointer<vtkVolume>::New();
//     volume->SetMapper(volumeMapper);

//     // 创建转移函数
//     auto volumeColor = vtkSmartPointer<vtkColorTransferFunction>::New();
//     volumeColor->AddRGBPoint(0, 0.0, 0.0, 0.0);    // 背景透明
//     volumeColor->AddRGBPoint(1, 1.0, 0.0, 0.0);    // 红色
//     volumeColor->AddRGBPoint(2, 0.0, 1.0, 0.0);    // 绿色
//     volumeColor->AddRGBPoint(3, 0.0, 0.0, 1.0);    // 蓝色
//     volumeColor->AddRGBPoint(4, 1.0, 1.0, 0.0);    // 黄色

//     auto volumeScalarOpacity = vtkSmartPointer<vtkPiecewiseFunction>::New();
//     volumeScalarOpacity->AddPoint(0, 0.0);
//     volumeScalarOpacity->AddPoint(1, 1.0);
//     volumeScalarOpacity->AddPoint(2, 1.0);
//     volumeScalarOpacity->AddPoint(3, 1.0);
//     volumeScalarOpacity->AddPoint(4, 1.0);

//     // 应用转移组和不透明度
//     volume->GetProperty()->SetColor(volumeColor);
//     volume->GetProperty()->SetScalarOpacity(volumeScalarOpacity);

//     // 添加演员至场景
//     renderer->AddVolume(volume);
//     auto boxFilter = vtkSmartPointer<vtkOutlineFilter>::New();
//     boxFilter->SetInputData(imageSegment);
//     auto boxMapper = vtkSmartPointer<vtkPolyDataMapper>::New();
//     boxMapper->SetInputConnection(boxFilter->GetOutputPort());
//     auto boxActor = vtkSmartPointer<vtkActor>::New();
//     boxActor->SetMapper(boxMapper);
//     boxActor->GetProperty()->SetColor(0,1,0);

//     auto camera = vtkSmartPointer<vtkCamera>::New();
//     camera->SetViewUp(0,0,-1);
//     camera->SetPosition(0,1,0);
//     camera->SetFocalPoint(0,0,0);
//     camera->ComputeViewPlaneNormal();
//     camera->Dolly(1.5);
//     renderer->SetActiveCamera(camera);
//     renderer->ResetCamera();
//     renderWindow->SetMultiSamples(0);
// }
void SpinalImage::initImage(){
    int extent[6];
    double spacing[3];
    double origin[3];
    double center[3];

    imageData->GetExtent(extent);
    imageData->GetSpacing(spacing);
    imageData->GetOrigin(origin);

    ui->axialSlider1->setMinimum(origin[2] + spacing[2]*extent[4]);
    ui->axialSlider1->setMaximum(origin[2] + spacing[2]*extent[5]);
    connect(ui->axialSlider1,&QSlider::valueChanged,this,&SpinalImage::axialSliderChange);
    ui->axialSlider1->setValue(origin[2] + spacing[2] * 0.5 * (extent[4] + extent[5]));

    ui->coronalSlider1->setMinimum(origin[1] + spacing[1]*extent[2]);
    ui->coronalSlider1->setMaximum(origin[1] + spacing[1]*extent[3]);
    connect(ui->coronalSlider1,&QSlider::valueChanged,this,&SpinalImage::coronalSliderChange);
    ui->coronalSlider1->setValue(origin[1] + spacing[1] * 0.5 * (extent[2] + extent[3]));

    ui->sagittalSlider1->setMinimum(origin[0] + spacing[0]*extent[0]);
    ui->sagittalSlider1->setMaximum(origin[0] + spacing[0]*extent[1]);
    connect(ui->sagittalSlider1,&QSlider::valueChanged,this,&SpinalImage::sagittalSliderChange);
    ui->sagittalSlider1->setValue( origin[0] + spacing[0] * 0.5 * (extent[0] + extent[1]));

    axialSliderChange(ui->axialSlider1->value());
    coronalSliderChange(ui->coronalSlider1->value());
    sagittalSliderChange(ui->sagittalSlider1->value());
}

SpinalImage::~SpinalImage()
{
    delete ui;
}

void SpinalImage::on_previousStep1_clicked()
{
    emit preButton_pressed();
}


void SpinalImage::on_nextStep1_clicked()
{
    emit nextButton_pressed();
}

void SpinalImage::axialSliderChange(int value){
    vtkSmartPointer<vtkRenderWindow> axialRenderWindow = ui->axialPlane1->renderWindow();
    if(isSegment){
        vtkSmartPointer<vtkRenderWindow> axialSegmentRender = ui->axialSegment->renderWindow();
        visualizeTool.showReslice(imageSegment,axialSegmentRender,VisualizeTool::Axial,value,true);
    }
    visualizeTool.showReslice(imageData,axialRenderWindow,VisualizeTool::Axial,value,false);
    ui->axialIndex1->setText(QString::number(value));
}

void SpinalImage::coronalSliderChange(int value){
    vtkSmartPointer<vtkRenderWindow> coronalRenderWindow = ui->coronalPlane1->renderWindow();
    if(isSegment){
        vtkSmartPointer<vtkRenderWindow> coronalSegmentRender = ui->coronalSegment->renderWindow();
        visualizeTool.showReslice(imageSegment,coronalSegmentRender,VisualizeTool::Coronal,value,true);
    }
    visualizeTool.showReslice(imageData,coronalRenderWindow,VisualizeTool::Coronal,value,false);
    ui->coronalIndex1->setText(QString::number(value));
}

void SpinalImage::sagittalSliderChange(int value){
    vtkSmartPointer<vtkRenderWindow> sagittalRenderWindow = ui->sagittalPlane1->renderWindow();
    if(isSegment){
        vtkSmartPointer<vtkRenderWindow> sagittalSegmentRender = ui->sagittalSegment->renderWindow();
        visualizeTool.showReslice(imageSegment,sagittalSegmentRender,VisualizeTool::Sagittal,value,true);
    }
    visualizeTool.showReslice(imageData,sagittalRenderWindow,VisualizeTool::Sagittal,value,false);
    ui->sagittalIndex1->setText(QString::number(value));
}



void SpinalImage::on_loadImage_clicked()
{

    QString str = QDir::cleanPath(QCoreApplication::applicationDirPath() + QDir::separator() + QString("file/raw/spine_007.nii.gz"));
    vtkSmartPointer<vtkNIFTIImageReader> reader = vtkSmartPointer<vtkNIFTIImageReader>::New();
    reader->SetFileName(str.toStdString().c_str());
    reader->Update();
    imageData = reader->GetOutput();
    isSegment=false;
    ui->axialSegment->setSizePolicy(QSizePolicy(QSizePolicy::Preferred,QSizePolicy::Preferred));
    ui->coronalSegment->setSizePolicy(QSizePolicy(QSizePolicy::Preferred,QSizePolicy::Preferred));
    ui->sagittalSegment->setSizePolicy(QSizePolicy(QSizePolicy::Preferred,QSizePolicy::Preferred));
    initImage();
}


void SpinalImage::on_segment_clicked()
{

    QString str = QDir::cleanPath(QCoreApplication::applicationDirPath() + QDir::separator() + QString("file/segment/spine_007.nii.gz"));
    vtkSmartPointer<vtkNIFTIImageReader> reader = vtkSmartPointer<vtkNIFTIImageReader>::New();
    reader->SetFileName(str.toStdString().c_str());
    reader->Update();
    imageSegment = reader->GetOutput();
    isSegment=true;
    ui->axialSegment->setSizePolicy(QSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding));
    ui->coronalSegment->setSizePolicy(QSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding));
    ui->sagittalSegment->setSizePolicy(QSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding));
    initImage();
    vtkSmartPointer<vtkRenderWindow> threeDimensiona1Render = ui->threeDimensiona1->renderWindow();
    visualizeTool.show3D(threeDimensiona1Render,imageSegment);
}

