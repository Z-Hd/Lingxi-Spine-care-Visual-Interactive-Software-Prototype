/********************************************************************************
** Form generated from reading UI file 'registrationwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONWIDGET_H
#define UI_REGISTRATIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegistrationWidget
{
public:
    QPushButton *nextButton;
    QPushButton *pickUpRegistrationPointsButton;

    void setupUi(QWidget *RegistrationWidget)
    {
        if (RegistrationWidget->objectName().isEmpty())
            RegistrationWidget->setObjectName("RegistrationWidget");
        RegistrationWidget->resize(316, 611);
        RegistrationWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 17, 18);"));
        nextButton = new QPushButton(RegistrationWidget);
        nextButton->setObjectName("nextButton");
        nextButton->setGeometry(QRect(210, 560, 100, 40));
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
        pickUpRegistrationPointsButton = new QPushButton(RegistrationWidget);
        pickUpRegistrationPointsButton->setObjectName("pickUpRegistrationPointsButton");
        pickUpRegistrationPointsButton->setGeometry(QRect(19, 240, 281, 51));
        pickUpRegistrationPointsButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        retranslateUi(RegistrationWidget);

        QMetaObject::connectSlotsByName(RegistrationWidget);
    } // setupUi

    void retranslateUi(QWidget *RegistrationWidget)
    {
        RegistrationWidget->setWindowTitle(QCoreApplication::translate("RegistrationWidget", "Form", nullptr));
        nextButton->setText(QCoreApplication::translate("RegistrationWidget", "\344\270\213\344\270\200\346\255\245", nullptr));
        pickUpRegistrationPointsButton->setText(QCoreApplication::translate("RegistrationWidget", "\346\211\213\345\212\250\346\213\276\345\217\226\351\205\215\345\207\206\347\202\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistrationWidget: public Ui_RegistrationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONWIDGET_H
