#include "simulationwidget.h"
#include "ui_simulationwidget.h"
#include <iostream>
using namespace std;

SimulationWidget::SimulationWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SimulationWidget)
{
    ui->setupUi(this);
    initDistanceWidget(0);
    initAngleWidget(0);
    setupDirectionalPad();
}

SimulationWidget::~SimulationWidget()
{
    delete ui;
}

void SimulationWidget::on_backButton_clicked()
{
    emit back_to_imageDisplayWidget();
}


void SimulationWidget::on_confirmButton_clicked()
{
    emit back_to_imageDisplayWidget();
}

void SimulationWidget::initDistanceWidget(int curValue)
{
    ui->distanceSlider->setRange(0, 500);
    ui->distanceSlider->setSingleStep(1);

    //按钮
    connect(ui->distanceUpButton, &QPushButton::clicked, this, [=](){
        int v = ui->distanceSlider->value();
        ui->distanceSlider->setValue(std::min(v + 1, ui->distanceSlider->maximum()));
    });

    connect(ui->distanceDownButton, &QPushButton::clicked, this, [=](){
        int v = ui->distanceSlider->value();
        ui->distanceSlider->setValue(std::max(v - 1, ui->distanceSlider->minimum()));
    });

    connect(ui->distanceSlider, &QSlider::valueChanged, this, [=](int value){
        ui->simulationDistance->setText(QString::number(value) + " mm");
    });

    ui->distanceSlider->setValue(curValue);
    ui->simulationDistance->setText(QString::number(curValue) + " mm");
}

void SimulationWidget::initAngleWidget(int curValue)
{
    ui->angleSlider->setRange(0, 360);
    ui->angleSlider->setSingleStep(1);

    //按钮
    connect(ui->angleUpButton, &QPushButton::clicked, this, [=](){
        int v = ui->angleSlider->value();
        ui->angleSlider->setValue(std::min(v + 1, ui->angleSlider->maximum()));
    });

    connect(ui->angleDownButton, &QPushButton::clicked, this, [=](){
        int v = ui->angleSlider->value();
        ui->angleSlider->setValue(std::max(v - 1, ui->angleSlider->minimum()));
    });

    connect(ui->angleSlider, &QSlider::valueChanged, this, [=](int value){

        ui->simulationAngle->setText(QString::number(value) + " °");
    });

    ui->angleSlider->setValue(curValue);
    ui->simulationAngle->setText(QString::number(curValue) + " °");
}

void SimulationWidget::setupDirectionalPad()
{
    auto pad = new DirectionalPadWidget(this);
    auto layout = new QVBoxLayout(ui->directionPadPlaceholder);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->addWidget(pad);
}
