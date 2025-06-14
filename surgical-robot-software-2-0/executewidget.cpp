#include "executewidget.h"
#include "ui_executewidget.h"

ExecuteWidget::ExecuteWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ExecuteWidget)
{
    ui->setupUi(this);

    initDistanceWidget(0);
    initAngleWidget(0);
}

ExecuteWidget::~ExecuteWidget()
{
    delete ui;
}

void ExecuteWidget::on_backButton_clicked()
{
    emit back_to_routePlan2Widget();
}


void ExecuteWidget::on_simulationButton_clicked()
{
    emit simulationButton_pressed();
}

void ExecuteWidget::on_executeButton_clicked()
{
    emit executeButton_pressed();
}

void ExecuteWidget::initDistanceWidget(int curValue)
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
        ui->distanceValue->setText(QString::number(value));
    });

    ui->distanceSlider->setValue(curValue);
    ui->distanceValue->setText(QString::number(curValue));
}

void ExecuteWidget::initAngleWidget(int curValue)
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

        ui->angleValue->setText(QString::number(value));
    });

    ui->angleSlider->setValue(curValue);
    ui->angleValue->setText(QString::number(curValue));
}
