/********************************************************************************
** Form generated from reading UI file 'enlargedmodel3dwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENLARGEDMODEL3DWIDGET_H
#define UI_ENLARGEDMODEL3DWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EnlargedModel3DWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *imageWidget;
    QVBoxLayout *verticalLayout;
    QWidget *transverseBackground;
    QHBoxLayout *horizontalLayout_2;
    QWidget *transversePlate;
    QWidget *transverseTools;
    QWidget *sagittalBackground;
    QHBoxLayout *horizontalLayout_3;
    QWidget *sagittalPlate;
    QWidget *sagittalTools;
    QWidget *coronalBackground;
    QHBoxLayout *horizontalLayout_4;
    QWidget *coronalPlate;
    QWidget *coronalTools;
    QWidget *model3DBackground;
    QGridLayout *gridLayout;
    QWidget *model3DPlate;
    QWidget *model3DTools;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *reduce3DModelButton;
    QWidget *model3DBody;

    void setupUi(QWidget *EnlargedModel3DWidget)
    {
        if (EnlargedModel3DWidget->objectName().isEmpty())
            EnlargedModel3DWidget->setObjectName("EnlargedModel3DWidget");
        EnlargedModel3DWidget->resize(1062, 888);
        EnlargedModel3DWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 29, 33);"));
        horizontalLayout = new QHBoxLayout(EnlargedModel3DWidget);
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        imageWidget = new QWidget(EnlargedModel3DWidget);
        imageWidget->setObjectName("imageWidget");
        imageWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 29, 33);"));
        verticalLayout = new QVBoxLayout(imageWidget);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        transverseBackground = new QWidget(imageWidget);
        transverseBackground->setObjectName("transverseBackground");
        transverseBackground->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        horizontalLayout_2 = new QHBoxLayout(transverseBackground);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        transversePlate = new QWidget(transverseBackground);
        transversePlate->setObjectName("transversePlate");
        transversePlate->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 127);"));

        horizontalLayout_2->addWidget(transversePlate);

        transverseTools = new QWidget(transverseBackground);
        transverseTools->setObjectName("transverseTools");
        transverseTools->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));

        horizontalLayout_2->addWidget(transverseTools);

        horizontalLayout_2->setStretch(0, 14);
        horizontalLayout_2->setStretch(1, 3);

        verticalLayout->addWidget(transverseBackground);

        sagittalBackground = new QWidget(imageWidget);
        sagittalBackground->setObjectName("sagittalBackground");
        sagittalBackground->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        horizontalLayout_3 = new QHBoxLayout(sagittalBackground);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        sagittalPlate = new QWidget(sagittalBackground);
        sagittalPlate->setObjectName("sagittalPlate");
        sagittalPlate->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 127);"));

        horizontalLayout_3->addWidget(sagittalPlate);

        sagittalTools = new QWidget(sagittalBackground);
        sagittalTools->setObjectName("sagittalTools");
        sagittalTools->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));

        horizontalLayout_3->addWidget(sagittalTools);

        horizontalLayout_3->setStretch(0, 14);
        horizontalLayout_3->setStretch(1, 3);

        verticalLayout->addWidget(sagittalBackground);

        coronalBackground = new QWidget(imageWidget);
        coronalBackground->setObjectName("coronalBackground");
        coronalBackground->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        horizontalLayout_4 = new QHBoxLayout(coronalBackground);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        coronalPlate = new QWidget(coronalBackground);
        coronalPlate->setObjectName("coronalPlate");
        coronalPlate->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 127);"));

        horizontalLayout_4->addWidget(coronalPlate);

        coronalTools = new QWidget(coronalBackground);
        coronalTools->setObjectName("coronalTools");
        coronalTools->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));

        horizontalLayout_4->addWidget(coronalTools);

        horizontalLayout_4->setStretch(0, 14);
        horizontalLayout_4->setStretch(1, 3);

        verticalLayout->addWidget(coronalBackground);


        horizontalLayout->addWidget(imageWidget);

        model3DBackground = new QWidget(EnlargedModel3DWidget);
        model3DBackground->setObjectName("model3DBackground");
        model3DBackground->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        gridLayout = new QGridLayout(model3DBackground);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        model3DPlate = new QWidget(model3DBackground);
        model3DPlate->setObjectName("model3DPlate");
        model3DPlate->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 127);"));

        gridLayout->addWidget(model3DPlate, 0, 0, 2, 1);

        model3DTools = new QWidget(model3DBackground);
        model3DTools->setObjectName("model3DTools");
        model3DTools->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));
        horizontalLayout_5 = new QHBoxLayout(model3DTools);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        reduce3DModelButton = new QPushButton(model3DTools);
        reduce3DModelButton->setObjectName("reduce3DModelButton");

        horizontalLayout_5->addWidget(reduce3DModelButton);


        gridLayout->addWidget(model3DTools, 0, 1, 1, 1);

        model3DBody = new QWidget(model3DBackground);
        model3DBody->setObjectName("model3DBody");
        model3DBody->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));

        gridLayout->addWidget(model3DBody, 1, 1, 1, 1);

        gridLayout->setRowStretch(0, 10);
        gridLayout->setRowStretch(1, 1);
        gridLayout->setColumnStretch(0, 7);
        gridLayout->setColumnStretch(1, 1);

        horizontalLayout->addWidget(model3DBackground);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 3);

        retranslateUi(EnlargedModel3DWidget);

        QMetaObject::connectSlotsByName(EnlargedModel3DWidget);
    } // setupUi

    void retranslateUi(QWidget *EnlargedModel3DWidget)
    {
        EnlargedModel3DWidget->setWindowTitle(QCoreApplication::translate("EnlargedModel3DWidget", "Form", nullptr));
        reduce3DModelButton->setText(QCoreApplication::translate("EnlargedModel3DWidget", "\347\274\251\345\260\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EnlargedModel3DWidget: public Ui_EnlargedModel3DWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENLARGEDMODEL3DWIDGET_H
