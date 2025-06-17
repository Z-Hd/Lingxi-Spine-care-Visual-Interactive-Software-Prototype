#include "login.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // 全局取消虚线焦点框
    a.setStyleSheet(R"(
        *:focus {
            outline: none;
        }
    )");

    //connect(ui->exitButton, &QPushButton::clicked, qApp, &QApplication::quit);

    Login w;
    w.show();
    return a.exec();
}
