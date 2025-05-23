#include "imagedisplaywidget.h"
#include "ui_imagedisplaywidget.h"

ImageDisplayWidget::ImageDisplayWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ImageDisplayWidget)
{
    ui->setupUi(this);

    segmentation_widget = new SegmentationWidget();
    registration_widget = new RegistrationWidget();
    routeplan1_widget = new RoutePlan1Widget();
    routeplan2_widget = new RoutePlan2Widget();
    execute_widget = new ExecuteWidget();

    ui->stackedWidget->addWidget(segmentation_widget);
    ui->stackedWidget->addWidget(registration_widget);
    ui->stackedWidget->addWidget(routeplan1_widget);
    ui->stackedWidget->addWidget(routeplan2_widget);
    ui->stackedWidget->addWidget(execute_widget);

    // 这里涉及到三个级别的界面两道信号的传递
    connect(segmentation_widget,
            &SegmentationWidget::imageInputButton_pressed,
            this,
            &ImageDisplayWidget::onReceivedSignalFromSegmentation);

    connect(routeplan1_widget, &RoutePlan1Widget::back_to_registrationWidget,[=](){
        ui->stackedWidget->setCurrentWidget(registration_widget);
    });

    connect(registration_widget, &RegistrationWidget::nextButton_pressed,[=](){
        ui->stackedWidget->setCurrentWidget(routeplan1_widget);
    });

    connect(routeplan1_widget, &RoutePlan1Widget::nextButton_pressed,[=](){
        ui->stackedWidget->setCurrentWidget(routeplan2_widget);
    });

    connect(routeplan2_widget, &RoutePlan2Widget::nextButton_pressed,[=](){
        ui->stackedWidget->setCurrentWidget(execute_widget);
    });

    connect(execute_widget, &ExecuteWidget::back_to_routePlan2Widget,[=](){
        ui->stackedWidget->setCurrentWidget(routeplan2_widget);
    });

    connect(execute_widget, &ExecuteWidget::nextButton_pressed,[=](){
        emit executeWidget_nextButton_pressed();
    });

    // 这里涉及到三个级别的界面两道信号的传递
    connect(execute_widget,
            &ExecuteWidget::simulationButton_pressed,
            this,
            &ImageDisplayWidget::onReceivedSignalFromExecute);
}

ImageDisplayWidget::~ImageDisplayWidget()
{
    delete ui;
}

// 这里涉及到三个级别的界面两道信号的传递
void ImageDisplayWidget::onReceivedSignalFromSegmentation() {//小括号里可以放待处理数据
    // 处理数据
    emit imageInputButton_received();  // 发出新信号并传递处理后的数据
}

// 这里涉及到三个级别的界面两道信号的传递
void ImageDisplayWidget::onReceivedSignalFromExecute() {//小括号里可以放待处理数据
    // 处理数据
    emit simulationButton_received();  // 发出新信号并传递处理后的数据
}

void* ImageDisplayWidget::setStackedWidgetAsRegistration() const {
    ui->stackedWidget->setCurrentWidget(registration_widget);
    return 0;
}

void ImageDisplayWidget::setStackedWidgetAsRoutePlan2(const QString &vertebra)
{
    // 切换到RoutePlan2Widget
    if (ui->stackedWidget && routeplan2_widget) {
        ui->stackedWidget->setCurrentWidget(routeplan2_widget);

        // 设置椎骨标签
        routeplan2_widget->setVertebraLabel(vertebra);
    }
}
