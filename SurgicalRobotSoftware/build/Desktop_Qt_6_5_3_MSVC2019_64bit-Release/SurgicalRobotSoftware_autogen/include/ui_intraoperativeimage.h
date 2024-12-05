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
#include <QtMultimediaWidgets/QVideoWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
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
    QVTKOpenGLNativeWidget *model3D;
    QGroupBox *sagittalGroupBox;
    QHBoxLayout *horizontalLayout_4;
    QVTKOpenGLNativeWidget *SagittalPlane_3;
    QVTKOpenGLNativeWidget *SagittalSegment_3;
    QVBoxLayout *SagittalSub_3;
    QSlider *SagittalSlider_3;
    QLabel *SagittalLabel_3;
    QGroupBox *transverseGroupBox;
    QHBoxLayout *horizontalLayout_5;
    QVTKOpenGLNativeWidget *TransversePlane_3;
    QVTKOpenGLNativeWidget *TransverseSegment_3;
    QVBoxLayout *TransverseSub_3;
    QSlider *TransverseSlider_3;
    QLabel *TransverseLabel_3;
    QGroupBox *coronalGroupBox;
    QHBoxLayout *horizontalLayout_3;
    QVTKOpenGLNativeWidget *CoronalPlane_3;
    QVTKOpenGLNativeWidget *CoronalSegment_3;
    QVBoxLayout *CoronalSub_3;
    QSlider *CoronalSlider_3;
    QLabel *CoronalLabel_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QVideoWidget *endoscope;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *refresh_3;
    QPushButton *Segment_3;
    QPushButton *actStartCamera;
    QPushButton *actStopCamera;

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
        model3D = new QVTKOpenGLNativeWidget(apparatusGroupBox);
        model3D->setObjectName("model3D");

        gridLayout->addWidget(model3D, 1, 1, 1, 1);

        sagittalGroupBox = new QGroupBox(apparatusGroupBox);
        sagittalGroupBox->setObjectName("sagittalGroupBox");
        horizontalLayout_4 = new QHBoxLayout(sagittalGroupBox);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        SagittalPlane_3 = new QVTKOpenGLNativeWidget(sagittalGroupBox);
        SagittalPlane_3->setObjectName("SagittalPlane_3");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SagittalPlane_3->sizePolicy().hasHeightForWidth());
        SagittalPlane_3->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(SagittalPlane_3);

        SagittalSegment_3 = new QVTKOpenGLNativeWidget(sagittalGroupBox);
        SagittalSegment_3->setObjectName("SagittalSegment_3");

        horizontalLayout_4->addWidget(SagittalSegment_3);

        SagittalSub_3 = new QVBoxLayout();
        SagittalSub_3->setObjectName("SagittalSub_3");
        SagittalSlider_3 = new QSlider(sagittalGroupBox);
        SagittalSlider_3->setObjectName("SagittalSlider_3");
        SagittalSlider_3->setOrientation(Qt::Vertical);

        SagittalSub_3->addWidget(SagittalSlider_3);

        SagittalLabel_3 = new QLabel(sagittalGroupBox);
        SagittalLabel_3->setObjectName("SagittalLabel_3");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(SagittalLabel_3->sizePolicy().hasHeightForWidth());
        SagittalLabel_3->setSizePolicy(sizePolicy1);

        SagittalSub_3->addWidget(SagittalLabel_3);


        horizontalLayout_4->addLayout(SagittalSub_3);


        gridLayout->addWidget(sagittalGroupBox, 1, 0, 1, 1);

        transverseGroupBox = new QGroupBox(apparatusGroupBox);
        transverseGroupBox->setObjectName("transverseGroupBox");
        horizontalLayout_5 = new QHBoxLayout(transverseGroupBox);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        TransversePlane_3 = new QVTKOpenGLNativeWidget(transverseGroupBox);
        TransversePlane_3->setObjectName("TransversePlane_3");
        sizePolicy.setHeightForWidth(TransversePlane_3->sizePolicy().hasHeightForWidth());
        TransversePlane_3->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(TransversePlane_3);

        TransverseSegment_3 = new QVTKOpenGLNativeWidget(transverseGroupBox);
        TransverseSegment_3->setObjectName("TransverseSegment_3");

        horizontalLayout_5->addWidget(TransverseSegment_3);

        TransverseSub_3 = new QVBoxLayout();
        TransverseSub_3->setObjectName("TransverseSub_3");
        TransverseSlider_3 = new QSlider(transverseGroupBox);
        TransverseSlider_3->setObjectName("TransverseSlider_3");
        TransverseSlider_3->setOrientation(Qt::Vertical);

        TransverseSub_3->addWidget(TransverseSlider_3);

        TransverseLabel_3 = new QLabel(transverseGroupBox);
        TransverseLabel_3->setObjectName("TransverseLabel_3");
        sizePolicy1.setHeightForWidth(TransverseLabel_3->sizePolicy().hasHeightForWidth());
        TransverseLabel_3->setSizePolicy(sizePolicy1);

        TransverseSub_3->addWidget(TransverseLabel_3);


        horizontalLayout_5->addLayout(TransverseSub_3);


        gridLayout->addWidget(transverseGroupBox, 0, 0, 1, 1);

        coronalGroupBox = new QGroupBox(apparatusGroupBox);
        coronalGroupBox->setObjectName("coronalGroupBox");
        horizontalLayout_3 = new QHBoxLayout(coronalGroupBox);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        CoronalPlane_3 = new QVTKOpenGLNativeWidget(coronalGroupBox);
        CoronalPlane_3->setObjectName("CoronalPlane_3");
        sizePolicy.setHeightForWidth(CoronalPlane_3->sizePolicy().hasHeightForWidth());
        CoronalPlane_3->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(CoronalPlane_3);

        CoronalSegment_3 = new QVTKOpenGLNativeWidget(coronalGroupBox);
        CoronalSegment_3->setObjectName("CoronalSegment_3");

        horizontalLayout_3->addWidget(CoronalSegment_3);

        CoronalSub_3 = new QVBoxLayout();
        CoronalSub_3->setObjectName("CoronalSub_3");
        CoronalSlider_3 = new QSlider(coronalGroupBox);
        CoronalSlider_3->setObjectName("CoronalSlider_3");
        CoronalSlider_3->setOrientation(Qt::Vertical);

        CoronalSub_3->addWidget(CoronalSlider_3);

        CoronalLabel_3 = new QLabel(coronalGroupBox);
        CoronalLabel_3->setObjectName("CoronalLabel_3");
        sizePolicy1.setHeightForWidth(CoronalLabel_3->sizePolicy().hasHeightForWidth());
        CoronalLabel_3->setSizePolicy(sizePolicy1);

        CoronalSub_3->addWidget(CoronalLabel_3);


        horizontalLayout_3->addLayout(CoronalSub_3);


        gridLayout->addWidget(coronalGroupBox, 0, 1, 1, 1);


        horizontalLayout->addWidget(apparatusGroupBox);

        groupBox = new QGroupBox(imageGroupBox);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        endoscope = new QVideoWidget(groupBox);
        endoscope->setObjectName("endoscope");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(endoscope->sizePolicy().hasHeightForWidth());
        endoscope->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(endoscope);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        refresh_3 = new QPushButton(groupBox_2);
        refresh_3->setObjectName("refresh_3");

        horizontalLayout_2->addWidget(refresh_3);

        Segment_3 = new QPushButton(groupBox_2);
        Segment_3->setObjectName("Segment_3");

        horizontalLayout_2->addWidget(Segment_3);

        actStartCamera = new QPushButton(groupBox_2);
        actStartCamera->setObjectName("actStartCamera");

        horizontalLayout_2->addWidget(actStartCamera);

        actStopCamera = new QPushButton(groupBox_2);
        actStopCamera->setObjectName("actStopCamera");

        horizontalLayout_2->addWidget(actStopCamera);


        verticalLayout->addWidget(groupBox_2);


        horizontalLayout->addWidget(groupBox);


        gridLayout_2->addWidget(imageGroupBox, 0, 1, 1, 1);


        retranslateUi(IntraoperativeImage);

        QMetaObject::connectSlotsByName(IntraoperativeImage);
    } // setupUi

    void retranslateUi(QWidget *IntraoperativeImage)
    {
        IntraoperativeImage->setWindowTitle(QCoreApplication::translate("IntraoperativeImage", "Form", nullptr));
        imageGroupBox->setTitle(QString());
        apparatusGroupBox->setTitle(QString());
        SagittalLabel_3->setText(QCoreApplication::translate("IntraoperativeImage", "N", nullptr));
        TransverseLabel_3->setText(QCoreApplication::translate("IntraoperativeImage", "N", nullptr));
        CoronalLabel_3->setText(QCoreApplication::translate("IntraoperativeImage", "N", nullptr));
        groupBox->setTitle(QString());
        groupBox_2->setTitle(QString());
        refresh_3->setText(QCoreApplication::translate("IntraoperativeImage", "\345\210\267\346\226\260\345\233\276\345\203\217", nullptr));
        Segment_3->setText(QCoreApplication::translate("IntraoperativeImage", "\345\210\206\345\211\262\344\277\241\346\201\257", nullptr));
        actStartCamera->setText(QCoreApplication::translate("IntraoperativeImage", "\345\274\200\345\220\257\346\221\204\345\203\217\345\244\264", nullptr));
        actStopCamera->setText(QCoreApplication::translate("IntraoperativeImage", "\345\205\263\351\227\255\346\221\204\345\203\217\345\244\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IntraoperativeImage: public Ui_IntraoperativeImage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTRAOPERATIVEIMAGE_H
