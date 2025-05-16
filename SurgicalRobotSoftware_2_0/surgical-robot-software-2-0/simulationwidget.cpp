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
