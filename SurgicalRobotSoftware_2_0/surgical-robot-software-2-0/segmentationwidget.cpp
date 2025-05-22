#include "segmentationwidget.h"
#include "ui_segmentationwidget.h"

SegmentationWidget::SegmentationWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SegmentationWidget)
{
    ui->setupUi(this);
}

SegmentationWidget::~SegmentationWidget()
{
    delete ui;
}

void SegmentationWidget::on_imageInputButton_clicked()
{
    emit imageInputButton_pressed();
}
