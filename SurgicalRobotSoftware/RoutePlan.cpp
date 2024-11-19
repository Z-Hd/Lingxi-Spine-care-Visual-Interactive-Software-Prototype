#include "RoutePlan.h"
#include "ui_RoutePlan.h"
#include "intraoperativeimage.h"
#include "spinalimage.h"
#include <QScreen.h>

Form::Form(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RoutePlan)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}

void Form::on_Refresh_2_clicked()
{
    QWidget::repaint();
}


void Form::on_Next_2_clicked()
{
    emit nextButton_pressed();
}


void Form::on_Previous_2_clicked()
{
    emit preButton_pressed();
}

