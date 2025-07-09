#ifndef IMAGEDISPLAYWIDGET_H
#define IMAGEDISPLAYWIDGET_H

#include <QWidget>

#include "averagewidget.h"
#include "enlargedwidget.h"
#include "enlargedmodel3dwidget.h"

#include "segmentationwidget.h"
#include "registrationwidget.h"
#include "routeplan1widget.h"
#include "routeplan2widget.h"
#include "executewidget.h"
#include "visualizetool.h"

#include <vtkImageData.h>
#include <vtkNIFTIImageReader.h>

#include "imageinputwidget.h"

namespace Ui {
class ImageDisplayWidget;
}

class ImageDisplayWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ImageDisplayWidget(QWidget *parent = nullptr);
    ~ImageDisplayWidget();

    void* setStackedWidgetAsRegistration();
    void* setStackedWidgetAsSegmentation();
    void* setVisualizationWidgetAsAverage() const;
    void initImage();
    void setStackedWidgetAsRoutePlan2(const QString &vertebra);

    void show3DModel();

signals:
    void imageInputButton_received();
    void simulationButton_received();
    void backButton_received();
    void executeWidget_nextButton_pressed();
    void currentWidgetChanged(const QString &widgetName);

public slots:
    void onReceivedSignalFromSegmentation();  //小括号里可以放待处理数据
    void onReceivedSignalFromExecute();

private slots:
    void on_coronalSlider_valueChanged(int value);

    void on_sagittalSlider_valueChanged(int value);

    void on_transverseSlider_valueChanged(int value);
    void on_unfoldButton_clicked();  // unfoldButton点击事件处理函数
    void on_unfoldButton_2_clicked();
    void on_unfoldButton_3_clicked();
    void on_unfoldButton_4_clicked();

    void on_MPRButton_clicked();

    void on_MPRButton_2_clicked();

    void on_eyeButton_clicked();

    void on_MPRButton_3_clicked();

    void on_rotateButton_clicked();

protected:
    void showEvent(QShowEvent *event) override;
    void resizeEvent(QResizeEvent *event) override;

    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

    bool event(QEvent *event) override;  // 添加事件处理函数

private:
    Ui::ImageDisplayWidget *ui;

    // AverageWidget *average_widget;
    // EnlargedWidget *enlarged_widget;
    // EnlargedModel3DWidget *enlargedmodel3D_widget;

    SegmentationWidget *segmentation_widget;
    RegistrationWidget *registration_widget;
    RoutePlan1Widget *routeplan1_widget;
    RoutePlan2Widget *routeplan2_widget;
    ExecuteWidget *execute_widget;
    VisualizeTool visualizeTool;
    vtkImageData *imageData;

    ImageInputWidget *image_input_widget;

    int unfoldButtonState = 0;  // 添加unfoldButton状态变量，初始值为0
    int unfoldButton2State = 0;
    int unfoldButton3State = 0;
    int unfoldButton4State = 0;

    int MPRButtonState = 0;
    int rotateButtonState = 0;
    int rotateButton2State = 0;
    int rotateButton3State = 0;

    bool coronalLine1Moving = false;
    bool coronalLine2Moving = false;
    bool coronalLine1Rotating = false;
    bool sagittalLine1Moving = false;
    bool sagittalLine2Moving = false;
    bool transverseLine1Moving = false;
    bool transverseLine2Moving = false;

    QPoint lastMousePos; // 上一次鼠标的位置
    QPointF rotationCenter; // 旋转中心
    qreal lastAngle; // 上一次的角度


    // 添加用于检测鼠标悬停在coronalLine_1两端的变量
    bool isMouseOverCoronalLine1Ends(const QPoint &globalPos) const;
    // 添加用于检测鼠标悬停在coronalLine_2两端的变量
    bool isMouseOverCoronalLine2Ends(const QPoint &globalPos) const;
    // 添加用于检测鼠标悬停在sagittalLine_1两端的变量
    bool isMouseOverSagittalLine1Ends(const QPoint &globalPos) const;
    // 添加用于检测鼠标悬停在sagittalLine_2两端的变量
    bool isMouseOverSagittalLine2Ends(const QPoint &globalPos) const;
    // 添加用于检测鼠标悬停在transverseLine_1两端的变量
    bool isMouseOverTransverseLine1Ends(const QPoint &globalPos) const;
    // 添加用于检测鼠标悬停在transverseLine_2两端的变量
    bool isMouseOverTransverseLine2Ends(const QPoint &globalPos) const;


    vtkImageData *imageSegment;
    bool isSegment = false;
};

#endif // IMAGEDISPLAYWIDGET_H
