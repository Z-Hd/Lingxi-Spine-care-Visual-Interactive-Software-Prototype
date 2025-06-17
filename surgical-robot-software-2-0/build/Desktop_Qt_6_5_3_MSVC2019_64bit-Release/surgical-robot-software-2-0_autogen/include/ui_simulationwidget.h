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
#include <QtWidgets/QSlider>
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
    QWidget *angleDisplayWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *angleOfArm;
    QLabel *angleOfPatient;
    QWidget *opButtonWidget;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QWidget *directionPadPlaceholder;
    QWidget *widget_right;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *simulationDistanceText;
    QSpacerItem *horizontalSpacer_4;
    QLabel *simulationDistance;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *distanceDownButton;
    QSlider *distanceSlider;
    QPushButton *distanceUpButton;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *simulationAngleText;
    QSpacerItem *horizontalSpacer_6;
    QLabel *simulationAngle;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *angleDownButton;
    QSlider *angleSlider;
    QPushButton *angleUpButton;
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
        SimulationWidget->resize(1046, 564);
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
        QFont font;
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color:rgb(23, 23, 26);\n"
"color:rgb(220, 220, 220);\n"
"qproperty-alignment: AlignCenter;\n"
"font-size:25px;\n"
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
        angleDisplayWidget = new QWidget(widget_left);
        angleDisplayWidget->setObjectName("angleDisplayWidget");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(angleDisplayWidget->sizePolicy().hasHeightForWidth());
        angleDisplayWidget->setSizePolicy(sizePolicy);
        angleDisplayWidget->setMinimumSize(QSize(0, 0));
        angleDisplayWidget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_3 = new QHBoxLayout(angleDisplayWidget);
        horizontalLayout_3->setSpacing(1);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(-1, 15, -1, -1);
        angleOfArm = new QLabel(angleDisplayWidget);
        angleOfArm->setObjectName("angleOfArm");
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        angleOfArm->setFont(font1);
        angleOfArm->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);"));
        angleOfArm->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(angleOfArm);

        angleOfPatient = new QLabel(angleDisplayWidget);
        angleOfPatient->setObjectName("angleOfPatient");
        angleOfPatient->setFont(font1);
        angleOfPatient->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);"));
        angleOfPatient->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(angleOfPatient);


        verticalLayout_4->addWidget(angleDisplayWidget);

        opButtonWidget = new QWidget(widget_left);
        opButtonWidget->setObjectName("opButtonWidget");
        opButtonWidget->setMinimumSize(QSize(0, 0));
        opButtonWidget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_4 = new QHBoxLayout(opButtonWidget);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(2, 0, 2, 2);
        pushButton = new QPushButton(opButtonWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(37, 38, 43);\n"
"color: rgb(192, 192, 192);\n"
"font-size:12px;\n"
"border-radius: 5px;\n"
"min-width: 50px;\n"
"min-height: 30px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(70, 72, 81);\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(245, 245, 245);\n"
"}"));

        horizontalLayout_4->addWidget(pushButton);

        pushButton_2 = new QPushButton(opButtonWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(37, 38, 43);\n"
"color: rgb(192, 192, 192);\n"
"font-size:12px;\n"
"border-radius: 5px;\n"
"min-width: 50px;\n"
"min-height: 30px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(70, 72, 81);\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(245, 245, 245);\n"
"}"));

        horizontalLayout_4->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(opButtonWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(37, 38, 43);\n"
"color: rgb(192, 192, 192);\n"
"font-size:12px;\n"
"border-radius: 5px;\n"
"min-width: 50px;\n"
"min-height: 30px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(70, 72, 81);\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(245, 245, 245);\n"
"}"));

        horizontalLayout_4->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(opButtonWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(37, 38, 43);\n"
"color: rgb(192, 192, 192);\n"
"font-size:12px;\n"
"border-radius: 5px;\n"
"min-width: 50px;\n"
"min-height: 30px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(70, 72, 81);\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(245, 245, 245);\n"
"}"));

        horizontalLayout_4->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(opButtonWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(37, 38, 43);\n"
"color: rgb(192, 192, 192);\n"
"font-size:12px;\n"
"border-radius: 5px;\n"
"min-width: 50px;\n"
"min-height: 30px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(70, 72, 81);\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(245, 245, 245);\n"
"}"));

        horizontalLayout_4->addWidget(pushButton_5);


        verticalLayout_4->addWidget(opButtonWidget);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(1, 2);

        horizontalLayout_2->addWidget(widget_left);

        directionPadPlaceholder = new QWidget(paramWidget);
        directionPadPlaceholder->setObjectName("directionPadPlaceholder");

        horizontalLayout_2->addWidget(directionPadPlaceholder);

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
        widget_3->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_5 = new QHBoxLayout(widget_3);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(-1, -1, 20, -1);
        simulationDistanceText = new QLabel(widget_3);
        simulationDistanceText->setObjectName("simulationDistanceText");
        simulationDistanceText->setFont(font1);
        simulationDistanceText->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);"));
        simulationDistanceText->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(simulationDistanceText);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        simulationDistance = new QLabel(widget_3);
        simulationDistance->setObjectName("simulationDistance");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(simulationDistance->sizePolicy().hasHeightForWidth());
        simulationDistance->setSizePolicy(sizePolicy1);
        simulationDistance->setMinimumSize(QSize(100, 20));
        simulationDistance->setBaseSize(QSize(200, 20));
        simulationDistance->setFont(font1);
        simulationDistance->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);"));
        simulationDistance->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(simulationDistance);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        distanceDownButton = new QPushButton(widget_3);
        distanceDownButton->setObjectName("distanceDownButton");
        distanceDownButton->setFont(font);
        distanceDownButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(37, 38, 43);\n"
