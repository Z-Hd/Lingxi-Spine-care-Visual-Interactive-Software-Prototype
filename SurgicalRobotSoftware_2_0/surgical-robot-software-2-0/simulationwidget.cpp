#include "simulationwidget.h"
#include "ui_simulationwidget.h"
#include <iostream>
using namespace std;

SimulationWidget::SimulationWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SimulationWidget)
{
    ui->setupUi(this);
}

SimulationWidget::~SimulationWidget()
{
    delete ui;
}

void SimulationWidget::on_backButton_clicked()
{
    emit back_to_imagedisPlayWidget();
}


void SimulationWidget::on_confirmButton_clicked()
{
    emit back_to_imagedisPlayWidget();
}

