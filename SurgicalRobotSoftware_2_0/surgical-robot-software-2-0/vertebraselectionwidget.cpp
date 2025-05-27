#include "vertebraselectionwidget.h"
#include "ui_vertebraselectionwidget.h"

VertebraSelectionWidget::VertebraSelectionWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::VertebraSelectionWidget)
    , selectedVertebra("")
{
    ui->setupUi(this);

    // 设置窗口属性为弹窗
    setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);

    // 初始化按钮样式
    resetButtonStyles();
}

VertebraSelectionWidget::~VertebraSelectionWidget()
{
    delete ui;
}

void VertebraSelectionWidget::resetButtonStyles()
{
    // 重置 L5-L 按钮样式为默认样式
    ui->l5LButton->setStyleSheet("QPushButton {"
                                 "background-color: rgb(37, 38, 43);"
                                 "color: rgb(192, 192, 192);"
                                 "font-size:15px;"
                                 "border-radius: 5px;"
                                 "min-width: 100px;"
                                 "min-height: 40px;"
                                 "}"
                                 "QPushButton:hover{"
                                 "background-color: rgb(70, 72, 81);"
                                 "}"
                                 "QPushButton:pressed {"
                                 "background-color: rgb(245, 245, 245);"
                                 "}");

    // 重置选中的椎骨
    selectedVertebra = "";
}

void VertebraSelectionWidget::on_confirmButton_clicked()
{
    // 如果已选择椎骨，则发送信号
    if (!selectedVertebra.isEmpty()) {
        emit confirmButton_pressed(selectedVertebra);
    } else {
        // 未选择椎骨时发送默认信息
        emit confirmButton_pressed("请选择椎骨");
    }
    close();
}


void VertebraSelectionWidget::on_cancelButton_clicked()
{
    emit cancelButton_pressed();
    close();
}


void VertebraSelectionWidget::on_l5LButton_clicked()
{
    // 重置所有按钮样式
    ui->l5LButton->setStyleSheet("QPushButton {"
                                 "background-color: rgb(0, 170, 0);"  // 绿色背景
                                 "color: rgb(255, 255, 255);"         // 白色文字
                                 "font-size:15px;"
                                 "border-radius: 5px;"
                                 "min-width: 100px;"
                                 "min-height: 40px;"
                                 "}"
                                 "QPushButton:hover{"
                                 "background-color: rgb(0, 200, 0);"
                                 "}"
                                 "QPushButton:pressed {"
                                 "background-color: rgb(245, 245, 245);"
                                 "}");

    // 保存选中的椎骨
    selectedVertebra = "L5-L";
}