"color: rgb(192, 192, 192);\n"
"font-size:20px;\n"
"border-radius: 5px;\n"
"min-width: 25px;\n"
"min-height: 25px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(70, 72, 81);\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(245, 245, 245);\n"
"}"));

        horizontalLayout_5->addWidget(distanceDownButton);

        distanceSlider = new QSlider(widget_3);
        distanceSlider->setObjectName("distanceSlider");
        distanceSlider->setFocusPolicy(Qt::NoFocus);
        distanceSlider->setStyleSheet(QString::fromUtf8("/* === \346\273\221\351\201\223 === */\n"
"QSlider::groove:horizontal {\n"
"    border: 0px;\n"
"    height: 4px;\n"
"    background: #444444;\n"
"    border-radius: 2px;\n"
"}\n"
"\n"
"/* === \345\267\262\346\273\221\345\212\250\351\203\250\345\210\206\357\274\210\345\267\246\344\276\247\357\274\211 === */\n"
"QSlider::sub-page:horizontal {\n"
"    background: #AAAAAA;\n"
"    border-radius: 2px;\n"
"}\n"
"\n"
"/* === \346\234\252\346\273\221\345\212\250\351\203\250\345\210\206\357\274\210\345\217\263\344\276\247\357\274\211 === */\n"
"QSlider::add-page:horizontal {\n"
"    background: #444444;\n"
"    border-radius: 2px;\n"
"}\n"
"\n"
"/* === \351\273\230\350\256\244\346\273\221\345\235\227 === */\n"
"QSlider::handle:horizontal {\n"
"    background: rgb(23, 23, 26);\n"
"    border: 2px solid #AAAAAA;\n"
"    width: 14px;\n"
"    height: 14px;\n"
"    margin: -6px 0px;\n"
"    border-radius: 7px;\n"
"}\n"
"\n"
"/* === \346\202\254\345\201\234\346\273\221\345\235\227 === */\n"
"QSlider::handle:horizontal:hover"
                        " {\n"
"    border: 2px solid #FFFFFF;\n"
"}\n"
"\n"
"/* === \346\214\211\344\270\213\346\273\221\345\235\227 === */\n"
"QSlider::handle:horizontal:pressed {\n"
"    background: #AAAAAA;\n"
"    border: none;\n"
"}\n"
"\n"
"/* === \347\246\201\347\224\250\347\212\266\346\200\201 === */\n"
"QSlider:disabled {\n"
"    background: #333333;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"    border: 2px solid #666666;\n"
"    background: transparent;\n"
"}\n"
""));
        distanceSlider->setMaximum(500);
        distanceSlider->setPageStep(7);
        distanceSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(distanceSlider);

        distanceUpButton = new QPushButton(widget_3);
        distanceUpButton->setObjectName("distanceUpButton");
        distanceUpButton->setFont(font);
        distanceUpButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(37, 38, 43);\n"
"color: rgb(192, 192, 192);\n"
"font-size:20px;\n"
"border-radius: 5px;\n"
"min-width: 25px;\n"
"min-height: 25px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(70, 72, 81);\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(245, 245, 245);\n"
"}"));

        horizontalLayout_5->addWidget(distanceUpButton);


        verticalLayout_5->addWidget(widget_3);

        widget_4 = new QWidget(widget_right);
        widget_4->setObjectName("widget_4");
        widget_4->setMinimumSize(QSize(0, 0));
        widget_4->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_6 = new QHBoxLayout(widget_4);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(-1, -1, 20, -1);
        simulationAngleText = new QLabel(widget_4);
        simulationAngleText->setObjectName("simulationAngleText");
        simulationAngleText->setFont(font1);
        simulationAngleText->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);"));
        simulationAngleText->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(simulationAngleText);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        simulationAngle = new QLabel(widget_4);
        simulationAngle->setObjectName("simulationAngle");
        sizePolicy1.setHeightForWidth(simulationAngle->sizePolicy().hasHeightForWidth());
        simulationAngle->setSizePolicy(sizePolicy1);
        simulationAngle->setMinimumSize(QSize(100, 20));
        simulationAngle->setBaseSize(QSize(500, 20));
        simulationAngle->setFont(font1);
        simulationAngle->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);"));
        simulationAngle->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(simulationAngle);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        angleDownButton = new QPushButton(widget_4);
        angleDownButton->setObjectName("angleDownButton");
        angleDownButton->setFont(font);
        angleDownButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(37, 38, 43);\n"
