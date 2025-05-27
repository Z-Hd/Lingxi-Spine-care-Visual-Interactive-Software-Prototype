#include "vtkMPRInteractorStyle.h"
#include "RoutePlan.h"
#include "ui_RoutePlan.h"
#include "intraoperativeimage.h"
#include "spinalimage.h"
#include "GlobalVTKDataManager.h"

#include <QDir>
#include <QTimer.h>
#include <QScreen.h>
#include <QApplication>
#include <QLabel>
#include <QImage>
#include <QPixmap>
#include <QVTKOpenGLNativeWidget.h>
#include <QDebug>
#include <QFuture>
#include <QtConcurrent/QtConcurrent>
#include <QMessageBox>

#include <vtkDiskSource.h>
#include <vtkImageFlip.h>
#include <vtkLineSource.h>
#include <vtkTubeFilter.h>
#include <vtkLookupTable.h>
#include <vtkImageMapToColors.h>
#include <vtkImageActor.h>
#include <vtkImageMapper3D.h>
#include <vtkRenderWindow.h>
#include <vtkInteractorStyleImage.h>
#include <vtkDataSet.h>
#include <vtkPointData.h>
#include <vtkCylinderSource.h>
#include <vtkPolyDataMapper.h>
#include <vtkInteractorStyleTrackballCamera.h>
#include <vtkNamedColors.h>
#include <vtkSphereSource.h>
#include <vtkGenericOpenGLRenderWindow.h>
#include <vtkProperty.h>
#include <vtkInteractorStyleTrackballActor.h>
#include <vtkRendererCollection.h>
#include <vtkSphereWidget.h>
#include <vtkSphereRepresentation.h>
#include <vtkCamera.h>
#include <vtkImageData.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkTransform.h>
#include <vtkDataSetMapper.h>
#include <vtkTransformPolyDataFilter.h>
#include <vtkImageCanvasSource2D.h>
#include <vtkActor.h>
#include <vtkRegularPolygonSource.h>
#include <vtkRenderer.h>
#include <vtkNIFTIImageReader.h>
#include <vtkImageData.h>
#include <vtkSmartPointer.h>
#include <vtkImageReslice.h>
#include <vtkMatrix4x4.h>
#include <vtkAlgorithmOutput.h>
#include <vtkCoordinate.h>

RoutePlan::RoutePlan(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RoutePlan)
    , mprEnabled(false)
    , cylinderCreated(false)
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
    vtkSmartPointer<vtkRenderWindow> Model3D_2 = ui->Model3D_2->renderWindow();
    visualizeTool.show3D(Model3D_2,imageSegment,true);
    //createCylinderForTest();
}

// void RoutePlan::createCylinderForTest(){

//     QSurfaceFormat::setDefaultFormat(QVTKOpenGLNativeWidget::defaultFormat());

//     // 获取渲染窗口
//     vtkSmartPointer<vtkRenderWindow> Model3D_2 = ui->Model3D_2->renderWindow();
//     visualizeTool.show3D(Model3D_2,imageSegment,false);

//     // 获取渲染器
//     vtkRendererCollection *renderers = Model3D_2->GetRenderers();
//     auto smartRenderer =renderers->GetFirstRenderer();

//     // 创建颜色对象
//     vtkSmartPointer<vtkNamedColors> colors = vtkSmartPointer<vtkNamedColors>::New();

//     // 创建圆柱体
//     vtkSmartPointer<vtkCylinderSource> cylinderSource = vtkSmartPointer<vtkCylinderSource>::New();
//     cylinderSource->SetHeight(123.0);
//     cylinderSource->SetCenter(60.0, 100.0, 30.0);
//     cylinderSource->SetRadius(2.0);
//     cylinderSource->SetResolution(88);

//     // 创建圆柱体映射器
//     vtkSmartPointer<vtkPolyDataMapper> cylinderMapper = vtkSmartPointer<vtkPolyDataMapper>::New();
//     cylinderMapper->SetInputConnection(cylinderSource->GetOutputPort());

//     // 创建圆柱体执行器
//     vtkSmartPointer<vtkActor> cylinderActor = vtkSmartPointer<vtkActor>::New();
//     cylinderActor->SetMapper(cylinderMapper);
//     cylinderActor->GetProperty()->SetColor(colors->GetColor4d("yellow").GetData());
//     cylinderActor->SetPosition(60.0, 100.0, 30.0); // x, y, z 坐标

