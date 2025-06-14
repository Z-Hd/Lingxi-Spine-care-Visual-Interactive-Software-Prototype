#include "registrationwidget.h"
#include "ui_registrationwidget.h"

RegistrationWidget::RegistrationWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RegistrationWidget)
{
    ui->setupUi(this);
}

RegistrationWidget::~RegistrationWidget()
{
    delete ui;
}

void RegistrationWidget::on_nextButton_clicked()
{
    emit nextButton_pressed();
}


void RegistrationWidget::on_backButton_clicked()
{
    emit backButton_pressed();
}

