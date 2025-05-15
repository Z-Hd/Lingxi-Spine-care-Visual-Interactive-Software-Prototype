#ifndef ROUTEPLAN_H
#define ROUTEPLAN_H

#include <QWidget>
#include <vtkSmartPointer.h> // 包含智能指针头文件
#include "visualizeTool.h" // 包含 VisualizeTool 定义

#include <vtkActor.h>
#include <vtkImageReslice.h>
#include <vtkMatrix4x4.h>
#include <vtkRenderer.h>

// 前向声明
class vtkMPRInteractorStyle;

namespace Ui {
class RoutePlan;
}

class RoutePlan : public QWidget
{
    Q_OBJECT

public:
    explicit RoutePlan(QWidget *parent = nullptr);
    ~RoutePlan();

    // 初始化图像和视图
    void initImage();

    // 创建测试圆柱体
    void createCylinderForTest();

    // 初始化MPR视图
    void initMPRViews();

    // 更新MPR视图
    void updateMPRViews();

signals:
    void nextButton_pressed();
    void preButton_pressed();

private slots:
    void TransverseSliderChange(int value);
    void CoronalSliderChange(int value);
    void SagittalSliderChange(int value);
    void on_Next_2_clicked();
    void on_Previous_2_clicked();
    void on_Refresh_2_clicked();
    void on_Segment_2_clicked();
    void on_Path_clicked();
    void on_Project_clicked();
    void on_Reconstruct_clicked();

private:
    Ui::RoutePlan *ui;
    vtkImageData *imageData; // 使用智能指针管理图像数据
    VisualizeTool visualizeTool;
    vtkImageData *imageSegment; // 分割图像数据，生命周期由 GlobalVTKDataManager 管理
    bool isSegment=false; // 是否显示分割图像

    // 圆柱体相关
    bool cylinderCreated;
    vtkSmartPointer<vtkActor> cylinderActor; // 圆柱体 Actor

    // MPR相关成员变量
    bool mprEnabled;

    // 三个视图的重切片对象
    vtkSmartPointer<vtkImageReslice> sagittalReslice;
    vtkSmartPointer<vtkImageReslice> axialReslice;
    vtkSmartPointer<vtkImageReslice> coronalReslice;

    // 三个视图的渲染器
    vtkSmartPointer<vtkRenderer> sagittalRenderer;
    vtkSmartPointer<vtkRenderer> axialRenderer;
    vtkSmartPointer<vtkRenderer> coronalRenderer;

    // 三个视图的交互样式
    vtkSmartPointer<vtkMPRInteractorStyle> sagittalStyle;
    vtkSmartPointer<vtkMPRInteractorStyle> axialStyle;
    vtkSmartPointer<vtkMPRInteractorStyle> coronalStyle;

    // 创建重切片对象
    void createReslice();

    // 设置重切片矩阵
    void setupResliceMatrix();
};

#endif // ROUTEPLAN_H
