#include "vtkMPRInteractorStyle.h"
#include "RoutePlan.h"
#include <vtkObjectFactory.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkCoordinate.h>
#include <vtkRenderer.h>
#include <QDebug>
#include <vtkCamera.h>
#include <vtkMath.h>
#include <vtkTransform.h>
#include <vtkImageData.h>
#include <vtkLine.h>
#include <vtkAlgorithmOutput.h>

// 定义颜色常量
const double vtkMPRInteractorStyle::RED_COLOR[3] = {1.0, 0.0, 0.0};
const double vtkMPRInteractorStyle::YELLOW_COLOR[3] = {1.0, 1.0, 0.0};
const double vtkMPRInteractorStyle::BLUE_COLOR[3] = {0.0, 0.0, 1.0};     // 蓝色 - 矢状面参考线

vtkStandardNewMacro(vtkMPRInteractorStyle);

vtkMPRInteractorStyle::vtkMPRInteractorStyle()
{
    this->Interacting_ = false;
    this->StartX_ = 0;
    this->StartY_ = 0;
    this->StartSlicePosition_ = 0.0;
    this->DraggingLine_ = NO_LINE;
    this->RoutePlan_ = nullptr;

    // 初始化参考线Actor
    this->HorizontalLineActor_ = vtkSmartPointer<vtkActor>::New();
    this->VerticalLineActor_ = vtkSmartPointer<vtkActor>::New();
}

vtkMPRInteractorStyle::~vtkMPRInteractorStyle()
{
}

void vtkMPRInteractorStyle::Initialize(RoutePlan* routePlan, ViewType viewType,
                                       vtkSmartPointer<vtkRenderer> renderer,
                                       vtkSmartPointer<vtkImageReslice> reslice)
{
    this->RoutePlan_ = routePlan;
    this->ViewType_ = viewType;
    this->Renderer_ = renderer;
    this->Reslice_ = reslice;

    // 创建参考线
    this->CreateReferenceLines();

    // 禁用窗宽窗位调整功能
    this->DisableWindowLevelInteraction();

    // 设置交互器
    if (renderer && renderer->GetRenderWindow() && renderer->GetRenderWindow()->GetInteractor()) {
        this->SetInteractor(renderer->GetRenderWindow()->GetInteractor());
    }

    // 确保参考线在最上层
    if (this->Renderer_) {
        // 将参考线添加到渲染器的最后，确保它们在最上层
        this->Renderer_->RemoveActor(this->HorizontalLineActor_);
        this->Renderer_->RemoveActor(this->VerticalLineActor_);
        this->Renderer_->AddActor(this->HorizontalLineActor_);
        this->Renderer_->AddActor(this->VerticalLineActor_);
    }
}

