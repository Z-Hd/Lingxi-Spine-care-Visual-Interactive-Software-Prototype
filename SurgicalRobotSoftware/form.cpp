#include "form.h"
#include "ui_form.h"
#include "intraoperativeimage.h"
#include "spinalimage.h"
#include <QScreen.h>

Form::Form(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Form)
{
    ui->setupUi(this);
    ui->Previous_2->setStyleSheet("QPushButton{border-radius: 5px;"
                                "background-color: #32CD99;"
                                "color: black;"
                                "}");
    ui->Next_2->setStyleSheet("QPushButton{border-radius: 5px;"
                            "background-color: #32CD99;"
                            "color: black;"
                            "}");
    ui->Refresh_2->setStyleSheet("QPushButton{border-radius: 5px;"
                               "background-color: #FF7F00;"
                               "color: white;"
                               "font-weight: bold;"
                               "}");
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

