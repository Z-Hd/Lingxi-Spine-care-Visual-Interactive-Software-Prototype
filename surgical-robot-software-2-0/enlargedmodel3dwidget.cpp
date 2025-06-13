#include "enlargedmodel3dwidget.h"
#include "ui_enlargedmodel3dwidget.h"

EnlargedModel3DWidget::EnlargedModel3DWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::EnlargedModel3DWidget)
{
    ui->setupUi(this);
}

EnlargedModel3DWidget::~EnlargedModel3DWidget()
{
    delete ui;
}

void EnlargedModel3DWidget::on_reduce3DModelButton_clicked()
{
    emit reduce3DModelButton_pressed();
}

