/********************************************************************************
** Form generated from reading UI file 'RoutePlan.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROUTEPLAN_H
#define UI_ROUTEPLAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QVTKOpenGLNativeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_RoutePlan
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *Title;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *Refresh_2;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *Visualize;
    QGridLayout *gridLayout;
    QVTKOpenGLNativeWidget *Model3D_2;
    QHBoxLayout *Coronal_2;
    QVTKOpenGLNativeWidget *CoronalPlane_2;
    QVBoxLayout *CoronalSub_2;
    QSlider *CoronalSlider_2;
    QLabel *CoronalLabel_2;
    QHBoxLayout *Sagittal_2;
    QVTKOpenGLNativeWidget *SagittalPlane_2;
    QVBoxLayout *SagittalSub_2;
    QSlider *SagittalSlider_2;
    QLabel *SagittalLabel_2;
    QHBoxLayout *Transverse_2;
    QVTKOpenGLNativeWidget *TransversePlane_2;
    QVBoxLayout *TransverseSub_2;
    QSlider *TransverseSlider_2;
    QLabel *TransverseLabel_2;
    QGroupBox *Previous_and_Next;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Previous_2;
    QPushButton *Next_2;
    QSpacerItem *horizontalSpacer_8;

    void setupUi(QWidget *RoutePlan)
    {
        if (RoutePlan->objectName().isEmpty())
            RoutePlan->setObjectName("RoutePlan");
        RoutePlan->resize(1080, 688);
        verticalLayout = new QVBoxLayout(RoutePlan);
        verticalLayout->setObjectName("verticalLayout");
        Title = new QGroupBox(RoutePlan);
        Title->setObjectName("Title");
        horizontalLayout_2 = new QHBoxLayout(Title);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(Title);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(17);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        Refresh_2 = new QPushButton(Title);
        Refresh_2->setObjectName("Refresh_2");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Refresh_2->sizePolicy().hasHeightForWidth());
        Refresh_2->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(Refresh_2);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(Title);

        Visualize = new QGroupBox(RoutePlan);
        Visualize->setObjectName("Visualize");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Visualize->sizePolicy().hasHeightForWidth());
        Visualize->setSizePolicy(sizePolicy2);
        gridLayout = new QGridLayout(Visualize);
        gridLayout->setObjectName("gridLayout");
        Model3D_2 = new QVTKOpenGLNativeWidget(Visualize);
        Model3D_2->setObjectName("Model3D_2");
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Model3D_2->sizePolicy().hasHeightForWidth());
        Model3D_2->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(Model3D_2, 2, 3, 1, 1);

        Coronal_2 = new QHBoxLayout();
        Coronal_2->setObjectName("Coronal_2");
        CoronalPlane_2 = new QVTKOpenGLNativeWidget(Visualize);
        CoronalPlane_2->setObjectName("CoronalPlane_2");
        sizePolicy3.setHeightForWidth(CoronalPlane_2->sizePolicy().hasHeightForWidth());
        CoronalPlane_2->setSizePolicy(sizePolicy3);

        Coronal_2->addWidget(CoronalPlane_2);

        CoronalSub_2 = new QVBoxLayout();
        CoronalSub_2->setObjectName("CoronalSub_2");
        CoronalSlider_2 = new QSlider(Visualize);
        CoronalSlider_2->setObjectName("CoronalSlider_2");
        CoronalSlider_2->setOrientation(Qt::Vertical);

        CoronalSub_2->addWidget(CoronalSlider_2);

        CoronalLabel_2 = new QLabel(Visualize);
        CoronalLabel_2->setObjectName("CoronalLabel_2");
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(CoronalLabel_2->sizePolicy().hasHeightForWidth());
        CoronalLabel_2->setSizePolicy(sizePolicy4);

        CoronalSub_2->addWidget(CoronalLabel_2);


        Coronal_2->addLayout(CoronalSub_2);


        gridLayout->addLayout(Coronal_2, 2, 0, 1, 1);

        Sagittal_2 = new QHBoxLayout();
        Sagittal_2->setObjectName("Sagittal_2");
        SagittalPlane_2 = new QVTKOpenGLNativeWidget(Visualize);
        SagittalPlane_2->setObjectName("SagittalPlane_2");
        sizePolicy3.setHeightForWidth(SagittalPlane_2->sizePolicy().hasHeightForWidth());
        SagittalPlane_2->setSizePolicy(sizePolicy3);

        Sagittal_2->addWidget(SagittalPlane_2);

        SagittalSub_2 = new QVBoxLayout();
        SagittalSub_2->setObjectName("SagittalSub_2");
        SagittalSlider_2 = new QSlider(Visualize);
        SagittalSlider_2->setObjectName("SagittalSlider_2");
        SagittalSlider_2->setOrientation(Qt::Vertical);

        SagittalSub_2->addWidget(SagittalSlider_2);

        SagittalLabel_2 = new QLabel(Visualize);
        SagittalLabel_2->setObjectName("SagittalLabel_2");
        sizePolicy4.setHeightForWidth(SagittalLabel_2->sizePolicy().hasHeightForWidth());
        SagittalLabel_2->setSizePolicy(sizePolicy4);

        SagittalSub_2->addWidget(SagittalLabel_2);


        Sagittal_2->addLayout(SagittalSub_2);


        gridLayout->addLayout(Sagittal_2, 1, 3, 1, 1);

        Transverse_2 = new QHBoxLayout();
        Transverse_2->setObjectName("Transverse_2");
        TransversePlane_2 = new QVTKOpenGLNativeWidget(Visualize);
        TransversePlane_2->setObjectName("TransversePlane_2");
        sizePolicy3.setHeightForWidth(TransversePlane_2->sizePolicy().hasHeightForWidth());
        TransversePlane_2->setSizePolicy(sizePolicy3);

        Transverse_2->addWidget(TransversePlane_2);

        TransverseSub_2 = new QVBoxLayout();
        TransverseSub_2->setObjectName("TransverseSub_2");
        TransverseSlider_2 = new QSlider(Visualize);
        TransverseSlider_2->setObjectName("TransverseSlider_2");
        TransverseSlider_2->setOrientation(Qt::Vertical);

        TransverseSub_2->addWidget(TransverseSlider_2);

        TransverseLabel_2 = new QLabel(Visualize);
        TransverseLabel_2->setObjectName("TransverseLabel_2");
        sizePolicy4.setHeightForWidth(TransverseLabel_2->sizePolicy().hasHeightForWidth());
        TransverseLabel_2->setSizePolicy(sizePolicy4);

        TransverseSub_2->addWidget(TransverseLabel_2);


        Transverse_2->addLayout(TransverseSub_2);


        gridLayout->addLayout(Transverse_2, 1, 0, 1, 1);


        verticalLayout->addWidget(Visualize);

        Previous_and_Next = new QGroupBox(RoutePlan);
        Previous_and_Next->setObjectName("Previous_and_Next");
        horizontalLayout_3 = new QHBoxLayout(Previous_and_Next);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        Previous_2 = new QPushButton(Previous_and_Next);
        Previous_2->setObjectName("Previous_2");
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(Previous_2->sizePolicy().hasHeightForWidth());
        Previous_2->setSizePolicy(sizePolicy5);

        horizontalLayout_3->addWidget(Previous_2);

        Next_2 = new QPushButton(Previous_and_Next);
        Next_2->setObjectName("Next_2");
        sizePolicy5.setHeightForWidth(Next_2->sizePolicy().hasHeightForWidth());
        Next_2->setSizePolicy(sizePolicy5);

        horizontalLayout_3->addWidget(Next_2);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);


        verticalLayout->addWidget(Previous_and_Next);


        retranslateUi(RoutePlan);

        QMetaObject::connectSlotsByName(RoutePlan);
    } // setupUi

    void retranslateUi(QWidget *RoutePlan)
    {
        RoutePlan->setWindowTitle(QCoreApplication::translate("RoutePlan", "Form", nullptr));
        Title->setTitle(QString());
        label->setText(QCoreApplication::translate("RoutePlan", "\346\244\216\351\227\264\345\255\224\351\200\232\351\201\223\345\205\245\350\267\257\345\256\232\344\275\215", nullptr));
        Refresh_2->setText(QCoreApplication::translate("RoutePlan", "\345\210\267\346\226\260", nullptr));
        Visualize->setTitle(QCoreApplication::translate("RoutePlan", "Visualize", nullptr));
        CoronalLabel_2->setText(QCoreApplication::translate("RoutePlan", "N", nullptr));
        SagittalLabel_2->setText(QCoreApplication::translate("RoutePlan", "N", nullptr));
        TransverseLabel_2->setText(QCoreApplication::translate("RoutePlan", "N", nullptr));
        Previous_and_Next->setTitle(QCoreApplication::translate("RoutePlan", "Previous&Next", nullptr));
        Previous_2->setText(QCoreApplication::translate("RoutePlan", "\344\270\212\344\270\200\346\255\245", nullptr));
        Next_2->setText(QCoreApplication::translate("RoutePlan", "\344\270\213\344\270\200\346\255\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RoutePlan: public Ui_RoutePlan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROUTEPLAN_H
