#include "executewidget.h"
#include "ui_executewidget.h"

ExecuteWidget::ExecuteWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ExecuteWidget)
{
    ui->setupUi(this);
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

