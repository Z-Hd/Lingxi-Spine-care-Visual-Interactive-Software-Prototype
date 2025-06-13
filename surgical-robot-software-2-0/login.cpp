#include "login.h"
#include "ui_login.h"
#include "mainwidget.h"

Login::Login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);
}

Login::~Login()
{
    delete ui;
}

void Login::on_loginButton_clicked()
{
    this->close();
    QWidget* m = new MainWidget();
    m->show();
}

