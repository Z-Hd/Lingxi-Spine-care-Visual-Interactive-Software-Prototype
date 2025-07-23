#include "login.h"
#include "ui_login.h"
#include "mainwidget.h"

#include <QProcess>
#include <QDebug>

Login::Login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);
    this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
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
    m->showMaximized();
    m->setGeometry(this->geometry());
}

