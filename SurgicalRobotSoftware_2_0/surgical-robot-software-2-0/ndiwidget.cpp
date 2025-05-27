#include "ndiwidget.h"
#include "ui_ndiwidget.h"

NDIWidget::NDIWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::NDIWidget)
{
    ui->setupUi(this);
}

NDIWidget::~NDIWidget()
{
    delete ui;
}