"color: rgb(192, 192, 192);\n"
"font-size:20px;\n"
"border-radius: 5px;\n"
"min-width: 25px;\n"
"min-height: 25px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(70, 72, 81);\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(245, 245, 245);\n"
"}"));

        horizontalLayout_6->addWidget(angleDownButton);

        angleSlider = new QSlider(widget_4);
        angleSlider->setObjectName("angleSlider");
        angleSlider->setFocusPolicy(Qt::NoFocus);
        angleSlider->setStyleSheet(QString::fromUtf8("/* === \346\273\221\351\201\223 === */\n"
"QSlider::groove:horizontal {\n"
"    border: 0px;\n"
"    height: 4px;\n"
"    background: #444444;\n"
"    border-radius: 2px;\n"
"}\n"
"\n"
"/* === \345\267\262\346\273\221\345\212\250\351\203\250\345\210\206\357\274\210\345\267\246\344\276\247\357\274\211 === */\n"
"QSlider::sub-page:horizontal {\n"
"    background: #AAAAAA;\n"
"    border-radius: 2px;\n"
"}\n"
"\n"
"/* === \346\234\252\346\273\221\345\212\250\351\203\250\345\210\206\357\274\210\345\217\263\344\276\247\357\274\211 === */\n"
"QSlider::add-page:horizontal {\n"
"    background: #444444;\n"
"    border-radius: 2px;\n"
"}\n"
"\n"
"/* === \351\273\230\350\256\244\346\273\221\345\235\227 === */\n"
"QSlider::handle:horizontal {\n"
"    background: rgb(23, 23, 26);\n"
"    border: 2px solid #AAAAAA;\n"
"    width: 14px;\n"
"    height: 14px;\n"
"    margin: -6px 0px;\n"
"    border-radius: 7px;\n"
"}\n"
"\n"
"/* === \346\202\254\345\201\234\346\273\221\345\235\227 === */\n"
"QSlider::handle:horizontal:hover"
                        " {\n"
"    border: 2px solid #FFFFFF;\n"
"}\n"
"\n"
"/* === \346\214\211\344\270\213\346\273\221\345\235\227 === */\n"
"QSlider::handle:horizontal:pressed {\n"
"    background: #AAAAAA;\n"
"    border: none;\n"
"}\n"
"\n"
"/* === \347\246\201\347\224\250\347\212\266\346\200\201 === */\n"
"QSlider:disabled {\n"
"    background: #333333;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"    border: 2px solid #666666;\n"
"    background: transparent;\n"
"}\n"
""));
        angleSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(angleSlider);

        angleUpButton = new QPushButton(widget_4);
        angleUpButton->setObjectName("angleUpButton");
        angleUpButton->setFont(font);
        angleUpButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(37, 38, 43);\n"
"color: rgb(192, 192, 192);\n"
"font-size:20px;\n"
"border-radius: 5px;\n"
"min-width: 25px;\n"
"min-height: 25px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(70, 72, 81);\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(245, 245, 245);\n"
"}"));

        horizontalLayout_6->addWidget(angleUpButton);


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
"border-image:url(:/resource/image/simulation.png);\n"
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
        sizePolicy1.setHeightForWidth(simulateButton->sizePolicy().hasHeightForWidth());
        simulateButton->setSizePolicy(sizePolicy1);
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
        angleOfArm->setText(QCoreApplication::translate("SimulationWidget", "\346\234\272\346\242\260\350\207\202\350\247\222\345\272\246\357\274\2320\302\260", nullptr));
        angleOfPatient->setText(QCoreApplication::translate("SimulationWidget", "\346\202\243\350\200\205\350\247\222\345\272\246\357\274\2320\302\260", nullptr));
        pushButton->setText(QCoreApplication::translate("SimulationWidget", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SimulationWidget", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("SimulationWidget", "\345\205\211\345\255\246\350\267\237\350\270\252\350\247\206\345\233\276", nullptr));
        pushButton_4->setText(QCoreApplication::translate("SimulationWidget", "\351\241\266\350\247\206\345\233\276", nullptr));
        pushButton_5->setText(QCoreApplication::translate("SimulationWidget", "\344\276\247\350\247\206\345\233\276", nullptr));
        simulationDistanceText->setText(QCoreApplication::translate("SimulationWidget", "\346\250\241\346\213\237\350\267\235\347\246\273", nullptr));
        simulationDistance->setText(QString());
        distanceDownButton->setText(QCoreApplication::translate("SimulationWidget", "-", nullptr));
        distanceUpButton->setText(QCoreApplication::translate("SimulationWidget", "+", nullptr));
        simulationAngleText->setText(QCoreApplication::translate("SimulationWidget", "\346\250\241\346\213\237\350\247\222\345\272\246", nullptr));
        simulationAngle->setText(QString());
        angleDownButton->setText(QCoreApplication::translate("SimulationWidget", "-", nullptr));
        angleUpButton->setText(QCoreApplication::translate("SimulationWidget", "+", nullptr));
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
