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

void NDIWidget::on_backButton_clicked()
{
    emit back_to_prepage();
}

