/********************************************************************************
** Form generated from reading UI file 'imagedisplaywidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEDISPLAYWIDGET_H
#define UI_IMAGEDISPLAYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageDisplayWidget
{
public:
    QPushButton *simulationButton;

    void setupUi(QWidget *ImageDisplayWidget)
    {
        if (ImageDisplayWidget->objectName().isEmpty())
            ImageDisplayWidget->setObjectName("ImageDisplayWidget");
        ImageDisplayWidget->resize(400, 300);
        simulationButton = new QPushButton(ImageDisplayWidget);
        simulationButton->setObjectName("simulationButton");
        simulationButton->setGeometry(QRect(290, 170, 81, 31));
        simulationButton->setStyleSheet(QString::fromUtf8("background-color:rgb(34, 35, 39);color:rgb(115, 118, 125)"));

        retranslateUi(ImageDisplayWidget);

        QMetaObject::connectSlotsByName(ImageDisplayWidget);
    } // setupUi

    void retranslateUi(QWidget *ImageDisplayWidget)
    {
        ImageDisplayWidget->setWindowTitle(QCoreApplication::translate("ImageDisplayWidget", "Form", nullptr));
        simulationButton->setText(QCoreApplication::translate("ImageDisplayWidget", "\346\250\241\346\213\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImageDisplayWidget: public Ui_ImageDisplayWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEDISPLAYWIDGET_H
