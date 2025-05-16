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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageInputWidget
{
public:

    void setupUi(QWidget *ImageInputWidget)
    {
        if (ImageInputWidget->objectName().isEmpty())
            ImageInputWidget->setObjectName("ImageInputWidget");
        ImageInputWidget->resize(400, 300);

        retranslateUi(ImageInputWidget);

        QMetaObject::connectSlotsByName(ImageInputWidget);
    } // setupUi

    void retranslateUi(QWidget *ImageInputWidget)
    {
        ImageInputWidget->setWindowTitle(QCoreApplication::translate("ImageInputWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImageInputWidget: public Ui_ImageInputWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEINPUTWIDGET_H
