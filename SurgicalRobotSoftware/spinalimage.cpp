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



SpinalImage::SpinalImage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SpinalImage)
{
    ui->setupUi(this);
}

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
        resliceTool.showReslice(imageSegment,axialSegmentRender,ResliceTool::Axial,value,true);
    }
    resliceTool.showReslice(imageData,axialRenderWindow,ResliceTool::Axial,value,false);
    ui->axialIndex1->setText(QString::number(value));
}

void SpinalImage::coronalSliderChange(int value){
    vtkSmartPointer<vtkRenderWindow> coronalRenderWindow = ui->coronalPlane1->renderWindow();
    if(isSegment){
        vtkSmartPointer<vtkRenderWindow> coronalSegmentRender = ui->coronalSegment->renderWindow();
        resliceTool.showReslice(imageSegment,coronalSegmentRender,ResliceTool::Coronal,value,true);
    }
    resliceTool.showReslice(imageData,coronalRenderWindow,ResliceTool::Coronal,value,false);
    ui->coronalIndex1->setText(QString::number(value));
}

void SpinalImage::sagittalSliderChange(int value){
    vtkSmartPointer<vtkRenderWindow> sagittalRenderWindow = ui->sagittalPlane1->renderWindow();
    if(isSegment){
        vtkSmartPointer<vtkRenderWindow> sagittalSegmentRender = ui->sagittalSegment->renderWindow();
        resliceTool.showReslice(imageSegment,sagittalSegmentRender,ResliceTool::Sagittal,value,true);
    }
    resliceTool.showReslice(imageData,sagittalRenderWindow,ResliceTool::Sagittal,value,false);
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
}

