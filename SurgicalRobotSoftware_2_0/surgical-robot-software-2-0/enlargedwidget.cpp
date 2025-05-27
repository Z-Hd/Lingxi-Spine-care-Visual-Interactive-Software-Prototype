#include "enlargedwidget.h"
#include "ui_enlargedwidget.h"

EnlargedWidget::EnlargedWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::EnlargedWidget)
{
    ui->setupUi(this);
}

EnlargedWidget::~EnlargedWidget()
{
    delete ui;
}

void EnlargedWidget::on_reduceButton_clicked()
{
    emit reduceButton_pressed();
}

