#ifndef INTRAOPERATIVEWIDGET_H
#define INTRAOPERATIVEWIDGET_H

#include <QWidget>
#include <QtMultimedia>
#include <vtkImageData.h>
#include "visualizetool.h"
#include <QVBoxLayout>
#include <QVTKOpenGLNativeWidget.h>
#include <QTimer>
#include <vtkActor.h>
#include <vtkSmartPointer.h>

namespace Ui {
class IntraoperativeWidget;
}

class IntraoperativeWidget : public QWidget
{
    Q_OBJECT

public:
    explicit IntraoperativeWidget(QWidget *parent = nullptr);
    ~IntraoperativeWidget();
    void initImage();
    void show3DModel();

public slots:
    void addRandomSphereInCT();
    void showRuler();  // ★ 新增：显示3D标尺

private slots:
    void on_backButton_clicked();
    void on_coronalSlider_valueChanged(int value);
    void on_sagittalSlider_valueChanged(int value);
    void on_transverseSlider_valueChanged(int value);
    void updateCylinderPosition();

signals:
    void back_to_imagedisPlayWidget();

private:
    Ui::IntraoperativeWidget *ui;

    QMediaCaptureSession  *session;
    QCamera     *camera;
    VisualizeTool visualizeTool;
    vtkImageData* imageData;
    vtkImageData* imageSegment;

    void initCamera();

    // 用于动画的成员变量
    QTimer* animationTimer = nullptr;
    vtkSmartPointer<vtkActor> cylinderActor;
    vtkSmartPointer<vtkCubeAxesActor> cubeAxesActor;  // ★ 新增：保存标尺actor
    double p1[3] = {0, 0, 0};
    double p2[3] = {0, 0, 0};
    double animationAngle = 0.0;
    double coneHalfAngle = 30.0;
    double cylinderLength = 100.0;
    bool rulerVisible = false;  // ★ 新增：标尺可见状态
};

#endif // INTRAOPERATIVEWIDGET_H
