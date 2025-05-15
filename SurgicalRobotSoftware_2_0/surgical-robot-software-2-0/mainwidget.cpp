#include "mainwidget.h"
#include "./ui_mainwidget.h"

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
    connect(image_display_widget, &ImageDisplayWidget::simulationButton_pressed,[=](){
        ui->centralWidget->setCurrentWidget(simulation_widget);
    });
}

MainWidget::~MainWidget()
{
    delete ui;
}
