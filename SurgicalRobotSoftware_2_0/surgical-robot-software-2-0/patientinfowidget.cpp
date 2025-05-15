#include "patientinfowidget.h"
#include "ui_patientinfowidget.h"

PatientInfoWidget::PatientInfoWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PatientInfoWidget)
{
    ui->setupUi(this);
}

PatientInfoWidget::~PatientInfoWidget()
{
    delete ui;
}

void PatientInfoWidget::on_confirmButton_clicked()
{
    emit confirmButton_pressed();
}

