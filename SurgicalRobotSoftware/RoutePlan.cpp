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
    }
    visualizeTool.showReslice(imageData,axialRenderWindow,VisualizeTool::Axial,value,false);
    ui->TransverseLabel_2->setText(QString::number(value));
}

void RoutePlan::CoronalSliderChange(int value){
    vtkSmartPointer<vtkRenderWindow> coronalRenderWindow = ui->CoronalPlane_2->renderWindow();
    if(isSegment){
        vtkSmartPointer<vtkRenderWindow> coronalSegmentRender = ui->CoronalSegment_2->renderWindow();
        visualizeTool.showReslice(imageSegment,coronalSegmentRender,VisualizeTool::Coronal,value,true);
    }
    visualizeTool.showReslice(imageData,coronalRenderWindow,VisualizeTool::Coronal,value,false);
    ui->CoronalLabel_2->setText(QString::number(value));
}

void RoutePlan::SagittalSliderChange(int value){
    vtkSmartPointer<vtkRenderWindow> sagittalRenderWindow = ui->SagittalPlane_2->renderWindow();
    if(isSegment){
        vtkSmartPointer<vtkRenderWindow> sagittalSegmentRender = ui->SagittalSegment_2->renderWindow();
        visualizeTool.showReslice(imageSegment,sagittalSegmentRender,VisualizeTool::Sagittal,value,true);
    }
    visualizeTool.showReslice(imageData,sagittalRenderWindow,VisualizeTool::Sagittal,value,false);
    ui->SagittalLabel_2->setText(QString::number(value));
}

void RoutePlan::on_Refresh_2_clicked()
{
    imageData = GlobalVTKDataManager::instance().getImage();
    imageSegment = GlobalVTKDataManager::instance().getSegment();
    isSegment=false;
    ui->TransverseSegment_2->setSizePolicy(QSizePolicy(QSizePolicy::Preferred,QSizePolicy::Preferred));
    ui->CoronalSegment_2->setSizePolicy(QSizePolicy(QSizePolicy::Preferred,QSizePolicy::Preferred));
    ui->SagittalSegment_2->setSizePolicy(QSizePolicy(QSizePolicy::Preferred,QSizePolicy::Preferred));
    initImage();
}


void RoutePlan::on_Segment_2_clicked()
{
    isSegment=true;
    ui->TransverseSegment_2->setSizePolicy(QSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding));
    ui->CoronalSegment_2->setSizePolicy(QSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding));
    ui->SagittalSegment_2->setSizePolicy(QSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding));
    initImage();
    vtkSmartPointer<vtkRenderWindow> Model3D_2 = ui->Model3D_2->renderWindow();
    visualizeTool.show3D(Model3D_2,imageSegment,false);
}
