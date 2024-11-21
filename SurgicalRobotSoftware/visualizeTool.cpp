#include "visualizeTool.h"
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
#include <vtkContourFilter.h>
#include <vtkSmoothPolyDataFilter.h>
#include <vtkPPolyDataNormals.h>
#include <vtkPolyDataMapper.h>
#include <vtkProperty.h>
#include <vtkOutlineFilter.h>
#include <vtkCamera.h>

vtkSmartPointer<vtkImageReslice> VisualizeTool::getReslice(vtkImageData* imageData, Type type, double index){
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

void VisualizeTool::showReslice(vtkImageData* imageData,vtkSmartPointer<vtkRenderWindow>& renderWindow,Type type,double index,bool isSegment){
    auto ImageReslice=getReslice(imageData,type,index);
    ImageReslice->Update();
    vtkImageData* outputImagedata = ImageReslice->GetOutput();
    double range[2];
    outputImagedata->GetScalarRange(range);
    auto lookupTable = vtkSmartPointer<vtkLookupTable>::New();
    if(isSegment){
        lookupTable->SetNumberOfTableValues(5);  // 设置 0～4 共5个值
        lookupTable->SetRange(0, 4);             // 设置范围，覆盖所有分割值
        lookupTable->SetTableValue(0, 0.0, 0.0, 0.0, 0.0);   // 背景透明
        lookupTable->SetTableValue(1, 1.0, 0.0, 0.0, 1.0);   // 红色
        lookupTable->SetTableValue(2, 0.0, 1.0, 0.0, 1.0);   // 绿色
        lookupTable->SetTableValue(3, 0.0, 0.0, 1.0, 1.0);   // 蓝色
        lookupTable->SetTableValue(4, 1.0, 1.0, 0.0, 1.0);   // 黄色
    }else{
        lookupTable->SetRange(range[0], range[1]);
        lookupTable->SetValueRange(0.0, 1.0);
        lookupTable->SetSaturationRange(0.0, 0.0);
        lookupTable->SetRampToLinear();
    }
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

void VisualizeTool::show3D(vtkSmartPointer<vtkRenderWindow>& renderWindow,vtkImageData* imageSegment){
    auto renderer = vtkSmartPointer<vtkRenderer>::New();
    vtkRenderWindowInteractor* ir = renderWindow->GetInteractor();
    renderWindow->AddRenderer(renderer);
    auto style = vtkSmartPointer<vtkInteractorStyleTrackballCamera>::New();
    ir->SetInteractorStyle(style);
    // 通过过滤器从数据中抽取一系列等值面
    vtkSmartPointer<vtkContourFilter> contourFilter = vtkSmartPointer<vtkContourFilter>::New();
    contourFilter->SetInputData(imageSegment);
    contourFilter->SetNumberOfContours(5);
    contourFilter->SetValue(0,0);
    contourFilter->SetValue(1,1);
    contourFilter->SetValue(2,2);
    contourFilter->SetValue(3,3);
    contourFilter->SetValue(4,4);
    // 光滑图像
    auto smooth = vtkSmartPointer<vtkSmoothPolyDataFilter>::New();
    smooth->SetInputConnection(contourFilter->GetOutputPort());
    smooth->SetNumberOfIterations(300);
    // 法线
    auto normal = vtkSmartPointer<vtkPolyDataNormals>::New();
    normal->SetInputConnection(smooth->GetOutputPort());
    normal->SetFeatureAngle(60);
    // 颜色映射表
    auto lookupTable = vtkSmartPointer<vtkLookupTable>::New();
    lookupTable->SetNumberOfTableValues(5);  // 设置 0～4 共5个值
    lookupTable->SetRange(0, 4);             // 设置范围，覆盖所有分割值
    lookupTable->SetTableValue(0, 0.0, 0.0, 0.0, 0.0);   // 背景透明
    lookupTable->SetTableValue(1, 1.0, 0.0, 0.0, 1.0);   // 红色
    lookupTable->SetTableValue(2, 0.0, 1.0, 0.0, 1.0);   // 绿色
    lookupTable->SetTableValue(3, 0.0, 0.0, 1.0, 1.0);   // 蓝色
    lookupTable->SetTableValue(4, 1.0, 1.0, 0.0, 1.0);   // 黄色
    lookupTable->Build();
    // 实例化映射器
    auto conMapper = vtkSmartPointer<vtkPolyDataMapper>::New();
    conMapper->SetInputConnection(normal->GetOutputPort());
    conMapper->SetLookupTable(lookupTable);
    conMapper->SetScalarRange(0,4);
    conMapper->ScalarVisibilityOn();
    // 创建演员对象
    auto imageActor = vtkSmartPointer<vtkActor>::New();
    imageActor->SetMapper(conMapper);
    imageActor->GetProperty()->SetOpacity(1.0);
    // 添加演员至场景
    renderer->AddActor(imageActor);
    auto boxFilter = vtkSmartPointer<vtkOutlineFilter>::New();
    boxFilter->SetInputData(imageSegment);
    auto boxMapper = vtkSmartPointer<vtkPolyDataMapper>::New();
    boxMapper->SetInputConnection(boxFilter->GetOutputPort());
    auto boxActor = vtkSmartPointer<vtkActor>::New();
    boxActor->SetMapper(boxMapper);
    boxActor->GetProperty()->SetColor(0,1,0);

    auto camera = vtkSmartPointer<vtkCamera>::New();
    camera->SetViewUp(0,0,-1);
    camera->SetPosition(0,1,0);
    camera->SetFocalPoint(0,0,0);
    camera->ComputeViewPlaneNormal();
    camera->Dolly(1.5);
    renderer->SetActiveCamera(camera);
    renderer->ResetCamera();
    renderWindow->SetMultiSamples(0);
}
