#include "login.h"
#include "./ui_login.h"
#include "qcheckbox.h"
#include "mainwidget.h"

Login::Login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);

    // 创建 QCheckBox 控件（父类选择QLineEdit）
    QCheckBox *checkBox = new QCheckBox(ui->passwordEdit);

    // 设置样式表（图片为眼睛样式）
    checkBox->setStyleSheet("QCheckBox {spacing: 5px;border: none;background-color: transparent;}"
                            "QCheckBox::indicator {width: 20px;height: 20px;border: none;image: url(:/image/eyes_close.png);}"
                            "QCheckBox::indicator:checked {image: url(:/image/eyes_open.png);}");
    ui->login->setStyleSheet("QPushButton{border-radius: 5px;"
                                 "background-color: #003F7F;"
                                 "color: white;"
                                 "font-weight: bold;"

                                 "}");
    ui->login->setFixedSize(100, 25);

    //创建信号和槽连接
    connect(checkBox, SIGNAL(stateChanged(int)),this, SLOT(slot_checkbox_state_changed(int)));

    //设置控件的位置（需要根据QLineEdit的坐标进行调整）
    checkBox->setGeometry(ui->passwordEdit->pos().x() + 180,ui->passwordEdit->pos().y() + 2,20,20);

}

Login::~Login()
{
    delete ui;
}

//对应的槽函数
void Login::slot_checkbox_state_changed(int state)
{
    if(state){
        ui->passwordEdit->setEchoMode(QLineEdit::Normal);
    }else{
        ui->passwordEdit->setEchoMode(QLineEdit::Password);
    }
}

void Login::on_login_clicked()
{
    QString username = ui->usernameEdit->text();
    QString password = ui->passwordEdit->text();
    this->close();
    mainWidget *mainwidget = new mainWidget();
    mainwidget->show();

}

