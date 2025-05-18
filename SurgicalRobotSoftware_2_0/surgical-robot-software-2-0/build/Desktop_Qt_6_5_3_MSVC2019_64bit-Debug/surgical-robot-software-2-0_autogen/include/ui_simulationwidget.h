/********************************************************************************
** Form generated from reading UI file 'simulationwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMULATIONWIDGET_H
#define UI_SIMULATIONWIDGET_H

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

class Ui_SimulationWidget
{
public:
    QGridLayout *gridLayout;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *labelWidget;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QWidget *operationWidget;
    QVBoxLayout *verticalLayout_3;
    QWidget *paramWidget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_left;
    QVBoxLayout *verticalLayout_4;
    QWidget *opButtonWidget;
    QWidget *angleDisplayWidget;
    QWidget *widget_mid;
    QWidget *widget_right;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_3;
    QLabel *label_2;
    QWidget *widget_4;
    QWidget *displayWidget;
    QGridLayout *gridLayout_3;
    QWidget *widget;
    QWidget *jumpButtonWidget;
    QVBoxLayout *verticalLayout;
    QWidget *buttonInnerWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *simulateButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *confirmButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *backButton;

    void setupUi(QWidget *SimulationWidget)
    {
        if (SimulationWidget->objectName().isEmpty())
            SimulationWidget->setObjectName("SimulationWidget");
        SimulationWidget->resize(1236, 770);
        SimulationWidget->setStyleSheet(QString::fromUtf8("background-color:rgb(23, 23, 26);"));
        gridLayout = new QGridLayout(SimulationWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        centralWidget = new QWidget(SimulationWidget);
        centralWidget->setObjectName("centralWidget");
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(13);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(150, 0, 150, 0);
        labelWidget = new QWidget(centralWidget);
        labelWidget->setObjectName("labelWidget");
        labelWidget->setStyleSheet(QString::fromUtf8("background-color:rgb(95, 95, 95)"));
        gridLayout_2 = new QGridLayout(labelWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 2);
        label = new QLabel(labelWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("background-color:rgb(23, 23, 26);\n"
"color:rgb(220, 220, 220);\n"
"qproperty-alignment: AlignCenter;\n"
"font-size:20px;\n"
"\n"
""));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);


        verticalLayout_2->addWidget(labelWidget);

        operationWidget = new QWidget(centralWidget);
        operationWidget->setObjectName("operationWidget");
        operationWidget->setStyleSheet(QString::fromUtf8("background-color:rgb(95, 95, 95);"));
        verticalLayout_3 = new QVBoxLayout(operationWidget);
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(2, 2, 2, 2);
        paramWidget = new QWidget(operationWidget);
        paramWidget->setObjectName("paramWidget");
        paramWidget->setStyleSheet(QString::fromUtf8("background-color:rgb(23, 23, 26)"));
        horizontalLayout_2 = new QHBoxLayout(paramWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_left = new QWidget(paramWidget);
        widget_left->setObjectName("widget_left");
        verticalLayout_4 = new QVBoxLayout(widget_left);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        opButtonWidget = new QWidget(widget_left);
        opButtonWidget->setObjectName("opButtonWidget");
        opButtonWidget->setMinimumSize(QSize(0, 0));
        opButtonWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(opButtonWidget);

        angleDisplayWidget = new QWidget(widget_left);
        angleDisplayWidget->setObjectName("angleDisplayWidget");
        angleDisplayWidget->setMinimumSize(QSize(0, 0));
        angleDisplayWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 255);"));

        verticalLayout_4->addWidget(angleDisplayWidget);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(1, 2);

        horizontalLayout_2->addWidget(widget_left);

        widget_mid = new QWidget(paramWidget);
        widget_mid->setObjectName("widget_mid");

        horizontalLayout_2->addWidget(widget_mid);

        widget_right = new QWidget(paramWidget);
        widget_right->setObjectName("widget_right");
        verticalLayout_5 = new QVBoxLayout(widget_right);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(widget_right);
        widget_3->setObjectName("widget_3");
        widget_3->setMinimumSize(QSize(0, 0));
        widget_3->setSizeIncrement(QSize(0, 0));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 255);"));
        label_2 = new QLabel(widget_3);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 10, 53, 15));

        verticalLayout_5->addWidget(widget_3);

        widget_4 = new QWidget(widget_right);
        widget_4->setObjectName("widget_4");
        widget_4->setMinimumSize(QSize(0, 0));
        widget_4->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 127);"));

        verticalLayout_5->addWidget(widget_4);


        horizontalLayout_2->addWidget(widget_right);

        horizontalLayout_2->setStretch(0, 5);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 5);

        verticalLayout_3->addWidget(paramWidget);

        displayWidget = new QWidget(operationWidget);
        displayWidget->setObjectName("displayWidget");
        displayWidget->setStyleSheet(QString::fromUtf8("background-color:rgb(23, 23, 26);"));
        gridLayout_3 = new QGridLayout(displayWidget);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(5, 5, 5, 5);
        widget = new QWidget(displayWidget);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget\n"
"{\n"
"border-image:url(:/image/simulation.png);\n"
"background-position: center; \n"
"background-repeat: no-repeat;\n"
"}"));

        gridLayout_3->addWidget(widget, 0, 0, 1, 1);


        verticalLayout_3->addWidget(displayWidget);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 8);

        verticalLayout_2->addWidget(operationWidget);

        jumpButtonWidget = new QWidget(centralWidget);
        jumpButtonWidget->setObjectName("jumpButtonWidget");
        jumpButtonWidget->setStyleSheet(QString::fromUtf8("background-color:rgb(95, 95, 95)"));
        verticalLayout = new QVBoxLayout(jumpButtonWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 2, 0, 0);
        buttonInnerWidget = new QWidget(jumpButtonWidget);
        buttonInnerWidget->setObjectName("buttonInnerWidget");
        buttonInnerWidget->setStyleSheet(QString::fromUtf8("background-color:rgb(23, 23, 26);"));
        horizontalLayout = new QHBoxLayout(buttonInnerWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, 0, 5, -1);
        horizontalSpacer = new QSpacerItem(1500, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        simulateButton = new QPushButton(buttonInnerWidget);
        simulateButton->setObjectName("simulateButton");
        simulateButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout->addWidget(simulateButton);

        horizontalSpacer_2 = new QSpacerItem(400, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        confirmButton = new QPushButton(buttonInnerWidget);
        confirmButton->setObjectName("confirmButton");
        confirmButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout->addWidget(confirmButton);

        horizontalSpacer_3 = new QSpacerItem(400, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

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


        retranslateUi(SimulationWidget);

        QMetaObject::connectSlotsByName(SimulationWidget);
    } // setupUi

    void retranslateUi(QWidget *SimulationWidget)
    {
        SimulationWidget->setWindowTitle(QCoreApplication::translate("SimulationWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("SimulationWidget", "\346\250\241  \346\213\237", nullptr));
        label_2->setText(QCoreApplication::translate("SimulationWidget", "TextLabel", nullptr));
        simulateButton->setText(QCoreApplication::translate("SimulationWidget", "\346\250\241\346\213\237", nullptr));
        confirmButton->setText(QCoreApplication::translate("SimulationWidget", "\347\241\256\350\256\244", nullptr));
        backButton->setText(QCoreApplication::translate("SimulationWidget", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SimulationWidget: public Ui_SimulationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMULATIONWIDGET_H
