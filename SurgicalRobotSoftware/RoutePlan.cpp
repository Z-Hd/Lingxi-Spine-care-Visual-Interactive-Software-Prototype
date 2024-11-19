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

    ui->Transverse_Slider_2->setMinimum(origin[2] + spacing[2]*extent[4]);
    ui->Transverse_Slider_2->setMaximum(origin[2] + spacing[2]*extent[5]);
    connect(ui->Transverse_Slider_2,&QSlider::valueChanged,this,&RoutePlan::TransverseSliderChange);
    ui->Transverse_Slider_2->setValue(origin[2] + spacing[2] * 0.5 * (extent[4] + extent[5]));

    ui->Coronal_Slider_2->setMinimum(origin[1] + spacing[1]*extent[2]);
    ui->Coronal_Slider_2->setMaximum(origin[1] + spacing[1]*extent[3]);
    connect(ui->Coronal_Slider_2,&QSlider::valueChanged,this,&RoutePlan::CoronalSliderChange);
    ui->Coronal_Slider_2->setValue(origin[1] + spacing[1] * 0.5 * (extent[2] + extent[3]));

    ui->Sagittal_Slider_2->setMinimum(origin[0] + spacing[0]*extent[0]);
    ui->Sagittal_Slider_2->setMaximum(origin[0] + spacing[0]*extent[1]);
    connect(ui->Sagittal_Slider_2,&QSlider::valueChanged,this,&RoutePlan::SagittalSliderChange);
    ui->Sagittal_Slider_2->setValue( origin[0] + spacing[0] * 0.5 * (extent[0] + extent[1]));

    TransverseSliderChange(ui->Transverse_Slider_2->value());
    CoronalSliderChange(ui->Coronal_Slider_2->value());
    SagittalSliderChange(ui->Sagittal_Slider_2->value());
}

RoutePlan::~RoutePlan()
{
    delete ui;
}

void RoutePlan::TransverseSliderChange(int value){
    vtkSmartPointer<vtkRenderWindow> axialRenderWindow = ui->Transverse_2->renderWindow();
    resliceTool.showReslice(imageData,axialRenderWindow,ResliceTool::Axial,value,false);
    ui->Transverse_Label_2->setText(QString::number(value));
}

void RoutePlan::CoronalSliderChange(int value){
    vtkSmartPointer<vtkRenderWindow> coronalRenderWindow = ui->Coronal_2->renderWindow();
    resliceTool.showReslice(imageData,coronalRenderWindow,ResliceTool::Coronal,value,false);
    ui->Coronal_Label_2->setText(QString::number(value));
}

void RoutePlan::SagittalSliderChange(int value){
    vtkSmartPointer<vtkRenderWindow> sagittalRenderWindow = ui->Sagittal_2->renderWindow();
    resliceTool.showReslice(imageData,sagittalRenderWindow,ResliceTool::Sagittal,value,false);
    ui->Sagittal_Label_2->setText(QString::number(value));
}

void RoutePlan::on_Refresh_2_clicked()
{
    QWidget::update();
    QString str = QDir::cleanPath(QCoreApplication::applicationDirPath() + QDir::separator() + QString("file/raw/spine_007.nii.gz"));
    vtkSmartPointer<vtkNIFTIImageReader> reader = vtkSmartPointer<vtkNIFTIImageReader>::New();
    reader->SetFileName(str.toStdString().c_str());
    reader->Update();
    imageData = reader->GetOutput();
    initImage();
}


void RoutePlan::on_Next_2_clicked()
{
    emit nextButton_pressed();
}


void RoutePlan::on_Previous_2_clicked()
{
    emit preButton_pressed();
}

