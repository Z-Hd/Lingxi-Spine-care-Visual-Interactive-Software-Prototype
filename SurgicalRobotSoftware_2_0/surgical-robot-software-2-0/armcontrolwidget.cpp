#include "armcontrolwidget.h"
#include "ui_armcontrolwidget.h"
#include <QLineEdit>

ArmControlWidget::ArmControlWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ArmControlWidget)
{
    ui->setupUi(this);

    ui->comboBoxPositionType->setEditable(true);
    ui->comboBoxPositionType->lineEdit()->setAlignment(Qt::AlignCenter);
    ui->comboBoxPositionType->lineEdit()->setReadOnly(true);  // 防止手动输入

    ui->comboBoxPositionType->addItems({
        "左侧标尺位",
        "右侧标尺位",
        "中心参考位"
    });

    // 设置居中代理
    ui->comboBoxPositionType->setItemDelegate(new CenteredItemDelegate(ui->comboBoxPositionType));
}

ArmControlWidget::~ArmControlWidget()
{
    delete ui;
}

void ArmControlWidget::on_backButton_clicked()
{
    emit back_to_prepage();
}
