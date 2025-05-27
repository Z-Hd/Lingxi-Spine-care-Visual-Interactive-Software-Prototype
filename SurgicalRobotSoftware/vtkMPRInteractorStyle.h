#ifndef VTKMPRINTERACTORSTYLE_H
#define VTKMPRINTERACTORSTYLE_H

#include <vtkInteractorStyleImage.h>
#include <vtkSmartPointer.h>
#include <vtkImageActor.h>
#include <vtkImageMapToColors.h>
#include <vtkActor.h>
#include <vtkLineSource.h>
#include <vtkPolyDataMapper.h>
#include <vtkProperty.h>
#include <vtkRenderer.h>
#include <vtkRenderWindow.h>
#include <vtkImageReslice.h>
#include <vtkMatrix4x4.h>
#include <QObject>
#include <vtkLine.h>

class RoutePlan;

// 定义MPR交互样式类，继承自vtkInteractorStyleImage和QObject
class vtkMPRInteractorStyle : public QObject, public vtkInteractorStyleImage
{
    Q_OBJECT

public:
    static vtkMPRInteractorStyle* New();
    vtkTypeMacro(vtkMPRInteractorStyle, vtkInteractorStyleImage);

    // 设置视图类型（矢状面、横断面、冠状面）
    enum ViewType { SAGITTAL_VIEW, AXIAL_VIEW, CORONAL_VIEW };

    // 定义拖动的线类型
    enum LineType { NO_LINE, HORIZONTAL_LINE, VERTICAL_LINE };

    // 参考线颜色常量
    static const double RED_COLOR[3];    // 红色 - 冠状面参考线
    static const double YELLOW_COLOR[3]; // 黄色 - 横断面参考线
    static const double BLUE_COLOR[3];   // 蓝色 - 矢状面参考线

    // 水平和垂直参考线 - 设为公有以便外部访问
    vtkSmartPointer<vtkActor> HorizontalLineActor_;
    vtkSmartPointer<vtkActor> VerticalLineActor_;

    // 初始化交互样式
    void Initialize(RoutePlan* routePlan, ViewType viewType,
                    vtkSmartPointer<vtkRenderer> renderer,
                    vtkSmartPointer<vtkImageReslice> reslice);

    // 更新参考线
    void UpdateReferenceLines();

    // 设置其他两个视图的交互样式
    void SetOtherViews(vtkSmartPointer<vtkMPRInteractorStyle> view1,
                       vtkSmartPointer<vtkMPRInteractorStyle> view2);

    // 获取当前视图类型
    ViewType GetViewType() { return ViewType_; }

    // 获取当前切片位置
    double GetSlicePosition();

    // 设置切片位置
    void SetSlicePosition(double position);

    // 禁用窗宽窗位调整功能
    void DisableWindowLevelInteraction();

    // 重写鼠标移动事件
    virtual void OnMouseMove() override;

    // 重写左键按下事件
    virtual void OnLeftButtonDown() override;

    // 重写左键释放事件
    virtual void OnLeftButtonUp() override;

    // 重写中键按下事件
    virtual void OnMiddleButtonDown() override;

    // 重写中键释放事件
    virtual void OnMiddleButtonUp() override;

    // 重写右键按下事件
    virtual void OnRightButtonDown() override;

    // 重写右键释放事件
    virtual void OnRightButtonUp() override;

    vtkSmartPointer<vtkRenderer> Renderer_;

signals:
    // 切片位置改变信号
    void SlicePositionChanged(double position);

protected:
    vtkMPRInteractorStyle();
    ~vtkMPRInteractorStyle();

    // 创建参考线
    void CreateReferenceLines();

    // 更新参考线位置
    void UpdateLineActorPosition();

    RoutePlan* RoutePlan_;
    ViewType ViewType_;
    vtkSmartPointer<vtkImageReslice> Reslice_;

    // 其他两个视图
    vtkSmartPointer<vtkMPRInteractorStyle> OtherView1_;
    vtkSmartPointer<vtkMPRInteractorStyle> OtherView2_;

    // 交互状态
    bool Interacting_;
    int StartX_;
    int StartY_;
    double StartSlicePosition_; // 开始拖动时的切片位置
    LineType DraggingLine_;     // 当前拖动的线类型

    // 窗宽窗位事件观察器ID
    unsigned long WindowLevelStartEventId;
    unsigned long WindowLevelEndEventId;
};

#endif // VTKMPRINTERACTORSTYLE_H
