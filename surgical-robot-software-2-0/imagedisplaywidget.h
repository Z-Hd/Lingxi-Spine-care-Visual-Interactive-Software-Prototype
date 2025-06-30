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
    void on_unfoldButton_clicked();  // 添加unfoldButton点击事件处理函数
    void on_unfoldButton_2_clicked();
    void on_unfoldButton_3_clicked();

protected:
    void showEvent(QShowEvent *event) override;
    void resizeEvent(QResizeEvent *event) override;

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
    vtkImageData* imageData;

    ImageInputWidget *image_input_widget;

    int unfoldButtonState = 0;  // 添加unfoldButton状态变量，初始值为0
    int unfoldButton2State = 0;
    int unfoldButton3State = 0;
};

#endif // IMAGEDISPLAYWIDGET_H
