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

    QProcess process;

    // 如果你没有配置 PATH，可以用完整路径替代 reg_aladin
    QString exePath = "reg_aladin"; // or "E:/Lab/software/niftyreg/install/bin/reg_aladin.exe"
    QStringList arguments;
    arguments << "-h";  // 打印帮助信息

    // 启动进程
    process.start(exePath, arguments);

    // 等待执行完成
    if (!process.waitForStarted()) {
        qDebug() << "❌ 无法启动 reg_aladin";
        return;
    }

    process.waitForFinished();

    // 读取输出
    QString stdoutText = process.readAllStandardOutput();
    QString stderrText = process.readAllStandardError();

    // 输出查看
    qDebug() << "=== STDOUT ===\n" << stdoutText;
    qDebug() << "=== STDERR ===\n" << stderrText;
}

