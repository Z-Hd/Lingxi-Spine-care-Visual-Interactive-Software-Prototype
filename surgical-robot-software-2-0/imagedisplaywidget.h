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

    vtkImageData* imageSegment;
    bool isSegment=false;
};

#endif // IMAGEDISPLAYWIDGET_H
