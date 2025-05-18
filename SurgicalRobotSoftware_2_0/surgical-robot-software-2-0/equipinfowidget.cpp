#include "equipinfowidget.h"
#include "ui_equipinfowidget.h"

EquipInfoWidget::EquipInfoWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::EquipInfoWidget)
{
    ui->setupUi(this);
    ui->tool->setFixedSize(300,300);
    ui->backButton->setFixedSize(100,30);
    ui->confirmButton->setFixedSize(100,30);

}

EquipInfoWidget::~EquipInfoWidget()
{
    delete ui;
}

void EquipInfoWidget::on_confirmButton_clicked()
{
    emit confirmButton_pressed();
}