void vtkMPRInteractorStyle::CreateReferenceLines()
{
    // 创建水平线源 - 增加长度
    vtkSmartPointer<vtkLineSource> horizontalLineSource = vtkSmartPointer<vtkLineSource>::New();
    horizontalLineSource->SetPoint1(-220, 0, 0);
    horizontalLineSource->SetPoint2(220, 0, 0);

    // 创建垂直线源 - 增加长度
    vtkSmartPointer<vtkLineSource> verticalLineSource = vtkSmartPointer<vtkLineSource>::New();
    verticalLineSource->SetPoint1(0, -220, 0);
    verticalLineSource->SetPoint2(0, 220, 0);

    // 创建水平线映射器
    vtkSmartPointer<vtkPolyDataMapper> horizontalLineMapper = vtkSmartPointer<vtkPolyDataMapper>::New();
    horizontalLineMapper->SetInputConnection(horizontalLineSource->GetOutputPort());

    // 创建垂直线映射器
    vtkSmartPointer<vtkPolyDataMapper> verticalLineMapper = vtkSmartPointer<vtkPolyDataMapper>::New();
    verticalLineMapper->SetInputConnection(verticalLineSource->GetOutputPort());

    // 创建水平线Actor
    this->HorizontalLineActor_ = vtkSmartPointer<vtkActor>::New();
    this->HorizontalLineActor_->SetMapper(horizontalLineMapper);

    // 创建垂直线Actor
    this->VerticalLineActor_ = vtkSmartPointer<vtkActor>::New();
    this->VerticalLineActor_->SetMapper(verticalLineMapper);

    // 根据视图类型设置参考线颜色
    switch (this->ViewType_) {
    case SAGITTAL_VIEW:
        // 矢状面视图：水平线为横断面参考线（黄色），垂直线为冠状面参考线（红色）
        this->HorizontalLineActor_->GetProperty()->SetColor(YELLOW_COLOR[0], YELLOW_COLOR[1], YELLOW_COLOR[2]);
        this->VerticalLineActor_->GetProperty()->SetColor(RED_COLOR[0], RED_COLOR[1], RED_COLOR[2]);
        break;
    case AXIAL_VIEW:
        // 横断面视图：水平线为冠状面参考线（红色），垂直线为矢状面参考线（蓝色）
        this->HorizontalLineActor_->GetProperty()->SetColor(RED_COLOR[0], RED_COLOR[1], RED_COLOR[2]);
        this->VerticalLineActor_->GetProperty()->SetColor(BLUE_COLOR[0], BLUE_COLOR[1], BLUE_COLOR[2]);
        break;
    case CORONAL_VIEW:
        // 冠状面视图：水平线为横断面参考线（黄色），垂直线为矢状面参考线（蓝色）
        this->HorizontalLineActor_->GetProperty()->SetColor(YELLOW_COLOR[0], YELLOW_COLOR[1], YELLOW_COLOR[2]);
        this->VerticalLineActor_->GetProperty()->SetColor(BLUE_COLOR[0], BLUE_COLOR[1], BLUE_COLOR[2]);
        break;
    }

    // 设置参考线始终显示在最上层
    this->HorizontalLineActor_->SetPosition(0, 0, 0.1); // 稍微提高Z值
    this->VerticalLineActor_->SetPosition(0, 0, 0.1);   // 稍微提高Z值

    // 设置线宽
    this->HorizontalLineActor_->GetProperty()->SetLineWidth(2.5);
    this->VerticalLineActor_->GetProperty()->SetLineWidth(2.5);

    // 启用多边形偏移，确保线条始终可见
    this->HorizontalLineActor_->GetProperty()->SetLineStipplePattern(0xFFFF);
    this->VerticalLineActor_->GetProperty()->SetLineStipplePattern(0xFFFF);
    this->HorizontalLineActor_->GetProperty()->SetPointSize(5);
    this->VerticalLineActor_->GetProperty()->SetPointSize(5);

    // 设置参考线的渲染优先级
    this->HorizontalLineActor_->SetPickable(false); // 不可拾取，避免被其他交互干扰
    this->VerticalLineActor_->SetPickable(false);

    // 添加参考线到渲染器
    if (this->Renderer_) {
        this->Renderer_->AddActor(this->HorizontalLineActor_);
        this->Renderer_->AddActor(this->VerticalLineActor_);
    }
}

void vtkMPRInteractorStyle::SetOtherViews(vtkSmartPointer<vtkMPRInteractorStyle> view1,
                                          vtkSmartPointer<vtkMPRInteractorStyle> view2)
{
    this->OtherView1_ = view1;
    this->OtherView2_ = view2;

    // 初始化后立即更新参考线位置
    this->UpdateLineActorPosition();
}

void vtkMPRInteractorStyle::UpdateReferenceLines()
{
    // 更新当前视图的参考线
    this->UpdateLineActorPosition();

    // 更新其他视图的参考线
    if (this->OtherView1_)
        this->OtherView1_->UpdateLineActorPosition();
    if (this->OtherView2_)
        this->OtherView2_->UpdateLineActorPosition();
}

double vtkMPRInteractorStyle::GetSlicePosition()
{
    if (!this->Reslice_)
        return 0.0;

    vtkMatrix4x4* matrix = this->Reslice_->GetResliceAxes();
    double position = 0.0;

    // 根据视图类型获取相应的切片位置
    switch (this->ViewType_)
    {
    case SAGITTAL_VIEW:
        position = matrix->GetElement(0, 3);
        break;
    case AXIAL_VIEW:
        position = matrix->GetElement(2, 3);
        break;
    case CORONAL_VIEW:
        position = matrix->GetElement(1, 3);
        break;
    }

    return position;
}

// 设置切片位置
void vtkMPRInteractorStyle::SetSlicePosition(double position)
{
    if (!this->Reslice_)
        return;

    vtkMatrix4x4* matrix = this->Reslice_->GetResliceAxes();
    if (!matrix) {
        qDebug() << "无法获取重切片矩阵";
        return;
    }

    // 根据视图类型设置相应的切片位置
    switch (this->ViewType_)
    {
    case SAGITTAL_VIEW:
        matrix->SetElement(0, 3, position);
        break;
    case AXIAL_VIEW:
        matrix->SetElement(2, 3, position);
        break;
    case CORONAL_VIEW:
        matrix->SetElement(1, 3, position);
        break;
    }

    // 更新重切片
    this->Reslice_->Update();

    // 发送切片位置改变信号
    emit SlicePositionChanged(position);

    // 更新参考线
    this->UpdateReferenceLines();

    // 刷新渲染窗口
    if (this->Renderer_ && this->Renderer_->GetRenderWindow()) {
        this->Renderer_->GetRenderWindow()->Render();
    }
}

