#include "reslicetool.h"
#include <vtkMatrix4x4.h>
#include <vtkActor.h>
#include <vtkRenderer.h>
#include <QScreen.h>
#include <vtkNIFTIImageReader.h>
#include <vtkImageData.h>
#include <vtkSmartPointer.h>
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

vtkSmartPointer<vtkImageReslice> ResliceTool::getReslice(vtkImageData* imageData, Type type, double index){
    int extent[6];
    double spacing[3];
    double origin[3];
    double center[3];

    imageData->GetExtent(extent);
    imageData->GetSpacing(spacing);
    imageData->GetOrigin(origin);

    center[0] = origin[0] + spacing[0] * 0.5 * (extent[0] + extent[1]);
    center[1] = origin[1] + spacing[1] * 0.5 * (extent[2] + extent[3]);
    center[2] = origin[2] + spacing[2] * 0.5 * (extent[4] + extent[5]);
    auto resliceAxes = vtkSmartPointer<vtkMatrix4x4>::New();
    switch(type){
        case Axial:
            resliceAxes->DeepCopy(axialElements);
            center[2] = index;
            break;
        case Coronal:
            resliceAxes->DeepCopy(coronalElements);
            center[1] = index;
            break;
        case Sagittal:
            resliceAxes->DeepCopy(sagittalElements);
            center[0] = index;
            break;
    }
    resliceAxes->SetElement(0, 3, center[0]);
    resliceAxes->SetElement(1, 3, center[1]);
    resliceAxes->SetElement(2, 3, center[2]);
    auto imageReslice = vtkSmartPointer<vtkImageReslice>::New();
    imageReslice->SetInputData(imageData);
    imageReslice->SetOutputDimensionality(2);
    imageReslice->SetResliceAxesOrigin(center);
    imageReslice->SetResliceAxes(resliceAxes);
    imageReslice->SetInterpolationModeToLinear();
    return imageReslice;
}

void ResliceTool::showReslice(vtkImageData* imageData,vtkSmartPointer<vtkRenderWindow>& renderWindow,Type type,double index){
    auto ImageReslice=getReslice(imageData,type,index);
    ImageReslice->Update();
    vtkImageData* outputImagedata = ImageReslice->GetOutput();
    double range[2];
    outputImagedata->GetScalarRange(range);
    auto lookupTable = vtkSmartPointer<vtkLookupTable>::New();
    lookupTable->SetRange(range[0], range[1]);
    lookupTable->SetValueRange(0.0, 1.0);
    lookupTable->SetSaturationRange(0.0, 0.0);
    lookupTable->SetRampToLinear();
    lookupTable->Build();
    auto mapToColors = vtkSmartPointer<vtkImageMapToColors>::New();
    mapToColors->SetLookupTable(lookupTable);
    mapToColors->SetInputConnection(ImageReslice->GetOutputPort());
    mapToColors->Update();
    auto imageActor = vtkSmartPointer<vtkImageActor>::New();
    imageActor->GetMapper()->SetInputConnection(mapToColors->GetOutputPort());
    auto renderer = vtkSmartPointer<vtkRenderer>::New();
    renderer->AddActor(imageActor);
    renderWindow->AddRenderer(renderer);
    auto imageStyle = vtkSmartPointer<vtkInteractorStyleImage>::New();
    renderWindow->GetInteractor()->SetInteractorStyle(imageStyle);
    renderWindow->Render();
}
