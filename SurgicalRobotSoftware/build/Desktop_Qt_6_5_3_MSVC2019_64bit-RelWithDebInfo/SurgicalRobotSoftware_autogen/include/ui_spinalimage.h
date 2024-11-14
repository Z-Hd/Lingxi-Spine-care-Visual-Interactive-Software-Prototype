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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QVTKOpenGLNativeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_SpinalImage
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QVTKOpenGLNativeWidget *axialPlane1;
    QVBoxLayout *verticalLayout_4;
    QSlider *axialSlider1;
    QLabel *axialIndex1;
    QVTKOpenGLNativeWidget *threeDimensiona1;
    QHBoxLayout *horizontalLayout_5;
    QVTKOpenGLNativeWidget *coronalPlane1;
    QVBoxLayout *verticalLayout_5;
    QSlider *coronalSlider1;
    QLabel *coronalIndex1;
    QHBoxLayout *horizontalLayout_6;
    QVTKOpenGLNativeWidget *sagittalPlane1;
    QVBoxLayout *verticalLayout_6;
    QSlider *sagittalSlider1;
    QLabel *sagittalIndex1;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *previousStep1;
    QPushButton *nextStep1;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPushButton *loadImage;
    QPushButton *segment;

    void setupUi(QWidget *SpinalImage)
    {
        if (SpinalImage->objectName().isEmpty())
            SpinalImage->setObjectName("SpinalImage");
        SpinalImage->resize(1289, 991);
        gridLayout_2 = new QGridLayout(SpinalImage);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        axialPlane1 = new QVTKOpenGLNativeWidget(SpinalImage);
        axialPlane1->setObjectName("axialPlane1");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(axialPlane1->sizePolicy().hasHeightForWidth());
        axialPlane1->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(axialPlane1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        axialSlider1 = new QSlider(SpinalImage);
        axialSlider1->setObjectName("axialSlider1");
        axialSlider1->setOrientation(Qt::Vertical);

        verticalLayout_4->addWidget(axialSlider1);

        axialIndex1 = new QLabel(SpinalImage);
        axialIndex1->setObjectName("axialIndex1");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(axialIndex1->sizePolicy().hasHeightForWidth());
        axialIndex1->setSizePolicy(sizePolicy1);
        axialIndex1->setTextFormat(Qt::AutoText);
        axialIndex1->setMargin(2);

        verticalLayout_4->addWidget(axialIndex1);


        horizontalLayout_4->addLayout(verticalLayout_4);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        threeDimensiona1 = new QVTKOpenGLNativeWidget(SpinalImage);
        threeDimensiona1->setObjectName("threeDimensiona1");
        sizePolicy.setHeightForWidth(threeDimensiona1->sizePolicy().hasHeightForWidth());
        threeDimensiona1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(threeDimensiona1, 1, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        coronalPlane1 = new QVTKOpenGLNativeWidget(SpinalImage);
        coronalPlane1->setObjectName("coronalPlane1");
        sizePolicy.setHeightForWidth(coronalPlane1->sizePolicy().hasHeightForWidth());
        coronalPlane1->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(coronalPlane1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        coronalSlider1 = new QSlider(SpinalImage);
        coronalSlider1->setObjectName("coronalSlider1");
        coronalSlider1->setOrientation(Qt::Vertical);

        verticalLayout_5->addWidget(coronalSlider1);

        coronalIndex1 = new QLabel(SpinalImage);
        coronalIndex1->setObjectName("coronalIndex1");
        sizePolicy1.setHeightForWidth(coronalIndex1->sizePolicy().hasHeightForWidth());
        coronalIndex1->setSizePolicy(sizePolicy1);

        verticalLayout_5->addWidget(coronalIndex1);


        horizontalLayout_5->addLayout(verticalLayout_5);


        gridLayout->addLayout(horizontalLayout_5, 0, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        sagittalPlane1 = new QVTKOpenGLNativeWidget(SpinalImage);
        sagittalPlane1->setObjectName("sagittalPlane1");
        sizePolicy.setHeightForWidth(sagittalPlane1->sizePolicy().hasHeightForWidth());
        sagittalPlane1->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(sagittalPlane1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        sagittalSlider1 = new QSlider(SpinalImage);
        sagittalSlider1->setObjectName("sagittalSlider1");
        sagittalSlider1->setOrientation(Qt::Vertical);

        verticalLayout_6->addWidget(sagittalSlider1);

        sagittalIndex1 = new QLabel(SpinalImage);
        sagittalIndex1->setObjectName("sagittalIndex1");

        verticalLayout_6->addWidget(sagittalIndex1);


        horizontalLayout_6->addLayout(verticalLayout_6);


        gridLayout->addLayout(horizontalLayout_6, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 1, 1, 1);

        groupBox_2 = new QGroupBox(SpinalImage);
        groupBox_2->setObjectName("groupBox_2");
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        previousStep1 = new QPushButton(groupBox_2);
        previousStep1->setObjectName("previousStep1");

        horizontalLayout_2->addWidget(previousStep1);

        nextStep1 = new QPushButton(groupBox_2);
        nextStep1->setObjectName("nextStep1");

        horizontalLayout_2->addWidget(nextStep1);


        gridLayout_2->addWidget(groupBox_2, 2, 0, 1, 1);

        groupBox = new QGroupBox(SpinalImage);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        loadImage = new QPushButton(groupBox);
        loadImage->setObjectName("loadImage");
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(loadImage->sizePolicy().hasHeightForWidth());
        loadImage->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(loadImage);

        segment = new QPushButton(groupBox);
        segment->setObjectName("segment");

        verticalLayout->addWidget(segment);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(SpinalImage);

        QMetaObject::connectSlotsByName(SpinalImage);
    } // setupUi

    void retranslateUi(QWidget *SpinalImage)
    {
        SpinalImage->setWindowTitle(QCoreApplication::translate("SpinalImage", "Form", nullptr));
        axialIndex1->setText(QCoreApplication::translate("SpinalImage", "123", nullptr));
        coronalIndex1->setText(QCoreApplication::translate("SpinalImage", "123", nullptr));
        sagittalIndex1->setText(QCoreApplication::translate("SpinalImage", "123", nullptr));
        groupBox_2->setTitle(QString());
        previousStep1->setText(QCoreApplication::translate("SpinalImage", "\344\270\212\344\270\200\346\255\245", nullptr));
        nextStep1->setText(QCoreApplication::translate("SpinalImage", "\344\270\213\344\270\200\346\255\245", nullptr));
        groupBox->setTitle(QString());
        loadImage->setText(QCoreApplication::translate("SpinalImage", "\345\257\274\345\205\245\345\275\261\345\203\217", nullptr));
        segment->setText(QCoreApplication::translate("SpinalImage", "\345\210\206\345\211\262\345\220\216\351\207\215\345\273\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SpinalImage: public Ui_SpinalImage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPINALIMAGE_H
