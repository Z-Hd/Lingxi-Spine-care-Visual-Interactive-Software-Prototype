/********************************************************************************
** Form generated from reading UI file 'routeplan2widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROUTEPLAN2WIDGET_H
#define UI_ROUTEPLAN2WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RoutePlan2Widget
{
public:
    QPushButton *addRouteButton;
    QPushButton *backButton;
    QPushButton *nextButton;
    QLabel *label;

    void setupUi(QWidget *RoutePlan2Widget)
    {
        if (RoutePlan2Widget->objectName().isEmpty())
            RoutePlan2Widget->setObjectName("RoutePlan2Widget");
        RoutePlan2Widget->resize(291, 617);
        RoutePlan2Widget->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 17, 18);"));
        addRouteButton = new QPushButton(RoutePlan2Widget);
        addRouteButton->setObjectName("addRouteButton");
        addRouteButton->setGeometry(QRect(20, 20, 100, 40));
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
        backButton = new QPushButton(RoutePlan2Widget);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(10, 570, 100, 40));
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
        nextButton = new QPushButton(RoutePlan2Widget);
        nextButton->setObjectName("nextButton");
        nextButton->setGeometry(QRect(180, 570, 100, 40));
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
        label = new QLabel(RoutePlan2Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 290, 141, 51));
        label->setStyleSheet(QString::fromUtf8("background-color:rgb(23, 23, 26);\n"
"color:rgb(220, 220, 220);\n"
"qproperty-alignment: AlignCenter;\n"
"font-size:20px;\n"
"\n"
""));

        retranslateUi(RoutePlan2Widget);

        QMetaObject::connectSlotsByName(RoutePlan2Widget);
    } // setupUi

    void retranslateUi(QWidget *RoutePlan2Widget)
    {
        RoutePlan2Widget->setWindowTitle(QCoreApplication::translate("RoutePlan2Widget", "Form", nullptr));
        addRouteButton->setText(QCoreApplication::translate("RoutePlan2Widget", "\346\267\273\345\212\240\345\205\245\350\267\257", nullptr));
        backButton->setText(QCoreApplication::translate("RoutePlan2Widget", "\350\277\224\345\233\236", nullptr));
        nextButton->setText(QCoreApplication::translate("RoutePlan2Widget", "\344\270\213\344\270\200\346\255\245", nullptr));
        label->setText(QCoreApplication::translate("RoutePlan2Widget", "\347\254\254\345\207\240\350\212\202\346\244\216\351\252\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RoutePlan2Widget: public Ui_RoutePlan2Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROUTEPLAN2WIDGET_H
