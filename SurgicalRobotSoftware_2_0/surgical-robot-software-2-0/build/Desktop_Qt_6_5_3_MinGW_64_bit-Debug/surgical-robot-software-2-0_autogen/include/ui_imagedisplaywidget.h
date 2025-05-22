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
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageDisplayWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *visualizationWidget;
    QGridLayout *gridLayout;
    QWidget *transverseBackground;
    QHBoxLayout *horizontalLayout_5;
    QWidget *transversePlate;
    QWidget *transverseTools;
    QHBoxLayout *horizontalLayout_6;
    QScrollBar *transverseScrollBar;
    QWidget *sagittalBackground;
    QHBoxLayout *horizontalLayout_2;
    QWidget *sagittalPlate;
    QWidget *sagittalTools;
    QHBoxLayout *horizontalLayout_7;
    QScrollBar *sagittalScrollBar;
    QWidget *coronalBackground;
    QHBoxLayout *horizontalLayout_3;
    QWidget *coronalPlate;
    QWidget *coronalTools;
    QHBoxLayout *horizontalLayout_8;
    QScrollBar *coronalScrollBar;
    QWidget *model3DBackground;
    QHBoxLayout *horizontalLayout_4;
    QWidget *model3DPlate;
    QWidget *model3DBody;
    QWidget *model3DTools;
    QHBoxLayout *horizontalLayout_9;
    QScrollBar *model3DScrollBar;
    QWidget *additionWidget;
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

    void setupUi(QWidget *ImageDisplayWidget)
    {
        if (ImageDisplayWidget->objectName().isEmpty())
            ImageDisplayWidget->setObjectName("ImageDisplayWidget");
        ImageDisplayWidget->resize(1510, 996);
        ImageDisplayWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 29, 33)"));
        horizontalLayout = new QHBoxLayout(ImageDisplayWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        visualizationWidget = new QWidget(ImageDisplayWidget);
        visualizationWidget->setObjectName("visualizationWidget");
        gridLayout = new QGridLayout(visualizationWidget);
        gridLayout->setSpacing(4);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        transverseBackground = new QWidget(visualizationWidget);
        transverseBackground->setObjectName("transverseBackground");
        transverseBackground->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        horizontalLayout_5 = new QHBoxLayout(transverseBackground);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        transversePlate = new QWidget(transverseBackground);
        transversePlate->setObjectName("transversePlate");
        transversePlate->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 127);"));

        horizontalLayout_5->addWidget(transversePlate);

        transverseTools = new QWidget(transverseBackground);
        transverseTools->setObjectName("transverseTools");
        transverseTools->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));
        horizontalLayout_6 = new QHBoxLayout(transverseTools);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(-1, -1, 9, -1);
        transverseScrollBar = new QScrollBar(transverseTools);
        transverseScrollBar->setObjectName("transverseScrollBar");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(transverseScrollBar->sizePolicy().hasHeightForWidth());
        transverseScrollBar->setSizePolicy(sizePolicy);
        transverseScrollBar->setPageStep(6);
        transverseScrollBar->setSliderPosition(99);
        transverseScrollBar->setOrientation(Qt::Vertical);

        horizontalLayout_6->addWidget(transverseScrollBar);


        horizontalLayout_5->addWidget(transverseTools);

        horizontalLayout_5->setStretch(0, 14);
        horizontalLayout_5->setStretch(1, 3);

        gridLayout->addWidget(transverseBackground, 0, 0, 1, 1);

        sagittalBackground = new QWidget(visualizationWidget);
        sagittalBackground->setObjectName("sagittalBackground");
        sagittalBackground->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        horizontalLayout_2 = new QHBoxLayout(sagittalBackground);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        sagittalPlate = new QWidget(sagittalBackground);
        sagittalPlate->setObjectName("sagittalPlate");
        sagittalPlate->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 127);"));

        horizontalLayout_2->addWidget(sagittalPlate);

        sagittalTools = new QWidget(sagittalBackground);
        sagittalTools->setObjectName("sagittalTools");
        sagittalTools->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));
        horizontalLayout_7 = new QHBoxLayout(sagittalTools);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        sagittalScrollBar = new QScrollBar(sagittalTools);
        sagittalScrollBar->setObjectName("sagittalScrollBar");
        sizePolicy.setHeightForWidth(sagittalScrollBar->sizePolicy().hasHeightForWidth());
        sagittalScrollBar->setSizePolicy(sizePolicy);
        sagittalScrollBar->setPageStep(6);
        sagittalScrollBar->setSliderPosition(99);
        sagittalScrollBar->setOrientation(Qt::Vertical);

        horizontalLayout_7->addWidget(sagittalScrollBar);


        horizontalLayout_2->addWidget(sagittalTools);

        horizontalLayout_2->setStretch(0, 14);
        horizontalLayout_2->setStretch(1, 3);

        gridLayout->addWidget(sagittalBackground, 0, 1, 1, 1);

        coronalBackground = new QWidget(visualizationWidget);
        coronalBackground->setObjectName("coronalBackground");
        coronalBackground->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        horizontalLayout_3 = new QHBoxLayout(coronalBackground);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        coronalPlate = new QWidget(coronalBackground);
        coronalPlate->setObjectName("coronalPlate");
        coronalPlate->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 127);"));

        horizontalLayout_3->addWidget(coronalPlate);

        coronalTools = new QWidget(coronalBackground);
        coronalTools->setObjectName("coronalTools");
        coronalTools->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));
        horizontalLayout_8 = new QHBoxLayout(coronalTools);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        coronalScrollBar = new QScrollBar(coronalTools);
        coronalScrollBar->setObjectName("coronalScrollBar");
        sizePolicy.setHeightForWidth(coronalScrollBar->sizePolicy().hasHeightForWidth());
        coronalScrollBar->setSizePolicy(sizePolicy);
        coronalScrollBar->setPageStep(6);
        coronalScrollBar->setSliderPosition(99);
        coronalScrollBar->setOrientation(Qt::Vertical);

        horizontalLayout_8->addWidget(coronalScrollBar);


        horizontalLayout_3->addWidget(coronalTools);

        horizontalLayout_3->setStretch(0, 14);
        horizontalLayout_3->setStretch(1, 3);

        gridLayout->addWidget(coronalBackground, 1, 0, 1, 1);

        model3DBackground = new QWidget(visualizationWidget);
        model3DBackground->setObjectName("model3DBackground");
        model3DBackground->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        horizontalLayout_4 = new QHBoxLayout(model3DBackground);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        model3DPlate = new QWidget(model3DBackground);
        model3DPlate->setObjectName("model3DPlate");
        model3DPlate->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 127);"));

        horizontalLayout_4->addWidget(model3DPlate);

        model3DBody = new QWidget(model3DBackground);
        model3DBody->setObjectName("model3DBody");
        model3DBody->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));

        horizontalLayout_4->addWidget(model3DBody);

        model3DTools = new QWidget(model3DBackground);
        model3DTools->setObjectName("model3DTools");
        model3DTools->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));
        horizontalLayout_9 = new QHBoxLayout(model3DTools);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        model3DScrollBar = new QScrollBar(model3DTools);
        model3DScrollBar->setObjectName("model3DScrollBar");
        sizePolicy.setHeightForWidth(model3DScrollBar->sizePolicy().hasHeightForWidth());
        model3DScrollBar->setSizePolicy(sizePolicy);
        model3DScrollBar->setPageStep(6);
        model3DScrollBar->setSliderPosition(99);
        model3DScrollBar->setOrientation(Qt::Vertical);

        horizontalLayout_9->addWidget(model3DScrollBar);


        horizontalLayout_4->addWidget(model3DTools);

        horizontalLayout_4->setStretch(0, 14);
        horizontalLayout_4->setStretch(1, 2);
        horizontalLayout_4->setStretch(2, 3);

        gridLayout->addWidget(model3DBackground, 1, 1, 1, 1);


        horizontalLayout->addWidget(visualizationWidget);

        additionWidget = new QWidget(ImageDisplayWidget);
        additionWidget->setObjectName("additionWidget");
        verticalLayout = new QVBoxLayout(additionWidget);
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

        pushButton = new QPushButton(additionWidget);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(additionWidget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(pushButton_2);


        horizontalLayout->addWidget(additionWidget);

        stackedWidget = new QStackedWidget(ImageDisplayWidget);
        stackedWidget->setObjectName("stackedWidget");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(stackedWidget);

        horizontalLayout->setStretch(0, 80);
        horizontalLayout->setStretch(1, 3);
        horizontalLayout->setStretch(2, 25);

        retranslateUi(ImageDisplayWidget);

        stackedWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(ImageDisplayWidget);
    } // setupUi

    void retranslateUi(QWidget *ImageDisplayWidget)
    {
        ImageDisplayWidget->setWindowTitle(QCoreApplication::translate("ImageDisplayWidget", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("ImageDisplayWidget", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ImageDisplayWidget", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImageDisplayWidget: public Ui_ImageDisplayWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEDISPLAYWIDGET_H