//     // 添加圆柱体到三维渲染窗口
//     smartRenderer->AddActor(cylinderActor);

//     // 创建交互器
//     vtkSmartPointer<vtkRenderWindowInteractor> interactor = vtkSmartPointer<vtkRenderWindowInteractor>::New();
//     interactor->SetRenderWindow(Model3D_2);

//     // 设置交互风格为允许控制Actor的移动
//     vtkSmartPointer<vtkInteractorStyleTrackballActor> style = vtkSmartPointer<vtkInteractorStyleTrackballActor>::New();
//     interactor->SetInteractorStyle(style);

//     // 启动交互器
//     interactor->Initialize();
//     interactor->Start();
// }

// on_Path_clicked 方法 (路径规划逻辑)
void RoutePlan::on_Path_clicked()
{
    QSurfaceFormat::setDefaultFormat(QVTKOpenGLNativeWidget::defaultFormat());

    // 获取三维渲染窗口
    vtkSmartPointer<vtkRenderWindow> Model3D_2 = ui->Model3D_2->renderWindow();

    // 获取渲染器
    vtkRendererCollection *renderers = Model3D_2->GetRenderers();
    if (renderers->GetNumberOfItems() == 0) {
        // 如果尚未创建渲染器，先显示3D模型
        visualizeTool.show3D(Model3D_2, imageSegment, true);
        renderers = Model3D_2->GetRenderers();
    }
    vtkRenderer* renderer = renderers->GetFirstRenderer();

    // 创建颜色对象
    vtkSmartPointer<vtkNamedColors> colors = vtkSmartPointer<vtkNamedColors>::New();

    // 创建圆柱体
    vtkSmartPointer<vtkCylinderSource> cylinderSource = vtkSmartPointer<vtkCylinderSource>::New();
    cylinderSource->SetHeight(144.0);
    cylinderSource->SetCenter(61.0, 10.0, -10.0);
    cylinderSource->SetRadius(2);
    cylinderSource->SetResolution(88);

    vtkSmartPointer<vtkPolyDataMapper> cylinderMapper = vtkSmartPointer<vtkPolyDataMapper>::New();
    cylinderMapper->SetInputConnection(cylinderSource->GetOutputPort());

    // 清除之前的圆柱体（如果存在）
    if (cylinderActor && cylinderCreated) {
        renderer->RemoveActor(cylinderActor);
    }

    // 创建新的圆柱体演员
    cylinderActor = vtkSmartPointer<vtkActor>::New();
    cylinderActor->SetMapper(cylinderMapper);
    cylinderActor->GetProperty()->SetColor(colors->GetColor4d("yellow").GetData());
    cylinderActor->SetPosition(60.0, 100.0, 30.0);

    renderer->AddActor(cylinderActor);
    cylinderCreated = true;

    // 刷新窗口
    Model3D_2->Render();

    // 显示确认消息
    qDebug() << "圆柱体已创建!";
}

// on_Plan_clicked 方法 (执行规划，例如发送到机器人)
void RoutePlan::on_Project_clicked()
{
    if (!cylinderCreated || !cylinderActor) {
        qDebug() << "请先创建圆柱体!";
        return;
    }

    qDebug() << "开始投影圆柱体...";

    // 执行投影
    //projectCylinderToPlanes();

    qDebug() << "投影完成!";
}

// 添加或修改 on_Reconstruct_clicked 方法
void RoutePlan::on_Reconstruct_clicked()
{
    // 确保图像数据已加载
    if (!imageData) {
        QMessageBox::warning(this, "警告", "请先加载图像数据");
        return;
    }

    // 初始化MPR视图
    initMPRViews();

    // 更新MPR视图
    updateMPRViews();
}

