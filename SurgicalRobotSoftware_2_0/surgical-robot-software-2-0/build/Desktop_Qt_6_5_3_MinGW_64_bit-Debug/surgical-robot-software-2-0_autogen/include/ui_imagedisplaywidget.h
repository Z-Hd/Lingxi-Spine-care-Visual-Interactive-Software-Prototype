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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageDisplayWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *visualization;
    QGridLayout *gridLayout;
    QWidget *transverseBackground;
    QHBoxLayout *horizontalLayout_5;
    QWidget *transversePlate;
    QWidget *sagittalBackground;
    QHBoxLayout *horizontalLayout_2;
    QWidget *sagittalPlate;
    QWidget *coronalBackground;
    QHBoxLayout *horizontalLayout_3;
    QWidget *coronalPlate;
    QWidget *model3DBackground;
    QHBoxLayout *horizontalLayout_4;
    QWidget *model3DPlate;
    QWidget *addition;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *verticalSpacer_11;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QStackedWidget *stackedWidget;
    QWidget *stackedWidgetPage1;
    QPushButton *simulationButton;

    void setupUi(QWidget *ImageDisplayWidget)
    {
        if (ImageDisplayWidget->objectName().isEmpty())
            ImageDisplayWidget->setObjectName("ImageDisplayWidget");
        ImageDisplayWidget->resize(1016, 601);
        ImageDisplayWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 29, 33)"));
        horizontalLayout = new QHBoxLayout(ImageDisplayWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        visualization = new QWidget(ImageDisplayWidget);
        visualization->setObjectName("visualization");
        gridLayout = new QGridLayout(visualization);
        gridLayout->setSpacing(4);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        transverseBackground = new QWidget(visualization);
        transverseBackground->setObjectName("transverseBackground");
        transverseBackground->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        horizontalLayout_5 = new QHBoxLayout(transverseBackground);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 66, 0);
        transversePlate = new QWidget(transverseBackground);
        transversePlate->setObjectName("transversePlate");
        transversePlate->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 127);"));

        horizontalLayout_5->addWidget(transversePlate);


        gridLayout->addWidget(transverseBackground, 0, 0, 1, 1);

        sagittalBackground = new QWidget(visualization);
        sagittalBackground->setObjectName("sagittalBackground");
        sagittalBackground->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        horizontalLayout_2 = new QHBoxLayout(sagittalBackground);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 66, 0);
        sagittalPlate = new QWidget(sagittalBackground);
        sagittalPlate->setObjectName("sagittalPlate");
        sagittalPlate->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 127);"));

        horizontalLayout_2->addWidget(sagittalPlate);


        gridLayout->addWidget(sagittalBackground, 0, 1, 1, 1);

        coronalBackground = new QWidget(visualization);
        coronalBackground->setObjectName("coronalBackground");
        coronalBackground->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        horizontalLayout_3 = new QHBoxLayout(coronalBackground);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 66, 0);
        coronalPlate = new QWidget(coronalBackground);
        coronalPlate->setObjectName("coronalPlate");
        coronalPlate->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 127);"));

        horizontalLayout_3->addWidget(coronalPlate);


        gridLayout->addWidget(coronalBackground, 1, 0, 1, 1);

        model3DBackground = new QWidget(visualization);
        model3DBackground->setObjectName("model3DBackground");
        model3DBackground->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        horizontalLayout_4 = new QHBoxLayout(model3DBackground);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 66, 0);
        model3DPlate = new QWidget(model3DBackground);
        model3DPlate->setObjectName("model3DPlate");
        model3DPlate->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 127);"));

        horizontalLayout_4->addWidget(model3DPlate);


        gridLayout->addWidget(model3DBackground, 1, 1, 1, 1);


        horizontalLayout->addWidget(visualization);

        addition = new QWidget(ImageDisplayWidget);
        addition->setObjectName("addition");
        verticalLayout = new QVBoxLayout(addition);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_7);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_8);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_9);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_10);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_11);

        pushButton = new QPushButton(addition);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(addition);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pushButton_2);


        horizontalLayout->addWidget(addition);

        stackedWidget = new QStackedWidget(ImageDisplayWidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 17, 18);"));
        stackedWidgetPage1 = new QWidget();
        stackedWidgetPage1->setObjectName("stackedWidgetPage1");
        simulationButton = new QPushButton(stackedWidgetPage1);
        simulationButton->setObjectName("simulationButton");
        simulationButton->setGeometry(QRect(120, 540, 81, 31));
        simulationButton->setStyleSheet(QString::fromUtf8("background-color:rgb(34, 35, 39);color:rgb(115, 118, 125)"));
        stackedWidget->addWidget(stackedWidgetPage1);

        horizontalLayout->addWidget(stackedWidget);

        horizontalLayout->setStretch(0, 40);
        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 14);

        retranslateUi(ImageDisplayWidget);

        QMetaObject::connectSlotsByName(ImageDisplayWidget);
    } // setupUi

    void retranslateUi(QWidget *ImageDisplayWidget)
    {
        ImageDisplayWidget->setWindowTitle(QCoreApplication::translate("ImageDisplayWidget", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("ImageDisplayWidget", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ImageDisplayWidget", "PushButton", nullptr));
        simulationButton->setText(QCoreApplication::translate("ImageDisplayWidget", "\346\250\241\346\213\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImageDisplayWidget: public Ui_ImageDisplayWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEDISPLAYWIDGET_H
