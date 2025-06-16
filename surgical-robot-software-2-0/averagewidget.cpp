#include "averagewidget.h"
#include "ui_averagewidget.h"

AverageWidget::AverageWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AverageWidget)
{
    ui->setupUi(this);
}

AverageWidget::~AverageWidget()
{
    delete ui;
}

void AverageWidget::on_enlargeButton_clicked()
{
    emit enlargeButton_pressed();
}


void AverageWidget::on_enlarge3DModelButton_clicked()
{
    emit enlarge3DModelButton_pressed();
}