void RoutePlan::initMPRViews()
{
    if (!imageData) {
        qDebug() << "无法初始化MPR视图：图像数据为空";
        return;
    }

    // 创建重切片对象
    this->createReslice();

    // 获取渲染窗口
    vtkSmartPointer<vtkRenderWindow> sagittalRenderWindow = ui->SagittalPlane_2->renderWindow();
    vtkSmartPointer<vtkRenderWindow> axialRenderWindow = ui->TransversePlane_2->renderWindow();
    vtkSmartPointer<vtkRenderWindow> coronalRenderWindow = ui->CoronalPlane_2->renderWindow();

    // 清空现有渲染器
    sagittalRenderWindow->GetRenderers()->RemoveAllItems();
    axialRenderWindow->GetRenderers()->RemoveAllItems();
    coronalRenderWindow->GetRenderers()->RemoveAllItems();

    // 创建新的渲染器
    this->sagittalRenderer = vtkSmartPointer<vtkRenderer>::New();
    this->axialRenderer = vtkSmartPointer<vtkRenderer>::New();
    this->coronalRenderer = vtkSmartPointer<vtkRenderer>::New();

    // 添加渲染器到渲染窗口
    sagittalRenderWindow->AddRenderer(this->sagittalRenderer);
    axialRenderWindow->AddRenderer(this->axialRenderer);
    coronalRenderWindow->AddRenderer(this->coronalRenderer);

    // 为每个视图创建颜色映射
    vtkSmartPointer<vtkLookupTable> sagittalLUT = vtkSmartPointer<vtkLookupTable>::New();
    vtkSmartPointer<vtkLookupTable> axialLUT = vtkSmartPointer<vtkLookupTable>::New();
    vtkSmartPointer<vtkLookupTable> coronalLUT = vtkSmartPointer<vtkLookupTable>::New();

    // 设置灰度映射
    double range[2];
    imageData->GetScalarRange(range);

    sagittalLUT->SetRange(range[0], range[1]);
    sagittalLUT->SetValueRange(0.0, 1.0);
    sagittalLUT->SetSaturationRange(0.0, 0.0);
    sagittalLUT->SetRampToLinear();
    sagittalLUT->Build();

    axialLUT->SetRange(range[0], range[1]);
    axialLUT->SetValueRange(0.0, 1.0);
    axialLUT->SetSaturationRange(0.0, 0.0);
    axialLUT->SetRampToLinear();
    axialLUT->Build();

    coronalLUT->SetRange(range[0], range[1]);
    coronalLUT->SetValueRange(0.0, 1.0);
    coronalLUT->SetSaturationRange(0.0, 0.0);
    coronalLUT->SetRampToLinear();
    coronalLUT->Build();

    // 创建颜色映射过滤器
    vtkSmartPointer<vtkImageMapToColors> sagittalColors = vtkSmartPointer<vtkImageMapToColors>::New();
    vtkSmartPointer<vtkImageMapToColors> axialColors = vtkSmartPointer<vtkImageMapToColors>::New();
    vtkSmartPointer<vtkImageMapToColors> coronalColors = vtkSmartPointer<vtkImageMapToColors>::New();

    sagittalColors->SetLookupTable(sagittalLUT);
    sagittalColors->SetInputConnection(this->sagittalReslice->GetOutputPort());
    sagittalColors->Update();

    axialColors->SetLookupTable(axialLUT);
    axialColors->SetInputConnection(this->axialReslice->GetOutputPort());
    axialColors->Update();

    coronalColors->SetLookupTable(coronalLUT);
    coronalColors->SetInputConnection(this->coronalReslice->GetOutputPort());
    coronalColors->Update();

    // 创建图像演员
    vtkSmartPointer<vtkImageActor> sagittalActor = vtkSmartPointer<vtkImageActor>::New();
    vtkSmartPointer<vtkImageActor> axialActor = vtkSmartPointer<vtkImageActor>::New();
    vtkSmartPointer<vtkImageActor> coronalActor = vtkSmartPointer<vtkImageActor>::New();

    sagittalActor->GetMapper()->SetInputConnection(sagittalColors->GetOutputPort());
    axialActor->GetMapper()->SetInputConnection(axialColors->GetOutputPort());
    coronalActor->GetMapper()->SetInputConnection(coronalColors->GetOutputPort());

    // 添加演员到渲染器
    this->sagittalRenderer->AddActor(sagittalActor);
    this->axialRenderer->AddActor(axialActor);
    this->coronalRenderer->AddActor(coronalActor);

    // 创建交互样式
    this->sagittalStyle = vtkSmartPointer<vtkMPRInteractorStyle>::New();
    this->axialStyle = vtkSmartPointer<vtkMPRInteractorStyle>::New();
    this->coronalStyle = vtkSmartPointer<vtkMPRInteractorStyle>::New();

    // 初始化交互样式
    this->sagittalStyle->Initialize(this, vtkMPRInteractorStyle::SAGITTAL_VIEW, this->sagittalRenderer, this->sagittalReslice);
    this->axialStyle->Initialize(this, vtkMPRInteractorStyle::AXIAL_VIEW, this->axialRenderer, this->axialReslice);
    this->coronalStyle->Initialize(this, vtkMPRInteractorStyle::CORONAL_VIEW, this->coronalRenderer, this->coronalReslice);

    // 设置交互器样式
    sagittalRenderWindow->GetInteractor()->SetInteractorStyle(this->sagittalStyle);
    axialRenderWindow->GetInteractor()->SetInteractorStyle(this->axialStyle);
    coronalRenderWindow->GetInteractor()->SetInteractorStyle(this->coronalStyle);

    // 设置视图之间的关联
    this->sagittalStyle->SetOtherViews(this->axialStyle, this->coronalStyle);
    this->axialStyle->SetOtherViews(this->coronalStyle, this->sagittalStyle);
    this->coronalStyle->SetOtherViews(this->sagittalStyle, this->axialStyle);

    // 重置相机并放大图像
    this->sagittalRenderer->ResetCamera();
    this->axialRenderer->ResetCamera();
    this->coronalRenderer->ResetCamera();

    // 放大图像，使用较小的缩放系数
    this->sagittalRenderer->GetActiveCamera()->Zoom(3.0);  // 从8.0减小到3.0
    this->axialRenderer->GetActiveCamera()->Zoom(3.0);     // 从8.0减小到3.0
    this->coronalRenderer->GetActiveCamera()->Zoom(3.0);   // 从8.0减小到3.0

    // 更新渲染
    sagittalRenderWindow->Render();
    axialRenderWindow->Render();
    coronalRenderWindow->Render();

    // 标记MPR已启用
    this->mprEnabled = true;
}