// 更新参考线位置的方法
void vtkMPRInteractorStyle::UpdateLineActorPosition()
{
    if (!this->OtherView1_ || !this->OtherView2_) {
        return;
    }

    // 获取其他两个视图的切片位置
    double pos1 = this->OtherView1_->GetSlicePosition();
    double pos2 = this->OtherView2_->GetSlicePosition();

    // 获取线源对象
    vtkLineSource* horizontalLineSource = vtkLineSource::SafeDownCast(
        this->HorizontalLineActor_->GetMapper()->GetInputConnection(0, 0)->GetProducer());
    vtkLineSource* verticalLineSource = vtkLineSource::SafeDownCast(
        this->VerticalLineActor_->GetMapper()->GetInputConnection(0, 0)->GetProducer());

    if (!horizontalLineSource || !verticalLineSource) {
        qDebug() << "无法获取线源对象";
        return;
    }

    // 使用更合适的线长度
    const double lineLength = 200.0;

    // 根据视图类型更新参考线位置
    switch (this->ViewType_) {
    case SAGITTAL_VIEW:
        // 矢状面视图：水平线为横断面参考线，垂直线为冠状面参考线
        horizontalLineSource->SetPoint1(-lineLength, pos1, 0);
        horizontalLineSource->SetPoint2(lineLength, pos1, 0);
        verticalLineSource->SetPoint1(pos2, -lineLength, 0);
        verticalLineSource->SetPoint2(pos2, lineLength, 0);
        break;
    case AXIAL_VIEW:
        // 横断面视图：水平线为冠状面参考线，垂直线为矢状面参考线
        horizontalLineSource->SetPoint1(-lineLength, pos1, 0);
        horizontalLineSource->SetPoint2(lineLength, pos1, 0);
        verticalLineSource->SetPoint1(pos2, -lineLength, 0);
        verticalLineSource->SetPoint2(pos2, lineLength, 0);
        break;
    case CORONAL_VIEW:
        // 冠状面视图：水平线为横断面参考线，垂直线为矢状面参考线
        horizontalLineSource->SetPoint1(-lineLength, pos1, 0);
        horizontalLineSource->SetPoint2(lineLength, pos1, 0);
        verticalLineSource->SetPoint1(pos2, -lineLength, 0);
        verticalLineSource->SetPoint2(pos2, lineLength, 0);
        break;
    }

    // 更新线源
    horizontalLineSource->Update();
    verticalLineSource->Update();

    // 确保参考线在最上层
    this->HorizontalLineActor_->SetPosition(0, 0, 0.1);
    this->VerticalLineActor_->SetPosition(0, 0, 0.1);
}

// 鼠标移动事件
void vtkMPRInteractorStyle::OnMouseMove()
{
    if (!this->Interacting_) {
        // 如果当前状态是窗宽窗位调整，则不执行任何操作
        if (this->State == VTKIS_WINDOW_LEVEL) {
            // 重置状态，防止窗宽窗位调整
            this->State = VTKIS_NONE;
            return;
        }
        vtkInteractorStyleImage::OnMouseMove();
        return;
    }

    int x = this->Interactor->GetEventPosition()[0];
    int y = this->Interactor->GetEventPosition()[1];

    // 计算鼠标移动距离
    int dx = x - this->StartX_;
    int dy = y - this->StartY_;

    // 根据拖动的线类型和视图类型计算新的切片位置
    double newPosition = this->StartSlicePosition_;
    double scaleFactor = 0.5; // 调整移动灵敏度

    if (this->DraggingLine_ == HORIZONTAL_LINE) {
        // 水平线拖动 - 使用垂直方向的移动距离，反转方向
        newPosition = this->StartSlicePosition_ + dy * scaleFactor;
    } else if (this->DraggingLine_ == VERTICAL_LINE) {
        // 垂直线拖动 - 使用水平方向的移动距离，反转方向
        newPosition = this->StartSlicePosition_ + dx * scaleFactor;
    }

    // 根据拖动的线类型更新相应视图的切片位置
    if (this->DraggingLine_ == HORIZONTAL_LINE) {
        if (this->OtherView1_) {
            this->OtherView1_->SetSlicePosition(newPosition);
        }
    } else if (this->DraggingLine_ == VERTICAL_LINE) {
        if (this->OtherView2_) {
            this->OtherView2_->SetSlicePosition(newPosition);
        }
    }

    // 更新所有视图的参考线
    this->UpdateReferenceLines();

    // 刷新渲染窗口
    if (this->GetInteractor()) {
        this->GetInteractor()->Render();
    }
}

