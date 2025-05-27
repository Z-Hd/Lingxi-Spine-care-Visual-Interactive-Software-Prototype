/********************************************************************************
** Form generated from reading UI file 'executewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXECUTEWIDGET_H
#define UI_EXECUTEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExecuteWidget
{
public:
    QPushButton *backButton;
    QPushButton *simulationButton;
    QPushButton *nextButton;

    void setupUi(QWidget *ExecuteWidget)
    {
        if (ExecuteWidget->objectName().isEmpty())
            ExecuteWidget->setObjectName("ExecuteWidget");
        ExecuteWidget->resize(282, 621);
        ExecuteWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 17, 18);"));
        backButton = new QPushButton(ExecuteWidget);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(20, 570, 100, 40));
        backButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(37, 38, 43);\n"
"color: rgb(192, 192, 192);\n"
"font-size:15px;\n"
"border-radius: 5px;\n"
"min-width: 100px;\n"
"min-height: 40px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(70, 72, 81);\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(245, 245, 245);\n"
"}"));
        simulationButton = new QPushButton(ExecuteWidget);
        simulationButton->setObjectName("simulationButton");
        simulationButton->setGeometry(QRect(50, 200, 100, 40));
        simulationButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(37, 38, 43);\n"
"color: rgb(192, 192, 192);\n"
"font-size:15px;\n"
"border-radius: 5px;\n"
"min-width: 100px;\n"
"min-height: 40px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(70, 72, 81);\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(245, 245, 245);\n"
"}"));
        nextButton = new QPushButton(ExecuteWidget);
        nextButton->setObjectName("nextButton");
        nextButton->setGeometry(QRect(170, 570, 100, 40));
        nextButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(37, 38, 43);\n"
"color: rgb(192, 192, 192);\n"
"font-size:15px;\n"
"border-radius: 5px;\n"
"min-width: 100px;\n"
"min-height: 40px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(70, 72, 81);\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(245, 245, 245);\n"
"}"));

        retranslateUi(ExecuteWidget);

        QMetaObject::connectSlotsByName(ExecuteWidget);
    } // setupUi

    void retranslateUi(QWidget *ExecuteWidget)
    {
        ExecuteWidget->setWindowTitle(QCoreApplication::translate("ExecuteWidget", "Form", nullptr));
        backButton->setText(QCoreApplication::translate("ExecuteWidget", "\350\277\224\345\233\236", nullptr));
        simulationButton->setText(QCoreApplication::translate("ExecuteWidget", "\346\250\241\346\213\237", nullptr));
        nextButton->setText(QCoreApplication::translate("ExecuteWidget", "\344\270\213\344\270\200\346\255\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExecuteWidget: public Ui_ExecuteWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXECUTEWIDGET_H
