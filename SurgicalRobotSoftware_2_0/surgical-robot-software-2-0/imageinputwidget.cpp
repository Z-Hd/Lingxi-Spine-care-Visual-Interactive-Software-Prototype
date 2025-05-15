#include "imageinputwidget.h"
#include "ui_imageinputwidget.h"

ImageInputWidget::ImageInputWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ImageInputWidget)
{
    ui->setupUi(this);
}

ImageInputWidget::~ImageInputWidget()
{
    delete ui;
}
