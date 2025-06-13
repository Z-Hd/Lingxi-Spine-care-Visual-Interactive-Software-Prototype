/********************************************************************************
** Form generated from reading UI file 'averagewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AVERAGEWIDGET_H
#define UI_AVERAGEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AverageWidget
{
public:
    QGridLayout *gridLayout;
    QWidget *transverseBackground;
    QHBoxLayout *horizontalLayout_5;
    QWidget *transversePlate;
    QWidget *transverseTools;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *enlargeButton;
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
    QPushButton *enlarge3DModelButton;

    void setupUi(QWidget *AverageWidget)
    {
        if (AverageWidget->objectName().isEmpty())
            AverageWidget->setObjectName("AverageWidget");
        AverageWidget->resize(1078, 1044);
        AverageWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 29, 33);"));
        gridLayout = new QGridLayout(AverageWidget);
        gridLayout->setSpacing(4);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        transverseBackground = new QWidget(AverageWidget);
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
        horizontalLayout_6->setContentsMargins(-1, 0, 9, 0);
        enlargeButton = new QPushButton(transverseTools);
        enlargeButton->setObjectName("enlargeButton");

        horizontalLayout_6->addWidget(enlargeButton);

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

        sagittalBackground = new QWidget(AverageWidget);
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
        horizontalLayout_7->setContentsMargins(-1, 0, -1, 0);
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

        coronalBackground = new QWidget(AverageWidget);
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
        horizontalLayout_8->setContentsMargins(-1, 0, -1, 0);
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

        model3DBackground = new QWidget(AverageWidget);
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
        horizontalLayout_9->setContentsMargins(-1, 0, -1, 0);
        enlarge3DModelButton = new QPushButton(model3DTools);
        enlarge3DModelButton->setObjectName("enlarge3DModelButton");

        horizontalLayout_9->addWidget(enlarge3DModelButton);


        horizontalLayout_4->addWidget(model3DTools);

        horizontalLayout_4->setStretch(0, 28);
        horizontalLayout_4->setStretch(1, 4);
        horizontalLayout_4->setStretch(2, 5);

        gridLayout->addWidget(model3DBackground, 1, 1, 1, 1);


        retranslateUi(AverageWidget);

        QMetaObject::connectSlotsByName(AverageWidget);
    } // setupUi

    void retranslateUi(QWidget *AverageWidget)
    {
        AverageWidget->setWindowTitle(QCoreApplication::translate("AverageWidget", "Form", nullptr));
        enlargeButton->setText(QCoreApplication::translate("AverageWidget", "\346\211\251\345\244\247", nullptr));
        enlarge3DModelButton->setText(QCoreApplication::translate("AverageWidget", "\346\211\251\345\244\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AverageWidget: public Ui_AverageWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AVERAGEWIDGET_H