// 添加或修改 createReslice 方法
void RoutePlan::createReslice()
{
    if (!imageData) {
        return;
    }

    // 获取图像数据的范围和间距
    int extent[6];
    double spacing[3];
    double origin[3];
    double center[3];

    imageData->GetExtent(extent);
    imageData->GetSpacing(spacing);
    imageData->GetOrigin(origin);

    // 计算图像中心
    center[0] = origin[0] + spacing[0] * 0.5 * (extent[0] + extent[1]);
    center[1] = origin[1] + spacing[1] * 0.5 * (extent[2] + extent[3]);
    center[2] = origin[2] + spacing[2] * 0.5 * (extent[4] + extent[5]);

    // 创建矩阵
    vtkSmartPointer<vtkMatrix4x4> sagittalMatrix = vtkSmartPointer<vtkMatrix4x4>::New();
    vtkSmartPointer<vtkMatrix4x4> axialMatrix = vtkSmartPointer<vtkMatrix4x4>::New();
    vtkSmartPointer<vtkMatrix4x4> coronalMatrix = vtkSmartPointer<vtkMatrix4x4>::New();

    // 设置矩阵
    sagittalMatrix->DeepCopy(visualizeTool.sagittalElements);
    axialMatrix->DeepCopy(visualizeTool.axialElements);
    coronalMatrix->DeepCopy(visualizeTool.coronalElements);

    // 设置中心点
    sagittalMatrix->SetElement(0, 3, center[0]);
    sagittalMatrix->SetElement(1, 3, center[1]);
    sagittalMatrix->SetElement(2, 3, center[2]);

    axialMatrix->SetElement(0, 3, center[0]);
    axialMatrix->SetElement(1, 3, center[1]);
    axialMatrix->SetElement(2, 3, center[2]);

    coronalMatrix->SetElement(0, 3, center[0]);
    coronalMatrix->SetElement(1, 3, center[1]);
    coronalMatrix->SetElement(2, 3, center[2]);

    // 创建重切片对象
    this->sagittalReslice = vtkSmartPointer<vtkImageReslice>::New();
    this->axialReslice = vtkSmartPointer<vtkImageReslice>::New();
    this->coronalReslice = vtkSmartPointer<vtkImageReslice>::New();

    // 设置输入数据
    this->sagittalReslice->SetInputData(imageData);
    this->axialReslice->SetInputData(imageData);
    this->coronalReslice->SetInputData(imageData);

    // 设置输出维度
    this->sagittalReslice->SetOutputDimensionality(2);
    this->axialReslice->SetOutputDimensionality(2);
    this->coronalReslice->SetOutputDimensionality(2);

    // 设置重切片轴
    this->sagittalReslice->SetResliceAxes(sagittalMatrix);
    this->axialReslice->SetResliceAxes(axialMatrix);
    this->coronalReslice->SetResliceAxes(coronalMatrix);

    // 设置插值模式
    this->sagittalReslice->SetInterpolationModeToLinear();
    this->axialReslice->SetInterpolationModeToLinear();
    this->coronalReslice->SetInterpolationModeToLinear();

    // 更新重切片
    this->sagittalReslice->Update();
    this->axialReslice->Update();
    this->coronalReslice->Update();
}

