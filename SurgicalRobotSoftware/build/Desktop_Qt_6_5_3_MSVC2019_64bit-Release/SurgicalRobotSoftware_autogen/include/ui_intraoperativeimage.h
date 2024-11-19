/********************************************************************************
** Form generated from reading UI file 'intraoperativeimage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTRAOPERATIVEIMAGE_H
#define UI_INTRAOPERATIVEIMAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QWidget>
#include "qvtkopenglnativewidget.h"

QT_BEGIN_NAMESPACE

class Ui_IntraoperativeImage
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *imageGroupBox;
    QHBoxLayout *horizontalLayout;
    QGroupBox *apparatusGroupBox;
    QGridLayout *gridLayout;
    QVTKOpenGLNativeWidget *widget_3;
    QVTKOpenGLNativeWidget *widget_4;
    QVTKOpenGLNativeWidget *widget;
    QVTKOpenGLNativeWidget *widget_2;
    QVTKOpenGLNativeWidget *endoscopyLabel;

    void setupUi(QWidget *IntraoperativeImage)
    {
        if (IntraoperativeImage->objectName().isEmpty())
            IntraoperativeImage->setObjectName("IntraoperativeImage");
        IntraoperativeImage->resize(918, 625);
        gridLayout_2 = new QGridLayout(IntraoperativeImage);
        gridLayout_2->setObjectName("gridLayout_2");
        imageGroupBox = new QGroupBox(IntraoperativeImage);
        imageGroupBox->setObjectName("imageGroupBox");
        horizontalLayout = new QHBoxLayout(imageGroupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        apparatusGroupBox = new QGroupBox(imageGroupBox);
        apparatusGroupBox->setObjectName("apparatusGroupBox");
        gridLayout = new QGridLayout(apparatusGroupBox);
        gridLayout->setObjectName("gridLayout");
        widget_3 = new QVTKOpenGLNativeWidget(apparatusGroupBox);
        widget_3->setObjectName("widget_3");

        gridLayout->addWidget(widget_3, 1, 1, 1, 1);

        widget_4 = new QVTKOpenGLNativeWidget(apparatusGroupBox);
        widget_4->setObjectName("widget_4");

        gridLayout->addWidget(widget_4, 2, 0, 1, 1);

        widget = new QVTKOpenGLNativeWidget(apparatusGroupBox);
        widget->setObjectName("widget");

        gridLayout->addWidget(widget, 2, 1, 1, 1);

        widget_2 = new QVTKOpenGLNativeWidget(apparatusGroupBox);
        widget_2->setObjectName("widget_2");

        gridLayout->addWidget(widget_2, 1, 0, 1, 1);


        horizontalLayout->addWidget(apparatusGroupBox);

        endoscopyLabel = new QVTKOpenGLNativeWidget(imageGroupBox);
        endoscopyLabel->setObjectName("endoscopyLabel");

        horizontalLayout->addWidget(endoscopyLabel);


        gridLayout_2->addWidget(imageGroupBox, 0, 1, 1, 1);


        retranslateUi(IntraoperativeImage);

        QMetaObject::connectSlotsByName(IntraoperativeImage);
    } // setupUi

    void retranslateUi(QWidget *IntraoperativeImage)
    {
        IntraoperativeImage->setWindowTitle(QCoreApplication::translate("IntraoperativeImage", "Form", nullptr));
        imageGroupBox->setTitle(QString());
        apparatusGroupBox->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class IntraoperativeImage: public Ui_IntraoperativeImage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTRAOPERATIVEIMAGE_H
