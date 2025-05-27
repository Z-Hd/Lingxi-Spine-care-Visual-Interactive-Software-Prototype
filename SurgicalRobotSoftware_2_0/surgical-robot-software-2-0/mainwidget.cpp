#include "mainwidget.h"
#include "./ui_mainwidget.h"
#include <iostream>
using namespace std;

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized); //窗口最大化显示

    patient_info_widget = new PatientInfoWidget();
    equip_info_widget = new EquipInfoWidget();
    image_display_widget = new ImageDisplayWidget();
    image_input_widget = new ImageInputWidget();
    simulation_widget = new SimulationWidget();
    arm_control_widget = new ArmControlWidget();
    ndi_widget = new NDIWidget();

    ui->centralWidget->addWidget(patient_info_widget);
    ui->centralWidget->addWidget(equip_info_widget);
    ui->centralWidget->addWidget(image_display_widget);
    ui->centralWidget->addWidget(image_input_widget);
    ui->centralWidget->addWidget(simulation_widget);
    ui->centralWidget->addWidget(arm_control_widget);
    ui->centralWidget->addWidget(ndi_widget);
    ui->centralWidget->setCurrentWidget(patient_info_widget);

    connect(patient_info_widget, &PatientInfoWidget::confirmButton_pressed,[=](){
        ui->centralWidget->setCurrentWidget(equip_info_widget);
    });
    connect(equip_info_widget, &EquipInfoWidget::confirmButton_pressed,[=](){
        ui->centralWidget->setCurrentWidget(image_display_widget);
    });

    // 这里须要注意：从 SegmentationWidget 到 ImageDisplayWidget 再到 MainWidget 的三层信号传递
    connect(image_display_widget, &ImageDisplayWidget::imageInputButton_received,[=](){
        ui->centralWidget->setCurrentWidget(image_input_widget);
    });

    connect(image_input_widget, &ImageInputWidget::back_to_imageDisplayWidget,[=](){
        ui->centralWidget->setCurrentWidget(image_display_widget);
    });

    // 这里须要注意：先回到 ImageDisplayWidget 将右侧 StackedWidget 更换为 RegistrationWidget
    // 再在 MainWidget 把 centralWidget 更换为 ImageDisplayWidget
    connect(image_input_widget, &ImageInputWidget::confirmButton_pressed,[=](){
        void* set_image_display_widget_stacked_widget_as_registration = image_display_widget->setStackedWidgetAsRegistration();
        ui->centralWidget->setCurrentWidget(image_display_widget);
    });

    connect(simulation_widget, &SimulationWidget::back_to_imagedisPlayWidget,[=](){
        ui->centralWidget->setCurrentWidget(image_display_widget);
    });
    connect(this, &MainWidget::ndiPageButton_pressed,[=](){
        ui->centralWidget->setCurrentWidget(ndi_widget);
    });
    connect(this, &MainWidget::armPageButton_pressed,[=](){
        ui->centralWidget->setCurrentWidget(arm_control_widget);
    });

    // 这里须要注意：从 SegmentationWidget 到 ImageDisplayWidget 再到 MainWidget 的三层信号传递
    connect(image_display_widget, &ImageDisplayWidget::simulationButton_received,[=](){
        ui->centralWidget->setCurrentWidget(simulation_widget);
    });
}

MainWidget::~MainWidget()
{
    delete ui;
}

void MainWidget::on_ndiPageButton_clicked()
{
    emit ndiPageButton_pressed();
}

void MainWidget::on_armPageButton_clicked()
{
    emit armPageButton_pressed();
}
