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
    QHBoxLayout *Coronal;
    QVTKOpenGLNativeWidget *Coronal_2;
    QVBoxLayout *Coronal_Sub;
    QSlider *Coronal_Slider_2;
    QLabel *Coronal_Label_2;
    QHBoxLayout *Sagittal;
    QVTKOpenGLNativeWidget *Sagittal_2;
    QVBoxLayout *Sagittal_Sub;
    QSlider *Sagittal_Slider_2;
    QLabel *Sagittal_Label_2;
    QHBoxLayout *Transverse;
    QVTKOpenGLNativeWidget *Transverse_2;
    QVBoxLayout *Transverse_Sub;
    QSlider *Transverse_Slider_2;
    QLabel *Transverse_Label_2;
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

        Coronal = new QHBoxLayout();
        Coronal->setObjectName("Coronal");
        Coronal_2 = new QVTKOpenGLNativeWidget(Visualize);
        Coronal_2->setObjectName("Coronal_2");
        sizePolicy3.setHeightForWidth(Coronal_2->sizePolicy().hasHeightForWidth());
        Coronal_2->setSizePolicy(sizePolicy3);

        Coronal->addWidget(Coronal_2);

        Coronal_Sub = new QVBoxLayout();
        Coronal_Sub->setObjectName("Coronal_Sub");
        Coronal_Slider_2 = new QSlider(Visualize);
        Coronal_Slider_2->setObjectName("Coronal_Slider_2");
        Coronal_Slider_2->setOrientation(Qt::Vertical);

        Coronal_Sub->addWidget(Coronal_Slider_2);

        Coronal_Label_2 = new QLabel(Visualize);
        Coronal_Label_2->setObjectName("Coronal_Label_2");
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(Coronal_Label_2->sizePolicy().hasHeightForWidth());
        Coronal_Label_2->setSizePolicy(sizePolicy4);

        Coronal_Sub->addWidget(Coronal_Label_2);


        Coronal->addLayout(Coronal_Sub);


        gridLayout->addLayout(Coronal, 2, 0, 1, 1);

        Sagittal = new QHBoxLayout();
        Sagittal->setObjectName("Sagittal");
        Sagittal_2 = new QVTKOpenGLNativeWidget(Visualize);
        Sagittal_2->setObjectName("Sagittal_2");
        sizePolicy3.setHeightForWidth(Sagittal_2->sizePolicy().hasHeightForWidth());
        Sagittal_2->setSizePolicy(sizePolicy3);

        Sagittal->addWidget(Sagittal_2);

        Sagittal_Sub = new QVBoxLayout();
        Sagittal_Sub->setObjectName("Sagittal_Sub");
        Sagittal_Slider_2 = new QSlider(Visualize);
        Sagittal_Slider_2->setObjectName("Sagittal_Slider_2");
        Sagittal_Slider_2->setOrientation(Qt::Vertical);

        Sagittal_Sub->addWidget(Sagittal_Slider_2);

        Sagittal_Label_2 = new QLabel(Visualize);
        Sagittal_Label_2->setObjectName("Sagittal_Label_2");
        sizePolicy4.setHeightForWidth(Sagittal_Label_2->sizePolicy().hasHeightForWidth());
        Sagittal_Label_2->setSizePolicy(sizePolicy4);

        Sagittal_Sub->addWidget(Sagittal_Label_2);


        Sagittal->addLayout(Sagittal_Sub);


        gridLayout->addLayout(Sagittal, 1, 3, 1, 1);

        Transverse = new QHBoxLayout();
        Transverse->setObjectName("Transverse");
        Transverse_2 = new QVTKOpenGLNativeWidget(Visualize);
        Transverse_2->setObjectName("Transverse_2");
        sizePolicy3.setHeightForWidth(Transverse_2->sizePolicy().hasHeightForWidth());
        Transverse_2->setSizePolicy(sizePolicy3);

        Transverse->addWidget(Transverse_2);

        Transverse_Sub = new QVBoxLayout();
        Transverse_Sub->setObjectName("Transverse_Sub");
        Transverse_Slider_2 = new QSlider(Visualize);
        Transverse_Slider_2->setObjectName("Transverse_Slider_2");
        Transverse_Slider_2->setOrientation(Qt::Vertical);

        Transverse_Sub->addWidget(Transverse_Slider_2);

        Transverse_Label_2 = new QLabel(Visualize);
        Transverse_Label_2->setObjectName("Transverse_Label_2");
        sizePolicy4.setHeightForWidth(Transverse_Label_2->sizePolicy().hasHeightForWidth());
        Transverse_Label_2->setSizePolicy(sizePolicy4);

        Transverse_Sub->addWidget(Transverse_Label_2);


        Transverse->addLayout(Transverse_Sub);


        gridLayout->addLayout(Transverse, 1, 0, 1, 1);


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
        Coronal_Label_2->setText(QCoreApplication::translate("RoutePlan", "N", nullptr));
        Sagittal_Label_2->setText(QCoreApplication::translate("RoutePlan", "N", nullptr));
        Transverse_Label_2->setText(QCoreApplication::translate("RoutePlan", "N", nullptr));
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
