/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QPushButton *loginButton;
    QLineEdit *userEdit;
    QLineEdit *passwordEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(1920, 1010);
        gridLayout = new QGridLayout(Login);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(-1, -1, 0, 0);
        widget = new QWidget(Login);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget{background-image: url(:/resource/image/background.jpg);}"));
        loginButton = new QPushButton(widget);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(1330, 620, 301, 41));
        loginButton->setStyleSheet(QString::fromUtf8("background-color: rgb(67, 67, 67);\n"
"color: rgb(255, 255, 255);\n"
"\n"
"border-radius: 15px;\n"
"font-size:20px"));
        userEdit = new QLineEdit(widget);
        userEdit->setObjectName("userEdit");
        userEdit->setGeometry(QRect(1330, 430, 301, 41));
        userEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 27, 31);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px solid #ddd;\n"
"border-radius: 15px;\n"
"font-size:20px"));
        userEdit->setAlignment(Qt::AlignCenter);
        passwordEdit = new QLineEdit(widget);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setGeometry(QRect(1330, 510, 301, 41));
        passwordEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 27, 31);\n"
"color: rgb(255, 255, 255);\n"
"border: 1px solid #ddd;\n"
"border-radius: 15px;\n"
"font-size:20px"));
        passwordEdit->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(1370, 310, 251, 61));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size:25px"));
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(1270, 430, 41, 41));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/resource/image/user.png);"));
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(1270, 510, 41, 31));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/resource/image/lock.png);"));

        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Form", nullptr));
        loginButton->setText(QCoreApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("Login", "\350\204\212\346\237\261\346\211\213\346\234\257\346\234\272\345\231\250\344\272\272", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
