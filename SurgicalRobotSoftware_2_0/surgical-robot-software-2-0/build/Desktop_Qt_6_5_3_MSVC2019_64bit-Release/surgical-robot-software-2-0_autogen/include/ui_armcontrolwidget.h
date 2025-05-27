/********************************************************************************
** Form generated from reading UI file 'armcontrolwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARMCONTROLWIDGET_H
#define UI_ARMCONTROLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ArmControlWidget
{
public:
    QGridLayout *gridLayout;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *labelWidget;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QWidget *operationWidget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_left;
    QWidget *widget_mid;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_4;
    QWidget *widget_5;
    QWidget *widget_right;
    QWidget *jumpButtonWidget;
    QVBoxLayout *verticalLayout;
    QWidget *buttonInnerWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *backButton;

    void setupUi(QWidget *ArmControlWidget)
    {
        if (ArmControlWidget->objectName().isEmpty())
            ArmControlWidget->setObjectName("ArmControlWidget");
        ArmControlWidget->resize(1034, 575);
        gridLayout = new QGridLayout(ArmControlWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        centralWidget = new QWidget(ArmControlWidget);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(13);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(120, 0, 120, 0);
        labelWidget = new QWidget(centralWidget);
        labelWidget->setObjectName("labelWidget");
        labelWidget->setStyleSheet(QString::fromUtf8("background-color:rgb(95, 95, 95)"));
        gridLayout_2 = new QGridLayout(labelWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 2);
        label = new QLabel(labelWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 0, 0);\n"
"color:rgb(220, 220, 220);\n"
"qproperty-alignment: AlignCenter;\n"
"font-size:20px;\n"
"\n"
""));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);


        verticalLayout_2->addWidget(labelWidget);

        operationWidget = new QWidget(centralWidget);
        operationWidget->setObjectName("operationWidget");
        operationWidget->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 0, 0);"));
        horizontalLayout_2 = new QHBoxLayout(operationWidget);
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(2, 2, 2, 2);
        widget_left = new QWidget(operationWidget);
        widget_left->setObjectName("widget_left");

        horizontalLayout_2->addWidget(widget_left);

        widget_mid = new QWidget(operationWidget);
        widget_mid->setObjectName("widget_mid");
        widget_mid->setStyleSheet(QString::fromUtf8("background-color:rgb(95, 95, 95)"));
        verticalLayout_3 = new QVBoxLayout(widget_mid);
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(2, 2, 2, 2);
        widget_4 = new QWidget(widget_mid);
        widget_4->setObjectName("widget_4");
        widget_4->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(widget_4);

        widget_5 = new QWidget(widget_mid);
        widget_5->setObjectName("widget_5");
        widget_5->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(widget_5);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 10);

        horizontalLayout_2->addWidget(widget_mid);

        widget_right = new QWidget(operationWidget);
        widget_right->setObjectName("widget_right");

        horizontalLayout_2->addWidget(widget_right);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 5);
        horizontalLayout_2->setStretch(2, 3);

        verticalLayout_2->addWidget(operationWidget);

        jumpButtonWidget = new QWidget(centralWidget);
        jumpButtonWidget->setObjectName("jumpButtonWidget");
        jumpButtonWidget->setStyleSheet(QString::fromUtf8("background-color:rgb(95, 95, 95)"));
        verticalLayout = new QVBoxLayout(jumpButtonWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 2, 0, 0);
        buttonInnerWidget = new QWidget(jumpButtonWidget);
        buttonInnerWidget->setObjectName("buttonInnerWidget");
        buttonInnerWidget->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 0, 0);"));
        horizontalLayout = new QHBoxLayout(buttonInnerWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 6);
        horizontalSpacer = new QSpacerItem(1500, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        backButton = new QPushButton(buttonInnerWidget);
        backButton->setObjectName("backButton");
        backButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(37, 38, 43);\n"
"color: rgb(192, 192, 192);\n"
"font-size:15px;\n"
"border-radius: 5px;\n"
"min-width: 100px;\n"
"min-height: 40px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(70, 72, 81);\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(245, 245, 245);\n"
"}"));

        horizontalLayout->addWidget(backButton);


        verticalLayout->addWidget(buttonInnerWidget);


        verticalLayout_2->addWidget(jumpButtonWidget);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 13);
        verticalLayout_2->setStretch(2, 2);

        gridLayout->addWidget(centralWidget, 0, 0, 1, 1);


        retranslateUi(ArmControlWidget);

        QMetaObject::connectSlotsByName(ArmControlWidget);
    } // setupUi

    void retranslateUi(QWidget *ArmControlWidget)
    {
        ArmControlWidget->setWindowTitle(QCoreApplication::translate("ArmControlWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("ArmControlWidget", "\346\234\272\346\242\260\350\207\202\346\216\247\345\210\266", nullptr));
        backButton->setText(QCoreApplication::translate("ArmControlWidget", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ArmControlWidget: public Ui_ArmControlWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARMCONTROLWIDGET_H
