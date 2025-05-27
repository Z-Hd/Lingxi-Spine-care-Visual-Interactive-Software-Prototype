#include "armcontrolwidget.h"
#include "ui_armcontrolwidget.h"

ArmControlWidget::ArmControlWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ArmControlWidget)
{
    ui->setupUi(this);
}

ArmControlWidget::~ArmControlWidget()
{
    delete ui;
}
