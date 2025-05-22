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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageInputWidget
{
public:
    QPushButton *simulationButton;

    void setupUi(QWidget *ImageInputWidget)
    {
        if (ImageInputWidget->objectName().isEmpty())
            ImageInputWidget->setObjectName("ImageInputWidget");
        ImageInputWidget->resize(400, 300);
        simulationButton = new QPushButton(ImageInputWidget);
        simulationButton->setObjectName("simulationButton");
        simulationButton->setGeometry(QRect(270, 230, 100, 40));
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

        retranslateUi(ImageInputWidget);

        QMetaObject::connectSlotsByName(ImageInputWidget);
    } // setupUi

    void retranslateUi(QWidget *ImageInputWidget)
    {
        ImageInputWidget->setWindowTitle(QCoreApplication::translate("ImageInputWidget", "Form", nullptr));
        simulationButton->setText(QCoreApplication::translate("ImageInputWidget", "\344\270\213\344\270\200\346\255\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImageInputWidget: public Ui_ImageInputWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEINPUTWIDGET_H
