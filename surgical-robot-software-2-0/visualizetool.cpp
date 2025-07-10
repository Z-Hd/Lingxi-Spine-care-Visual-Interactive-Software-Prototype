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
#include <vtkImageFlip.h>
#include <vtkCamera.h>
#include <vtkRendererCollection.h>
#include "GlobalVTKDataManager.h"

vtkSmartPointer<vtkRenderer> sharedRenderer = nullptr;

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
    vtkSmartPointer<vtkImageFlip> flipFilter = vtkSmartPointer<vtkImageFlip>::New();
    flipFilter->SetInputData(ImageReslice->GetOutput());
    flipFilter->SetFilteredAxes(1); //1表示y轴翻转
    flipFilter->Update();
    vtkImageData* outputImagedata = flipFilter->GetOutput();
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
    mapToColors->SetInputConnection(flipFilter->GetOutputPort());
    mapToColors->Update();
    auto imageActor = vtkSmartPointer<vtkImageActor>::New();
    imageActor->GetMapper()->SetInputConnection(mapToColors->GetOutputPort());
    auto renderCollection = renderWindow->GetRenderers();
    renderCollection->RemoveAllItems();
    auto renderer = vtkSmartPointer<vtkRenderer>::New();
    renderer->AddActor(imageActor);
    renderWindow->AddRenderer(renderer);
    auto imageStyle = vtkSmartPointer<vtkInteractorStyleImage>::New();
    renderWindow->GetInteractor()->SetInteractorStyle(imageStyle);
    renderWindow->Render();
}

void VisualizeTool::show3D(vtkSmartPointer<vtkRenderWindow>& renderWindow,vtkImageData* imageSegment,bool update){

    auto renderer = vtkSmartPointer<vtkRenderer>::New();
    sharedRenderer = vtkSmartPointer<vtkRenderer>::New();

    vtkRenderWindowInteractor* ir = renderWindow->GetInteractor();
    renderWindow->AddRenderer(sharedRenderer);
    auto style = vtkSmartPointer<vtkInteractorStyleTrackballCamera>::New();
    ir->SetInteractorStyle(style);
    if(update){
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
        smooth->Update();
        GlobalVTKDataManager::instance().setData3D(smooth->GetOutput());
    }
    // 法线
    auto normal = vtkSmartPointer<vtkPolyDataNormals>::New();
    auto data3D = GlobalVTKDataManager::instance().getData3D();
    normal->SetInputData(data3D);
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

    double bounds[6];
    imageActor->GetBounds(bounds);

    double centerX = (bounds[0] + bounds[1]) / 2.0;
    double centerY = (bounds[2] + bounds[3]) / 2.0;
    double centerZ = (bounds[4] + bounds[5]) / 2.0;

    qDebug() << "Model bounds: "
             << bounds[0] << bounds[1] << bounds[2] << bounds[3] << bounds[4] << bounds[5];
    qDebug() << "Computed center: " << centerX << centerY << centerZ;

    imageActor->SetPosition(-centerX, -centerY, -centerZ);

    double pos[3];
    imageActor->GetPosition(pos);
    qDebug() << "New actor position: " << pos[0] << pos[1] << pos[2];

    imageActor->GetProperty()->SetOpacity(1.0);
    // 添加演员至场景
    sharedRenderer->AddActor(imageActor);
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
    sharedRenderer->SetActiveCamera(camera);
    sharedRenderer->ResetCamera();
    renderWindow->SetMultiSamples(0);
}

void VisualizeTool::zoom(vtkSmartPointer<vtkRenderWindow>& renderWindow,double scaleFactor){
    vtkCamera* camera = renderWindow->GetRenderers()->GetFirstRenderer()->GetActiveCamera();
    // 获取当前相机的位置和焦点
    double position[3];
    double focalPoint[3];
    camera->GetPosition(position);
    camera->GetFocalPoint(focalPoint);
    // 缩放相机
    camera->Zoom(scaleFactor);  // 放大或缩小
    // 确保焦点位置与相机同步
    camera->SetFocalPoint(focalPoint);
    renderWindow->Render();
    renderWindow->GetInteractor()->Render();
}

void VisualizeTool::showImageData(vtkImageData* imageData, vtkRenderWindow* renderWindow, bool useColorMap)
{
    if (!imageData || !renderWindow)
        return;

    // 保留交互器
    vtkRenderWindowInteractor* interactor = renderWindow->GetInteractor();
    vtkInteractorStyle* style = nullptr;
    if (interactor) {
        style = vtkInteractorStyle::SafeDownCast(interactor->GetInteractorStyle());
    }

    // 清除现有渲染器
    renderWindow->GetRenderers()->RemoveAllItems();

    // 创建新的渲染器
    vtkSmartPointer<vtkRenderer> renderer = vtkSmartPointer<vtkRenderer>::New();
    renderer->SetBackground(0.0, 0.0, 0.0); // 黑色背景

    // 获取图像范围
    double range[2];
    imageData->GetScalarRange(range);

    // 创建查找表
    vtkSmartPointer<vtkLookupTable> lookupTable = vtkSmartPointer<vtkLookupTable>::New();
    if (useColorMap) {
        // 使用彩色映射
        lookupTable->SetNumberOfTableValues(256);
        lookupTable->SetHueRange(0.0, 0.667);
        lookupTable->SetSaturationRange(0.0, 1.0);
        lookupTable->SetValueRange(0.0, 1.0);
        lookupTable->SetTableRange(range[0], range[1]);
    } else {
        // 使用灰度映射
        lookupTable->SetNumberOfTableValues(256);
        lookupTable->SetRange(range[0], range[1]);
        lookupTable->SetValueRange(0.0, 1.0);
        lookupTable->SetSaturationRange(0.0, 0.0);
        lookupTable->SetRampToLinear();
    }
    lookupTable->Build();

    // 创建颜色映射
    vtkSmartPointer<vtkImageMapToColors> mapToColors = vtkSmartPointer<vtkImageMapToColors>::New();
    mapToColors->SetLookupTable(lookupTable);
    mapToColors->SetInputData(imageData);
    mapToColors->Update();

    // 创建图像Actor
    vtkSmartPointer<vtkImageActor> imageActor = vtkSmartPointer<vtkImageActor>::New();
    imageActor->GetMapper()->SetInputConnection(mapToColors->GetOutputPort());

    // 添加Actor到渲染器
    renderer->AddActor(imageActor);

    // 设置相机为平行投影
    vtkCamera* camera = renderer->GetActiveCamera();
    camera->ParallelProjectionOn();

    // 添加渲染器到渲染窗口
    renderWindow->AddRenderer(renderer);

    // 恢复交互器样式
    if (interactor && style) {
        interactor->SetInteractorStyle(style);
    }

    // 重置相机并渲染
    renderer->ResetCamera();

    // 调整相机视角，使图像更大
    double zoom = 1.5;  // 增大图像尺寸的系数
    camera->Zoom(zoom);

    renderWindow->Render();
}
