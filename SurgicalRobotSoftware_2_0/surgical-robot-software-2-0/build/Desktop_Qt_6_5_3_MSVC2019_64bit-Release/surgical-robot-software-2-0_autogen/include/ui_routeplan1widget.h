/********************************************************************************
** Form generated from reading UI file 'routeplan1widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROUTEPLAN1WIDGET_H
#define UI_ROUTEPLAN1WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RoutePlan1Widget
{
public:
    QPushButton *addRouteButton;
    QPushButton *backButton;
    QPushButton *nextButton;

    void setupUi(QWidget *RoutePlan1Widget)
    {
        if (RoutePlan1Widget->objectName().isEmpty())
            RoutePlan1Widget->setObjectName("RoutePlan1Widget");
        RoutePlan1Widget->resize(307, 704);
        RoutePlan1Widget->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 17, 18);"));
        addRouteButton = new QPushButton(RoutePlan1Widget);
        addRouteButton->setObjectName("addRouteButton");
        addRouteButton->setGeometry(QRect(180, 20, 100, 40));
        addRouteButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        backButton = new QPushButton(RoutePlan1Widget);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(20, 650, 100, 40));
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
        nextButton = new QPushButton(RoutePlan1Widget);
        nextButton->setObjectName("nextButton");
        nextButton->setGeometry(QRect(190, 650, 100, 40));
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

        retranslateUi(RoutePlan1Widget);

        QMetaObject::connectSlotsByName(RoutePlan1Widget);
    } // setupUi

    void retranslateUi(QWidget *RoutePlan1Widget)
    {
        RoutePlan1Widget->setWindowTitle(QCoreApplication::translate("RoutePlan1Widget", "Form", nullptr));
        addRouteButton->setText(QCoreApplication::translate("RoutePlan1Widget", "\346\267\273\345\212\240\345\205\245\350\267\257", nullptr));
        backButton->setText(QCoreApplication::translate("RoutePlan1Widget", "\350\277\224\345\233\236", nullptr));
        nextButton->setText(QCoreApplication::translate("RoutePlan1Widget", "\344\270\213\344\270\200\346\255\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RoutePlan1Widget: public Ui_RoutePlan1Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROUTEPLAN1WIDGET_H