// 鼠标左键按下事件
void vtkMPRInteractorStyle::OnLeftButtonDown()
{
    int x = this->Interactor->GetEventPosition()[0];
    int y = this->Interactor->GetEventPosition()[1];

    this->StartX_ = x;
    this->StartY_ = y;
    this->StartSlicePosition_ = this->GetSlicePosition();

    // 检查是否点击了参考线
    if (this->HorizontalLineActor_ && this->VerticalLineActor_ && this->Renderer_) {
        // 获取其他两个视图的切片位置
        double pos1 = 0.0;
        double pos2 = 0.0;
        if (this->OtherView1_) pos1 = this->OtherView1_->GetSlicePosition();
        if (this->OtherView2_) pos2 = this->OtherView2_->GetSlicePosition();

        // 将世界坐标转换为显示坐标
        vtkSmartPointer<vtkCoordinate> coordinate = vtkSmartPointer<vtkCoordinate>::New();
        coordinate->SetCoordinateSystemToWorld();

        double horizontalLineY = 0.0;
        double verticalLineX = 0.0;

        switch (this->ViewType_) {
        case SAGITTAL_VIEW:
            coordinate->SetValue(0, pos1, 0);
            horizontalLineY = coordinate->GetComputedDisplayValue(this->Renderer_)[1];

            coordinate->SetValue(pos2, 0, 0);
            verticalLineX = coordinate->GetComputedDisplayValue(this->Renderer_)[0];
            break;
        case AXIAL_VIEW:
            coordinate->SetValue(0, pos1, 0);
            horizontalLineY = coordinate->GetComputedDisplayValue(this->Renderer_)[1];

            coordinate->SetValue(pos2, 0, 0);
            verticalLineX = coordinate->GetComputedDisplayValue(this->Renderer_)[0];
            break;
        case CORONAL_VIEW:
            coordinate->SetValue(0, pos1, 0);
            horizontalLineY = coordinate->GetComputedDisplayValue(this->Renderer_)[1];

            coordinate->SetValue(pos2, 0, 0);
            verticalLineX = coordinate->GetComputedDisplayValue(this->Renderer_)[0];
            break;
        }

        // 检查鼠标是否在参考线附近
        const int lineThreshold = 10; // 线的点击容差
        if (abs(y - horizontalLineY) < lineThreshold) {
            this->DraggingLine_ = HORIZONTAL_LINE;
            this->Interacting_ = true;
        } else if (abs(x - verticalLineX) < lineThreshold) {
            this->DraggingLine_ = VERTICAL_LINE;
            this->Interacting_ = true;
        } else {
            this->DraggingLine_ = NO_LINE;
            vtkInteractorStyleImage::OnLeftButtonDown();
        }
    } else {
        this->DraggingLine_ = NO_LINE;
        vtkInteractorStyleImage::OnLeftButtonDown();
    }
}

void vtkMPRInteractorStyle::OnLeftButtonUp()
{
    this->Interacting_ = false;
    this->DraggingLine_ = NO_LINE;
    vtkInteractorStyleImage::OnLeftButtonUp();
}

// 禁用窗宽窗位调整功能
void vtkMPRInteractorStyle::DisableWindowLevelInteraction()
{
    // 设置交互模式为仅切片
    this->SetInteractionModeToImageSlicing();

    // 我们已经重写了中键和右键的事件处理函数
    // 这将阻止默认的窗宽窗位调整行为
}

// 重写中键按下事件
void vtkMPRInteractorStyle::OnMiddleButtonDown()
{
    // 使用与左键相同的处理方式，而不是默认的窗宽窗位调整
    this->OnLeftButtonDown();
}

// 重写中键释放事件
void vtkMPRInteractorStyle::OnMiddleButtonUp()
{
    // 使用与左键相同的处理方式
    this->OnLeftButtonUp();
}

// 重写右键按下事件
void vtkMPRInteractorStyle::OnRightButtonDown()
{
    // 使用与左键相同的处理方式，而不是默认的窗宽窗位调整
    this->OnLeftButtonDown();
}

// 重写右键释放事件
void vtkMPRInteractorStyle::OnRightButtonUp()
{
    // 使用与左键相同的处理方式
    this->OnLeftButtonUp();
}
