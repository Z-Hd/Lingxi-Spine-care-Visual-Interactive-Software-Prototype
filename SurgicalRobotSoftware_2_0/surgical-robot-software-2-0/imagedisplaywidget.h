#ifndef IMAGEDISPLAYWIDGET_H
#define IMAGEDISPLAYWIDGET_H

#include <QWidget>

#include "segmentationwidget.h"
#include "registrationwidget.h"
#include "routeplan1widget.h"
#include "routeplan2widget.h"
#include "executewidget.h"

namespace Ui {
class ImageDisplayWidget;
}

class ImageDisplayWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ImageDisplayWidget(QWidget *parent = nullptr);
    ~ImageDisplayWidget();

    void* setStackedWidgetAsRegistration() const;
    void setStackedWidgetAsRoutePlan2(const QString &vertebra);

signals:
    void imageInputButton_received();
    void simulationButton_received();
    void executeWidget_nextButton_pressed();

public slots:
    void onReceivedSignalFromSegmentation();  //小括号里可以放待处理数据
    void onReceivedSignalFromExecute();

private:
    Ui::ImageDisplayWidget *ui;

    SegmentationWidget *segmentation_widget;
    RegistrationWidget *registration_widget;
    RoutePlan1Widget *routeplan1_widget;
    RoutePlan2Widget *routeplan2_widget;
    ExecuteWidget *execute_widget;
};

#endif // IMAGEDISPLAYWIDGET_H
