#include "equipinfowidget.h"
#include "ui_equipinfowidget.h"

EquipInfoWidget::EquipInfoWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::EquipInfoWidget)
{
    ui->setupUi(this);
}

EquipInfoWidget::~EquipInfoWidget()
{
    delete ui;
}

void EquipInfoWidget::on_confirmButton_clicked()
{
    emit confirmButton_pressed();
}
