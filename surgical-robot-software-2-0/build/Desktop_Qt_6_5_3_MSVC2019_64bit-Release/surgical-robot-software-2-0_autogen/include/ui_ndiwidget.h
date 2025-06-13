/********************************************************************************
** Form generated from reading UI file 'ndiwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NDIWIDGET_H
#define UI_NDIWIDGET_H

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

class Ui_NDIWidget
{
public:
    QVBoxLayout *verticalLayout_4;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *labelWidget;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QWidget *operationWidget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_left;
    QVBoxLayout *verticalLayout_3;
    QWidget *frontViewWidget;
    QLabel *label_2;
    QWidget *topViewWidget;
    QLabel *label_3;
    QWidget *widget_right;
    QVBoxLayout *verticalLayout_5;
    QWidget *leftViewWidget;
    QLabel *label_4;
    QWidget *jumpButtonWidget;
    QHBoxLayout *horizontalLayout_3;
    QWidget *buttonInnerWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *switchButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *connectButton;
    QPushButton *disconnectButton;
    QPushButton *restartButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *backButton;

    void setupUi(QWidget *NDIWidget)
    {
        if (NDIWidget->objectName().isEmpty())
            NDIWidget->setObjectName("NDIWidget");
        NDIWidget->resize(1073, 647);
        NDIWidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_4 = new QVBoxLayout(NDIWidget);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        centralWidget = new QWidget(NDIWidget);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 17, 18);"));
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
        label->setStyleSheet(QString::fromUtf8("background-color:rgb(17, 17, 18);\n"
"color:rgb(220, 220, 220);\n"
"qproperty-alignment: AlignCenter;\n"
"font-size:20px;\n"
"\n"
""));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);


        verticalLayout_2->addWidget(labelWidget);

        operationWidget = new QWidget(centralWidget);
        operationWidget->setObjectName("operationWidget");
        operationWidget->setStyleSheet(QString::fromUtf8("background-color:rgb(17, 17, 18);"));
        horizontalLayout_2 = new QHBoxLayout(operationWidget);
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_left = new QWidget(operationWidget);
        widget_left->setObjectName("widget_left");
        widget_left->setStyleSheet(QString::fromUtf8("background-color: rgb(95, 95, 95);"));
        verticalLayout_3 = new QVBoxLayout(widget_left);
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(2, 2, 2, 2);
        frontViewWidget = new QWidget(widget_left);
        frontViewWidget->setObjectName("frontViewWidget");
        frontViewWidget->setStyleSheet(QString::fromUtf8("QWidget#frontViewWidget\n"
"{\n"
"border-image:url(:/resource/image/zhengshitu.png);\n"
"background-position: center; \n"
"background-repeat: no-repeat;\n"
"background-color: rgb(17, 17, 18);\n"
"}"));
        label_2 = new QLabel(frontViewWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 10, 53, 15));
        label_2->setStyleSheet(QString::fromUtf8("background-color:rgb(17, 17, 18);\n"
"color:rgb(220, 220, 220);\n"
"qproperty-alignment: AlignCenter;\n"
"font-size:15px;"));

        verticalLayout_3->addWidget(frontViewWidget);

        topViewWidget = new QWidget(widget_left);
        topViewWidget->setObjectName("topViewWidget");
        topViewWidget->setStyleSheet(QString::fromUtf8("QWidget#topViewWidget\n"
"{\n"
"border-image:url(:/resource/image/ceshitu.png);\n"
"background-position: center; \n"
"background-repeat: no-repeat;\n"
"background-color: rgb(17, 17, 18);\n"
"}"));
        label_3 = new QLabel(topViewWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 10, 53, 15));
        label_3->setStyleSheet(QString::fromUtf8("background-color:rgb(17, 17, 18);\n"
"color:rgb(220, 220, 220);\n"
"qproperty-alignment: AlignCenter;\n"
"font-size:15px;"));

        verticalLayout_3->addWidget(topViewWidget);


        horizontalLayout_2->addWidget(widget_left);

        widget_right = new QWidget(operationWidget);
        widget_right->setObjectName("widget_right");
        widget_right->setStyleSheet(QString::fromUtf8("background-color: rgb(95, 95, 95);"));
        verticalLayout_5 = new QVBoxLayout(widget_right);
        verticalLayout_5->setSpacing(2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(2, 2, 2, 2);
        leftViewWidget = new QWidget(widget_right);
        leftViewWidget->setObjectName("leftViewWidget");
        leftViewWidget->setStyleSheet(QString::fromUtf8("QWidget#leftViewWidget\n"
"{\n"
"border-image:url(:/resource/image/zuoshitu.png);\n"
"background-position: center; \n"
"background-repeat: no-repeat;\n"
"background-color: rgb(17, 17, 18);\n"
"}"));
        label_4 = new QLabel(leftViewWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 10, 53, 15));
        label_4->setStyleSheet(QString::fromUtf8("background-color:rgb(17, 17, 18);\n"
"color:rgb(220, 220, 220);\n"
"qproperty-alignment: AlignCenter;\n"
"font-size:15px;"));

        verticalLayout_5->addWidget(leftViewWidget);


        horizontalLayout_2->addWidget(widget_right);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);

        verticalLayout_2->addWidget(operationWidget);

        jumpButtonWidget = new QWidget(centralWidget);
        jumpButtonWidget->setObjectName("jumpButtonWidget");
        jumpButtonWidget->setStyleSheet(QString::fromUtf8("background-color:rgb(95, 95, 95)"));
        horizontalLayout_3 = new QHBoxLayout(jumpButtonWidget);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 2, 0, 0);
        buttonInnerWidget = new QWidget(jumpButtonWidget);
        buttonInnerWidget->setObjectName("buttonInnerWidget");
        buttonInnerWidget->setStyleSheet(QString::fromUtf8("background-color:rgb(17, 17, 18);"));
        horizontalLayout = new QHBoxLayout(buttonInnerWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, -1);
        switchButton = new QPushButton(buttonInnerWidget);
        switchButton->setObjectName("switchButton");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(switchButton->sizePolicy().hasHeightForWidth());
        switchButton->setSizePolicy(sizePolicy);
        switchButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout->addWidget(switchButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        connectButton = new QPushButton(buttonInnerWidget);
        connectButton->setObjectName("connectButton");
        sizePolicy.setHeightForWidth(connectButton->sizePolicy().hasHeightForWidth());
        connectButton->setSizePolicy(sizePolicy);
        connectButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout->addWidget(connectButton);

        disconnectButton = new QPushButton(buttonInnerWidget);
        disconnectButton->setObjectName("disconnectButton");
        sizePolicy.setHeightForWidth(disconnectButton->sizePolicy().hasHeightForWidth());
        disconnectButton->setSizePolicy(sizePolicy);
        disconnectButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout->addWidget(disconnectButton);

        restartButton = new QPushButton(buttonInnerWidget);
        restartButton->setObjectName("restartButton");
        sizePolicy.setHeightForWidth(restartButton->sizePolicy().hasHeightForWidth());
        restartButton->setSizePolicy(sizePolicy);
        restartButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout->addWidget(restartButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        backButton = new QPushButton(buttonInnerWidget);
        backButton->setObjectName("backButton");
        sizePolicy.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy);
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


        horizontalLayout_3->addWidget(buttonInnerWidget);


        verticalLayout_2->addWidget(jumpButtonWidget);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 13);
        verticalLayout_2->setStretch(2, 2);

        verticalLayout_4->addWidget(centralWidget);


        retranslateUi(NDIWidget);

        QMetaObject::connectSlotsByName(NDIWidget);
    } // setupUi

    void retranslateUi(QWidget *NDIWidget)
    {
        NDIWidget->setWindowTitle(QCoreApplication::translate("NDIWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("NDIWidget", "\345\205\211\345\255\246\350\267\237\350\270\252\347\263\273\347\273\237", nullptr));
        label_2->setText(QCoreApplication::translate("NDIWidget", "\346\255\243\350\247\206\345\233\276", nullptr));
        label_3->setText(QCoreApplication::translate("NDIWidget", "\344\277\257\350\247\206\345\233\276", nullptr));
        label_4->setText(QCoreApplication::translate("NDIWidget", "\345\267\246\350\247\206\345\233\276", nullptr));
        switchButton->setText(QCoreApplication::translate("NDIWidget", "\345\210\207\346\215\242", nullptr));
        connectButton->setText(QCoreApplication::translate("NDIWidget", "\350\277\236\346\216\245", nullptr));
        disconnectButton->setText(QCoreApplication::translate("NDIWidget", "\346\226\255\345\274\200", nullptr));
        restartButton->setText(QCoreApplication::translate("NDIWidget", "\351\207\215\345\220\257", nullptr));
        backButton->setText(QCoreApplication::translate("NDIWidget", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NDIWidget: public Ui_NDIWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NDIWIDGET_H
