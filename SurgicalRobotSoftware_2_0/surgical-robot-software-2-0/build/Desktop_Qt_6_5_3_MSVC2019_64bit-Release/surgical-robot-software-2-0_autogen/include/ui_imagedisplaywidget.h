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
    QStackedWidget *visualizationWidget;
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
    QSpacerItem *verticalSpacer_12;
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
        visualizationWidget = new QStackedWidget(ImageDisplayWidget);
        visualizationWidget->setObjectName("visualizationWidget");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(visualizationWidget->sizePolicy().hasHeightForWidth());
        visualizationWidget->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(visualizationWidget);

        additionWidget = new QWidget(ImageDisplayWidget);
        additionWidget->setObjectName("additionWidget");
        additionWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 29, 33);"));
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

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_12);

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
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 17, 18);"));

        horizontalLayout->addWidget(stackedWidget);

        horizontalLayout->setStretch(0, 72);
        horizontalLayout->setStretch(1, 3);
        horizontalLayout->setStretch(2, 32);

        retranslateUi(ImageDisplayWidget);

        visualizationWidget->setCurrentIndex(-1);
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
