#include "login.h"

#include <QApplication>

#include "_reg_aladin.h"

extern "C" {
    #include "_reg_tools.h"
    #include "_reg_maths.h"
}

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

    try {
        // 2. 尝试创建一个 NiftyReg 的核心对象
        // 如果程序能成功执行 new 和 delete，说明库链接成功了
        qDebug() << "Attempting to create a reg_aladin object...";

        reg_aladin<float> *aladin_test_object = new reg_aladin<float>();

        qDebug() << "SUCCESS: reg_aladin object created at address:" << aladin_test_object;

        delete aladin_test_object;

        qDebug() << "SUCCESS: Object deleted.";
        qDebug() << "\n[结论] NiftyReg 库已成功集成！";

    } catch(...) {
        // 如果在运行时发生错误（例如，动态链接失败）
        qDebug() << "\n[结论] FAILURE: An unexpected error occurred during the test.";
    }

    Login w;
    w.show();
    return a.exec();
}
