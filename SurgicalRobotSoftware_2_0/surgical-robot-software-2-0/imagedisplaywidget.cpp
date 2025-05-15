#include "imagedisplaywidget.h"
#include "ui_imagedisplaywidget.h"

ImageDisplayWidget::ImageDisplayWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ImageDisplayWidget)
{
    ui->setupUi(this);
}

ImageDisplayWidget::~ImageDisplayWidget()
{
    delete ui;
}

void ImageDisplayWidget::on_simulationButton_clicked()
{
    emit simulationButton_pressed();
}
