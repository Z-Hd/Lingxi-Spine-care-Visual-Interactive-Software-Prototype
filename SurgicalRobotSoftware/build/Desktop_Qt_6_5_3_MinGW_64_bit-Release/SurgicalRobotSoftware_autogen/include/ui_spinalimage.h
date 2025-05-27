/********************************************************************************
** Form generated from reading UI file 'spinalimage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPINALIMAGE_H
#define UI_SPINALIMAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>
#include "qvtkopenglnativewidget.h"

QT_BEGIN_NAMESPACE

class Ui_SpinalImage
{
public:
    QVTKOpenGLNativeWidget *vtkopenGLNativeWidget;

    void setupUi(QWidget *SpinalImage)
    {
        if (SpinalImage->objectName().isEmpty())
            SpinalImage->setObjectName("SpinalImage");
        SpinalImage->resize(935, 491);
        vtkopenGLNativeWidget = new QVTKOpenGLNativeWidget(SpinalImage);
        vtkopenGLNativeWidget->setObjectName("vtkopenGLNativeWidget");
        vtkopenGLNativeWidget->setGeometry(QRect(540, 120, 251, 231));

        retranslateUi(SpinalImage);

        QMetaObject::connectSlotsByName(SpinalImage);
    } // setupUi

    void retranslateUi(QWidget *SpinalImage)
    {
        SpinalImage->setWindowTitle(QCoreApplication::translate("SpinalImage", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SpinalImage: public Ui_SpinalImage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPINALIMAGE_H
