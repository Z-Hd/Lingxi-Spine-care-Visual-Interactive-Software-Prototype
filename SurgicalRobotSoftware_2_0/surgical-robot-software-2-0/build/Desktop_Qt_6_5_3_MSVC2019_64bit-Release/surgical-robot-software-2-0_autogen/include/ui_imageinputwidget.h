/********************************************************************************
** Form generated from reading UI file 'imageinputwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEINPUTWIDGET_H
#define UI_IMAGEINPUTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageInputWidget
{
public:
    QPushButton *confirmButton;
    QLabel *label;
    QPushButton *backButton;

    void setupUi(QWidget *ImageInputWidget)
    {
        if (ImageInputWidget->objectName().isEmpty())
            ImageInputWidget->setObjectName("ImageInputWidget");
        ImageInputWidget->resize(858, 529);
        ImageInputWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        confirmButton = new QPushButton(ImageInputWidget);
        confirmButton->setObjectName("confirmButton");
        confirmButton->setGeometry(QRect(290, 240, 100, 40));
        confirmButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label = new QLabel(ImageInputWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(-20, 30, 746, 32));
        label->setStyleSheet(QString::fromUtf8("background-color:rgb(23, 23, 26);\n"
"color:rgb(220, 220, 220);\n"
"qproperty-alignment: AlignCenter;\n"
"font-size:20px;\n"
"\n"
""));
        backButton = new QPushButton(ImageInputWidget);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(180, 240, 100, 40));
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

        retranslateUi(ImageInputWidget);

        QMetaObject::connectSlotsByName(ImageInputWidget);
    } // setupUi

    void retranslateUi(QWidget *ImageInputWidget)
    {
        ImageInputWidget->setWindowTitle(QCoreApplication::translate("ImageInputWidget", "Form", nullptr));
        confirmButton->setText(QCoreApplication::translate("ImageInputWidget", "\347\241\256\350\256\244", nullptr));
        label->setText(QCoreApplication::translate("ImageInputWidget", "\345\257\274\345\205\245\345\275\261\345\203\217", nullptr));
        backButton->setText(QCoreApplication::translate("ImageInputWidget", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImageInputWidget: public Ui_ImageInputWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEINPUTWIDGET_H
