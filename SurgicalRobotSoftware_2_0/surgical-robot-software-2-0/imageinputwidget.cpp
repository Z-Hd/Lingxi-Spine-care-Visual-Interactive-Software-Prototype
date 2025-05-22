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

void ImageInputWidget::on_backButton_clicked()
{
    emit back_to_imageDisplayWidget();
}


void ImageInputWidget::on_confirmButton_clicked()
{
    emit confirmButton_pressed();
}