void RoutePlan::setupResliceMatrix()
{
    if (!imageData) {
        qDebug() << "没有图像数据，无法设置重切片矩阵";
        return;
    }

    // 获取图像范围和间距
    int extent[6];
    double spacing[3];
    double origin[3];
    double center[3];

    imageData->GetExtent(extent);
    imageData->GetSpacing(spacing);
    imageData->GetOrigin(origin);

    // 计算图像中心
    center[0] = origin[0] + spacing[0] * 0.5 * (extent[0] + extent[1]);
    center[1] = origin[1] + spacing[1] * 0.5 * (extent[2] + extent[3]);
    center[2] = origin[2] + spacing[2] * 0.5 * (extent[4] + extent[5]);

    // 创建矩阵
    vtkSmartPointer<vtkMatrix4x4> sagittalMatrix = vtkSmartPointer<vtkMatrix4x4>::New();
    vtkSmartPointer<vtkMatrix4x4> axialMatrix = vtkSmartPointer<vtkMatrix4x4>::New();
    vtkSmartPointer<vtkMatrix4x4> coronalMatrix = vtkSmartPointer<vtkMatrix4x4>::New();

    // 设置矩阵元素 - 修正方向问题
    // 矢状面 (YZ平面)
    sagittalMatrix->DeepCopy(visualizeTool.sagittalElements);

    // 横断面 (XY平面)
    axialMatrix->DeepCopy(visualizeTool.axialElements);

    // 冠状面 (XZ平面)
    coronalMatrix->DeepCopy(visualizeTool.coronalElements);

    // 设置中心点
    sagittalMatrix->SetElement(0, 3, center[0]);
    sagittalMatrix->SetElement(1, 3, center[1]);
    sagittalMatrix->SetElement(2, 3, center[2]);

    axialMatrix->SetElement(0, 3, center[0]);
    axialMatrix->SetElement(1, 3, center[1]);
    axialMatrix->SetElement(2, 3, center[2]);

    coronalMatrix->SetElement(0, 3, center[0]);
    coronalMatrix->SetElement(1, 3, center[1]);
    coronalMatrix->SetElement(2, 3, center[2]);

    // 设置重切片矩阵
    sagittalReslice->SetResliceAxes(sagittalMatrix);
    axialReslice->SetResliceAxes(axialMatrix);
    coronalReslice->SetResliceAxes(coronalMatrix);
}

// 添加 updateMPRViews 方法
void RoutePlan::updateMPRViews()
{
    if (!this->mprEnabled) {
        return;
    }

    // 更新所有视图的参考线
    if (this->sagittalStyle && this->axialStyle && this->coronalStyle) {
        this->sagittalStyle->UpdateReferenceLines();
        this->axialStyle->UpdateReferenceLines();
        this->coronalStyle->UpdateReferenceLines();
    }

    // 刷新渲染窗口
    ui->SagittalPlane_2->renderWindow()->Render();
    ui->TransversePlane_2->renderWindow()->Render();
    ui->CoronalPlane_2->renderWindow()->Render();
}
