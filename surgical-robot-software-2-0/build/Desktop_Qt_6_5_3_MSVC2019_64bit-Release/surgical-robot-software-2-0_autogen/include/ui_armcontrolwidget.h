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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
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
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labelSpeedText;
    QSlider *sliderSpeed;
    QLabel *labelSpeedValue;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *labelFeature;
    QRadioButton *radioBase;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_8;
    QGridLayout *gridLayout_4;
    QLabel *label_14;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_21;
    QLabel *label_5;
    QLabel *label_9;
    QPushButton *pushButton_19;
    QPushButton *pushButton_25;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_5;
    QLabel *label_7;
    QPushButton *pushButton_4;
    QLabel *label_8;
    QPushButton *pushButton_20;
    QPushButton *pushButton_22;
    QLabel *label_11;
    QLabel *label_3;
    QPushButton *pushButton_6;
    QLabel *label_13;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLabel *label_12;
    QLabel *label_6;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_23;
    QPushButton *pushButton_5;
    QLabel *label_10;
    QPushButton *pushButton_24;
    QPushButton *pushButton_26;
    QPushButton *pushButton_18;
    QWidget *widget_9;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_30;
    QLabel *label_18;
    QLabel *label_25;
    QPushButton *pushButton_35;
    QLineEdit *lineEdit_11;
    QPushButton *pushButton_29;
    QLineEdit *lineEdit_12;
    QLabel *label_21;
    QPushButton *pushButton_38;
    QLabel *label_24;
    QPushButton *pushButton_27;
    QLabel *label_26;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_23;
    QLineEdit *lineEdit_8;
    QPushButton *pushButton_33;
    QPushButton *pushButton_36;
    QPushButton *pushButton_28;
    QPushButton *pushButton_32;
    QPushButton *pushButton_31;
    QLabel *label_22;
    QLineEdit *lineEdit_7;
    QLabel *label_20;
    QPushButton *pushButton_37;
    QLabel *label_19;
    QLabel *label_15;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QPushButton *pushButton_34;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_mid;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_mid_up;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_3;
    QWidget *directionPadPlaceholder;
    QWidget *widget_mid_down;
    QWidget *widget_right;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *comboBoxPositionType;
    QPushButton *btnArmPosExecute;
    QPushButton *btnArmPosMinus;
    QPushButton *btnArmPosPlus;
    QWidget *widget_4;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_14;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_13;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QSpacerItem *verticalSpacer;
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
        ArmControlWidget->resize(1374, 695);
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
        verticalLayout_5 = new QVBoxLayout(widget_left);
        verticalLayout_5->setObjectName("verticalLayout_5");
        widget_6 = new QWidget(widget_left);
        widget_6->setObjectName("widget_6");
        horizontalLayout_7 = new QHBoxLayout(widget_6);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(-1, 0, -1, 0);
        labelSpeedText = new QLabel(widget_6);
        labelSpeedText->setObjectName("labelSpeedText");
        QFont font;
        font.setPointSize(12);
        labelSpeedText->setFont(font);
        labelSpeedText->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);"));

        horizontalLayout_7->addWidget(labelSpeedText);

        sliderSpeed = new QSlider(widget_6);
        sliderSpeed->setObjectName("sliderSpeed");
        sliderSpeed->setStyleSheet(QString::fromUtf8("/* === \346\273\221\351\201\223 === */\n"
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
        sliderSpeed->setMaximum(100);
        sliderSpeed->setPageStep(5);
        sliderSpeed->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(sliderSpeed);

        labelSpeedValue = new QLabel(widget_6);
        labelSpeedValue->setObjectName("labelSpeedValue");
        labelSpeedValue->setFont(font);
        labelSpeedValue->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);"));

        horizontalLayout_7->addWidget(labelSpeedValue);


        verticalLayout_5->addWidget(widget_6);

        widget_7 = new QWidget(widget_left);
        widget_7->setObjectName("widget_7");
        horizontalLayout_8 = new QHBoxLayout(widget_7);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(-1, 0, -1, 0);
        labelFeature = new QLabel(widget_7);
        labelFeature->setObjectName("labelFeature");
        labelFeature->setFont(font);
        labelFeature->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);"));

        horizontalLayout_8->addWidget(labelFeature);

        radioBase = new QRadioButton(widget_7);
        radioBase->setObjectName("radioBase");
        radioBase->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"    color: rgb(154, 152, 151);\n"
"    font: 10pt;\n"
"    spacing: 8px;\n"
"}\n"
"\n"
"\n"
""));
        radioBase->setChecked(true);

        horizontalLayout_8->addWidget(radioBase);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);


        verticalLayout_5->addWidget(widget_7);

        widget_8 = new QWidget(widget_left);
        widget_8->setObjectName("widget_8");
        widget_8->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    background-color: #2e2e2e;\n"
"    color: rgb(154, 152, 151);;\n"
"    border: 1px solid #555;\n"
"    border-radius: 4px;\n"
"    padding: 4px;\n"
"    font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"QPushButton {\n"
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
"}\n"
"\n"
"QLabel {\n"
"    color: rgb(154, 152, 151);\n"
"    font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	qproperty-alignment: AlignCenter;\n"
"}\n"
""));
        gridLayout_4 = new QGridLayout(widget_8);
        gridLayout_4->setObjectName("gridLayout_4");
        label_14 = new QLabel(widget_8);
        label_14->setObjectName("label_14");

        gridLayout_4->addWidget(label_14, 6, 4, 1, 1);

        lineEdit_6 = new QLineEdit(widget_8);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setReadOnly(true);

        gridLayout_4->addWidget(lineEdit_6, 6, 1, 1, 2);

        pushButton_21 = new QPushButton(widget_8);
        pushButton_21->setObjectName("pushButton_21");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_21->sizePolicy().hasHeightForWidth());
        pushButton_21->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_21, 5, 5, 1, 1);

        label_5 = new QLabel(widget_8);
        label_5->setObjectName("label_5");

        gridLayout_4->addWidget(label_5, 2, 0, 1, 1);

        label_9 = new QLabel(widget_8);
        label_9->setObjectName("label_9");

        gridLayout_4->addWidget(label_9, 4, 0, 1, 1);

        pushButton_19 = new QPushButton(widget_8);
        pushButton_19->setObjectName("pushButton_19");
        sizePolicy.setHeightForWidth(pushButton_19->sizePolicy().hasHeightForWidth());
        pushButton_19->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_19, 3, 5, 1, 1);

        pushButton_25 = new QPushButton(widget_8);
        pushButton_25->setObjectName("pushButton_25");
        sizePolicy.setHeightForWidth(pushButton_25->sizePolicy().hasHeightForWidth());
        pushButton_25->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_25, 5, 6, 1, 1);

        lineEdit_4 = new QLineEdit(widget_8);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setReadOnly(true);

        gridLayout_4->addWidget(lineEdit_4, 4, 1, 1, 2);

        lineEdit_2 = new QLineEdit(widget_8);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setReadOnly(true);

        gridLayout_4->addWidget(lineEdit_2, 2, 1, 1, 2);

        lineEdit_5 = new QLineEdit(widget_8);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setReadOnly(true);

        gridLayout_4->addWidget(lineEdit_5, 5, 1, 1, 2);

        label_7 = new QLabel(widget_8);
        label_7->setObjectName("label_7");

        gridLayout_4->addWidget(label_7, 3, 0, 1, 1);

        pushButton_4 = new QPushButton(widget_8);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_4, 0, 6, 1, 1);

        label_8 = new QLabel(widget_8);
        label_8->setObjectName("label_8");

        gridLayout_4->addWidget(label_8, 3, 4, 1, 1);

        pushButton_20 = new QPushButton(widget_8);
        pushButton_20->setObjectName("pushButton_20");
        sizePolicy.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_20, 4, 5, 1, 1);

        pushButton_22 = new QPushButton(widget_8);
        pushButton_22->setObjectName("pushButton_22");
        sizePolicy.setHeightForWidth(pushButton_22->sizePolicy().hasHeightForWidth());
        pushButton_22->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_22, 6, 5, 1, 1);

        label_11 = new QLabel(widget_8);
        label_11->setObjectName("label_11");

        gridLayout_4->addWidget(label_11, 6, 0, 1, 1);

        label_3 = new QLabel(widget_8);
        label_3->setObjectName("label_3");

        gridLayout_4->addWidget(label_3, 0, 0, 2, 1);

        pushButton_6 = new QPushButton(widget_8);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_6, 2, 5, 1, 1);

        label_13 = new QLabel(widget_8);
        label_13->setObjectName("label_13");

        gridLayout_4->addWidget(label_13, 5, 4, 1, 1);

        lineEdit = new QLineEdit(widget_8);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setReadOnly(true);

        gridLayout_4->addWidget(lineEdit, 0, 1, 2, 2);

        label_4 = new QLabel(widget_8);
        label_4->setObjectName("label_4");

        gridLayout_4->addWidget(label_4, 0, 4, 1, 1);

        label_12 = new QLabel(widget_8);
        label_12->setObjectName("label_12");

        gridLayout_4->addWidget(label_12, 4, 4, 1, 1);

        label_6 = new QLabel(widget_8);
        label_6->setObjectName("label_6");

        gridLayout_4->addWidget(label_6, 2, 4, 1, 1);

        lineEdit_3 = new QLineEdit(widget_8);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setReadOnly(true);

        gridLayout_4->addWidget(lineEdit_3, 3, 1, 1, 2);

        pushButton_23 = new QPushButton(widget_8);
        pushButton_23->setObjectName("pushButton_23");
        sizePolicy.setHeightForWidth(pushButton_23->sizePolicy().hasHeightForWidth());
        pushButton_23->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_23, 3, 6, 1, 1);

        pushButton_5 = new QPushButton(widget_8);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_5, 0, 5, 1, 1);

        label_10 = new QLabel(widget_8);
        label_10->setObjectName("label_10");

        gridLayout_4->addWidget(label_10, 5, 0, 1, 1);

        pushButton_24 = new QPushButton(widget_8);
        pushButton_24->setObjectName("pushButton_24");

        gridLayout_4->addWidget(pushButton_24, 4, 6, 1, 1);

        pushButton_26 = new QPushButton(widget_8);
        pushButton_26->setObjectName("pushButton_26");
        sizePolicy.setHeightForWidth(pushButton_26->sizePolicy().hasHeightForWidth());
        pushButton_26->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_26, 6, 6, 1, 1);

        pushButton_18 = new QPushButton(widget_8);
        pushButton_18->setObjectName("pushButton_18");
        sizePolicy.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButton_18, 2, 6, 1, 1);

        gridLayout_4->setRowStretch(0, 2);
        gridLayout_4->setRowStretch(1, 6);
        gridLayout_4->setRowStretch(2, 2);
        gridLayout_4->setRowStretch(3, 1);
        gridLayout_4->setRowStretch(4, 1);

        verticalLayout_5->addWidget(widget_8);

        widget_9 = new QWidget(widget_left);
        widget_9->setObjectName("widget_9");
        widget_9->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    background-color: #2e2e2e;\n"
"    color: rgb(154, 152, 151);;\n"
"    border: 1px solid #555;\n"
"    border-radius: 4px;\n"
"    padding: 4px;\n"
"    font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"\n"
"QPushButton {\n"
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
"}\n"
"\n"
"QLabel {\n"
"    color: rgb(154, 152, 151);\n"
"    font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	qproperty-alignment: AlignCenter;\n"
"}\n"
""));
        gridLayout_5 = new QGridLayout(widget_9);
        gridLayout_5->setObjectName("gridLayout_5");
        pushButton_30 = new QPushButton(widget_9);
        pushButton_30->setObjectName("pushButton_30");

        gridLayout_5->addWidget(pushButton_30, 0, 4, 1, 1);

        label_18 = new QLabel(widget_9);
        label_18->setObjectName("label_18");

        gridLayout_5->addWidget(label_18, 2, 0, 1, 1);

        label_25 = new QLabel(widget_9);
        label_25->setObjectName("label_25");

        gridLayout_5->addWidget(label_25, 5, 3, 1, 1);

        pushButton_35 = new QPushButton(widget_9);
        pushButton_35->setObjectName("pushButton_35");

        gridLayout_5->addWidget(pushButton_35, 0, 5, 1, 1);

        lineEdit_11 = new QLineEdit(widget_9);
        lineEdit_11->setObjectName("lineEdit_11");
        lineEdit_11->setReadOnly(true);

        gridLayout_5->addWidget(lineEdit_11, 0, 1, 1, 2);

        pushButton_29 = new QPushButton(widget_9);
        pushButton_29->setObjectName("pushButton_29");
        sizePolicy.setHeightForWidth(pushButton_29->sizePolicy().hasHeightForWidth());
        pushButton_29->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(pushButton_29, 4, 5, 1, 1);

        lineEdit_12 = new QLineEdit(widget_9);
        lineEdit_12->setObjectName("lineEdit_12");
        lineEdit_12->setReadOnly(true);

        gridLayout_5->addWidget(lineEdit_12, 2, 1, 1, 2);

        label_21 = new QLabel(widget_9);
        label_21->setObjectName("label_21");

        gridLayout_5->addWidget(label_21, 0, 3, 1, 1);

        pushButton_38 = new QPushButton(widget_9);
        pushButton_38->setObjectName("pushButton_38");
        sizePolicy.setHeightForWidth(pushButton_38->sizePolicy().hasHeightForWidth());
        pushButton_38->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(pushButton_38, 1, 5, 1, 1);

        label_24 = new QLabel(widget_9);
        label_24->setObjectName("label_24");

        gridLayout_5->addWidget(label_24, 4, 3, 1, 1);

        pushButton_27 = new QPushButton(widget_9);
        pushButton_27->setObjectName("pushButton_27");
        sizePolicy.setHeightForWidth(pushButton_27->sizePolicy().hasHeightForWidth());
        pushButton_27->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(pushButton_27, 4, 4, 1, 1);

        label_26 = new QLabel(widget_9);
        label_26->setObjectName("label_26");

        gridLayout_5->addWidget(label_26, 4, 0, 1, 1);

        label_16 = new QLabel(widget_9);
        label_16->setObjectName("label_16");

        gridLayout_5->addWidget(label_16, 1, 0, 1, 1);

        label_17 = new QLabel(widget_9);
        label_17->setObjectName("label_17");

        gridLayout_5->addWidget(label_17, 3, 0, 1, 1);

        label_23 = new QLabel(widget_9);
        label_23->setObjectName("label_23");

        gridLayout_5->addWidget(label_23, 3, 3, 1, 1);

        lineEdit_8 = new QLineEdit(widget_9);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setReadOnly(true);

        gridLayout_5->addWidget(lineEdit_8, 3, 1, 1, 2);

        pushButton_33 = new QPushButton(widget_9);
        pushButton_33->setObjectName("pushButton_33");
        sizePolicy.setHeightForWidth(pushButton_33->sizePolicy().hasHeightForWidth());
        pushButton_33->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(pushButton_33, 1, 4, 1, 1);

        pushButton_36 = new QPushButton(widget_9);
        pushButton_36->setObjectName("pushButton_36");

        gridLayout_5->addWidget(pushButton_36, 3, 5, 1, 1);

        pushButton_28 = new QPushButton(widget_9);
        pushButton_28->setObjectName("pushButton_28");
        sizePolicy.setHeightForWidth(pushButton_28->sizePolicy().hasHeightForWidth());
        pushButton_28->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(pushButton_28, 2, 4, 1, 1);

        pushButton_32 = new QPushButton(widget_9);
        pushButton_32->setObjectName("pushButton_32");
        sizePolicy.setHeightForWidth(pushButton_32->sizePolicy().hasHeightForWidth());
        pushButton_32->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(pushButton_32, 5, 4, 1, 1);

        pushButton_31 = new QPushButton(widget_9);
        pushButton_31->setObjectName("pushButton_31");
        sizePolicy.setHeightForWidth(pushButton_31->sizePolicy().hasHeightForWidth());
        pushButton_31->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(pushButton_31, 3, 4, 1, 1);

        label_22 = new QLabel(widget_9);
        label_22->setObjectName("label_22");

        gridLayout_5->addWidget(label_22, 2, 3, 1, 1);

        lineEdit_7 = new QLineEdit(widget_9);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setReadOnly(true);

        gridLayout_5->addWidget(lineEdit_7, 5, 1, 1, 2);

        label_20 = new QLabel(widget_9);
        label_20->setObjectName("label_20");

        gridLayout_5->addWidget(label_20, 5, 0, 1, 1);

        pushButton_37 = new QPushButton(widget_9);
        pushButton_37->setObjectName("pushButton_37");
        sizePolicy.setHeightForWidth(pushButton_37->sizePolicy().hasHeightForWidth());
        pushButton_37->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(pushButton_37, 5, 5, 1, 1);

        label_19 = new QLabel(widget_9);
        label_19->setObjectName("label_19");

        gridLayout_5->addWidget(label_19, 1, 3, 1, 1);

        label_15 = new QLabel(widget_9);
        label_15->setObjectName("label_15");

        gridLayout_5->addWidget(label_15, 0, 0, 1, 1);

        lineEdit_9 = new QLineEdit(widget_9);
        lineEdit_9->setObjectName("lineEdit_9");
        lineEdit_9->setReadOnly(true);

        gridLayout_5->addWidget(lineEdit_9, 1, 1, 1, 2);

        lineEdit_10 = new QLineEdit(widget_9);
        lineEdit_10->setObjectName("lineEdit_10");
        lineEdit_10->setReadOnly(true);

        gridLayout_5->addWidget(lineEdit_10, 4, 1, 1, 2);

        pushButton_34 = new QPushButton(widget_9);
        pushButton_34->setObjectName("pushButton_34");
        sizePolicy.setHeightForWidth(pushButton_34->sizePolicy().hasHeightForWidth());
        pushButton_34->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(pushButton_34, 2, 5, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_2, 6, 1, 1, 1);

        gridLayout_5->setRowStretch(0, 2);
        gridLayout_5->setRowStretch(1, 6);
        gridLayout_5->setRowStretch(2, 2);
        gridLayout_5->setRowStretch(3, 1);
        gridLayout_5->setRowStretch(4, 1);

        verticalLayout_5->addWidget(widget_9);

        verticalLayout_5->setStretch(0, 1);
        verticalLayout_5->setStretch(1, 1);
        verticalLayout_5->setStretch(2, 7);
        verticalLayout_5->setStretch(3, 11);

        horizontalLayout_2->addWidget(widget_left);

        widget_mid = new QWidget(operationWidget);
        widget_mid->setObjectName("widget_mid");
        widget_mid->setStyleSheet(QString::fromUtf8("background-color:rgb(95, 95, 95)"));
        verticalLayout_3 = new QVBoxLayout(widget_mid);
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(2, 2, 2, 2);
        widget_mid_up = new QWidget(widget_mid);
        widget_mid_up->setObjectName("widget_mid_up");
        widget_mid_up->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 0, 0);"));
        horizontalLayout_4 = new QHBoxLayout(widget_mid_up);
        horizontalLayout_4->setSpacing(50);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(30, 0, 80, 0);
        widget = new QWidget(widget_mid_up);
        widget->setObjectName("widget");
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setSpacing(15);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
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

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
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

        horizontalLayout_3->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
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

        horizontalLayout_3->addWidget(pushButton_3);


        horizontalLayout_4->addWidget(widget);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        directionPadPlaceholder = new QWidget(widget_mid_up);
        directionPadPlaceholder->setObjectName("directionPadPlaceholder");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(200);
        sizePolicy1.setVerticalStretch(200);
        sizePolicy1.setHeightForWidth(directionPadPlaceholder->sizePolicy().hasHeightForWidth());
        directionPadPlaceholder->setSizePolicy(sizePolicy1);
        directionPadPlaceholder->setMinimumSize(QSize(70, 70));

        horizontalLayout_4->addWidget(directionPadPlaceholder);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 2);
        horizontalLayout_4->setStretch(2, 1);

        verticalLayout_3->addWidget(widget_mid_up);

        widget_mid_down = new QWidget(widget_mid);
        widget_mid_down->setObjectName("widget_mid_down");
        widget_mid_down->setStyleSheet(QString::fromUtf8("QWidget#widget_mid_down\n"
"{\n"
"background-color:rgb(0, 0, 0);\n"
"border-image:url(:/resource/image/armctrl.png);\n"
"background-position: center; \n"
"background-repeat: no-repeat;\n"
"}"));

        verticalLayout_3->addWidget(widget_mid_down);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 8);

        horizontalLayout_2->addWidget(widget_mid);

        widget_right = new QWidget(operationWidget);
        widget_right->setObjectName("widget_right");
        verticalLayout_4 = new QVBoxLayout(widget_right);
        verticalLayout_4->setSpacing(1);
        verticalLayout_4->setObjectName("verticalLayout_4");
        widget_5 = new QWidget(widget_right);
        widget_5->setObjectName("widget_5");
        horizontalLayout_6 = new QHBoxLayout(widget_5);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(9, 0, 0, 0);
        label_2 = new QLabel(widget_5);
        label_2->setObjectName("label_2");
        QFont font1;
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"font-size:16px;"));

        horizontalLayout_6->addWidget(label_2);


        verticalLayout_4->addWidget(widget_5);

        widget_3 = new QWidget(widget_right);
        widget_3->setObjectName("widget_3");
        horizontalLayout_5 = new QHBoxLayout(widget_3);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(-1, 1, -1, 1);
        comboBoxPositionType = new QComboBox(widget_3);
        comboBoxPositionType->setObjectName("comboBoxPositionType");
        comboBoxPositionType->setFont(font1);
        comboBoxPositionType->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: #2e2e2e;\n"
"    color: #ffffff;\n"
"    border: 1px solid #444444;\n"
"    padding: 4px;\n"
"    border-radius: 4px;\n"
"	text-align: center;\n"
" 	font-size: 16px;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 20px;\n"
"    border-left: 1px solid #444444;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: #2e2e2e;\n"
"    selection-background-color: #3b7ddd;\n"
"    color: white;\n"
"	text-align: center;  /* \350\256\276\347\275\256\344\270\213\346\213\211\351\241\271\346\226\207\345\255\227\345\261\205\344\270\255 */\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: #2e2e2e;\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 4px 8px;\n"
"    border-radius: 4px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #3c3c3c;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #555555;\n"
"}\n"
""));

        horizontalLayout_5->addWidget(comboBoxPositionType);

        btnArmPosExecute = new QPushButton(widget_3);
        btnArmPosExecute->setObjectName("btnArmPosExecute");
        sizePolicy.setHeightForWidth(btnArmPosExecute->sizePolicy().hasHeightForWidth());
        btnArmPosExecute->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setBold(true);
        btnArmPosExecute->setFont(font2);
        btnArmPosExecute->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_5->addWidget(btnArmPosExecute);

        btnArmPosMinus = new QPushButton(widget_3);
        btnArmPosMinus->setObjectName("btnArmPosMinus");
        sizePolicy.setHeightForWidth(btnArmPosMinus->sizePolicy().hasHeightForWidth());
        btnArmPosMinus->setSizePolicy(sizePolicy);
        btnArmPosMinus->setFont(font2);
        btnArmPosMinus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_5->addWidget(btnArmPosMinus);

        btnArmPosPlus = new QPushButton(widget_3);
        btnArmPosPlus->setObjectName("btnArmPosPlus");
        sizePolicy.setHeightForWidth(btnArmPosPlus->sizePolicy().hasHeightForWidth());
        btnArmPosPlus->setSizePolicy(sizePolicy);
        btnArmPosPlus->setFont(font2);
        btnArmPosPlus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_5->addWidget(btnArmPosPlus);

        horizontalLayout_5->setStretch(0, 9);
        horizontalLayout_5->setStretch(1, 1);
        horizontalLayout_5->setStretch(2, 1);
        horizontalLayout_5->setStretch(3, 1);

        verticalLayout_4->addWidget(widget_3);

        widget_4 = new QWidget(widget_right);
        widget_4->setObjectName("widget_4");
        gridLayout_3 = new QGridLayout(widget_4);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setHorizontalSpacing(100);
        gridLayout_3->setVerticalSpacing(1);
        gridLayout_3->setContentsMargins(-1, 5, -1, -1);
        pushButton_10 = new QPushButton(widget_4);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(37, 38, 43);\n"
"color: rgb(192, 192, 192);\n"
"font-size:15px;\n"
"border-radius: 5px;\n"
"min-width: 120px;\n"
"min-height: 35px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(70, 72, 81);\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(245, 245, 245);\n"
"}"));

        gridLayout_3->addWidget(pushButton_10, 1, 1, 1, 1);

        pushButton_11 = new QPushButton(widget_4);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(37, 38, 43);\n"
"color: rgb(192, 192, 192);\n"
"font-size:15px;\n"
"border-radius: 5px;\n"
"min-width: 120px;\n"
"min-height: 35px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(70, 72, 81);\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(245, 245, 245);\n"
"}"));

        gridLayout_3->addWidget(pushButton_11, 2, 0, 1, 1);

        pushButton_12 = new QPushButton(widget_4);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(37, 38, 43);\n"
"color: rgb(192, 192, 192);\n"
"font-size:15px;\n"
"border-radius: 5px;\n"
"min-width: 120px;\n"
"min-height: 35px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(70, 72, 81);\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(245, 245, 245);\n"
"}"));

        gridLayout_3->addWidget(pushButton_12, 2, 1, 1, 1);

        pushButton_14 = new QPushButton(widget_4);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(37, 38, 43);\n"
"color: rgb(192, 192, 192);\n"
"font-size:15px;\n"
"border-radius: 5px;\n"
"min-width: 120px;\n"
"min-height: 35px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(70, 72, 81);\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(245, 245, 245);\n"
"}"));

        gridLayout_3->addWidget(pushButton_14, 4, 0, 1, 1);

        pushButton_7 = new QPushButton(widget_4);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(37, 38, 43);\n"
"color: rgb(192, 192, 192);\n"
"font-size:15px;\n"
"border-radius: 5px;\n"
"min-width: 120px;\n"
"min-height: 35px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(70, 72, 81);\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(245, 245, 245);\n"
"}"));

        gridLayout_3->addWidget(pushButton_7, 0, 0, 1, 1);

        pushButton_8 = new QPushButton(widget_4);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(37, 38, 43);\n"
"color: rgb(192, 192, 192);\n"
"font-size:15px;\n"
"border-radius: 5px;\n"
"min-width: 120px;\n"
"min-height: 35px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(70, 72, 81);\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(245, 245, 245);\n"
"}"));

        gridLayout_3->addWidget(pushButton_8, 0, 1, 1, 1);

        pushButton_9 = new QPushButton(widget_4);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(37, 38, 43);\n"
"color: rgb(192, 192, 192);\n"
"font-size:15px;\n"
"border-radius: 5px;\n"
"min-width: 120px;\n"
"min-height: 35px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(70, 72, 81);\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(245, 245, 245);\n"
"}"));

        gridLayout_3->addWidget(pushButton_9, 1, 0, 1, 1);

        pushButton_13 = new QPushButton(widget_4);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(37, 38, 43);\n"
"color: rgb(192, 192, 192);\n"
"font-size:15px;\n"
"border-radius: 5px;\n"
"min-width: 120px;\n"
"min-height: 35px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(70, 72, 81);\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(245, 245, 245);\n"
"}"));

        gridLayout_3->addWidget(pushButton_13, 3, 0, 1, 1);

        pushButton_15 = new QPushButton(widget_4);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(37, 38, 43);\n"
"color: rgb(192, 192, 192);\n"
"font-size:15px;\n"
"border-radius: 5px;\n"
"min-width: 120px;\n"
"min-height: 35px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(70, 72, 81);\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(245, 245, 245);\n"
"}"));

        gridLayout_3->addWidget(pushButton_15, 5, 0, 1, 1);

        pushButton_16 = new QPushButton(widget_4);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(37, 38, 43);\n"
"color: rgb(192, 192, 192);\n"
"font-size:15px;\n"
"border-radius: 5px;\n"
"min-width: 120px;\n"
"min-height: 35px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(70, 72, 81);\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(245, 245, 245);\n"
"}"));

        gridLayout_3->addWidget(pushButton_16, 3, 1, 1, 1);

        pushButton_17 = new QPushButton(widget_4);
        pushButton_17->setObjectName("pushButton_17");
        pushButton_17->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(37, 38, 43);\n"
"color: rgb(192, 192, 192);\n"
"font-size:15px;\n"
"border-radius: 5px;\n"
"min-width: 120px;\n"
"min-height: 35px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(70, 72, 81);\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(245, 245, 245);\n"
"}"));

        gridLayout_3->addWidget(pushButton_17, 4, 1, 1, 1);


        verticalLayout_4->addWidget(widget_4);

        verticalSpacer = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(1, 2);
        verticalLayout_4->setStretch(2, 22);

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
        labelSpeedText->setText(QCoreApplication::translate("ArmControlWidget", "\351\200\237\345\272\246", nullptr));
        labelSpeedValue->setText(QCoreApplication::translate("ArmControlWidget", "TextLabel", nullptr));
        labelFeature->setText(QCoreApplication::translate("ArmControlWidget", "\347\211\271\345\276\201", nullptr));
        radioBase->setText(QCoreApplication::translate("ArmControlWidget", "\345\237\272\345\272\247", nullptr));
        label_14->setText(QCoreApplication::translate("ArmControlWidget", "rad", nullptr));
        pushButton_21->setText(QCoreApplication::translate("ArmControlWidget", "+", nullptr));
        label_5->setText(QCoreApplication::translate("ArmControlWidget", "Y", nullptr));
        label_9->setText(QCoreApplication::translate("ArmControlWidget", "RX", nullptr));
        pushButton_19->setText(QCoreApplication::translate("ArmControlWidget", "+", nullptr));
        pushButton_25->setText(QCoreApplication::translate("ArmControlWidget", "-", nullptr));
        label_7->setText(QCoreApplication::translate("ArmControlWidget", "Z", nullptr));
        pushButton_4->setText(QCoreApplication::translate("ArmControlWidget", "-", nullptr));
        label_8->setText(QCoreApplication::translate("ArmControlWidget", "mm", nullptr));
        pushButton_20->setText(QCoreApplication::translate("ArmControlWidget", "+", nullptr));
        pushButton_22->setText(QCoreApplication::translate("ArmControlWidget", "+", nullptr));
        label_11->setText(QCoreApplication::translate("ArmControlWidget", "RZ", nullptr));
        label_3->setText(QCoreApplication::translate("ArmControlWidget", "X", nullptr));
        pushButton_6->setText(QCoreApplication::translate("ArmControlWidget", "+", nullptr));
        label_13->setText(QCoreApplication::translate("ArmControlWidget", "rad", nullptr));
        label_4->setText(QCoreApplication::translate("ArmControlWidget", "mm", nullptr));
        label_12->setText(QCoreApplication::translate("ArmControlWidget", "rad", nullptr));
        label_6->setText(QCoreApplication::translate("ArmControlWidget", "mm", nullptr));
        pushButton_23->setText(QCoreApplication::translate("ArmControlWidget", "-", nullptr));
        pushButton_5->setText(QCoreApplication::translate("ArmControlWidget", "+", nullptr));
        label_10->setText(QCoreApplication::translate("ArmControlWidget", "RY", nullptr));
        pushButton_24->setText(QCoreApplication::translate("ArmControlWidget", "-", nullptr));
        pushButton_26->setText(QCoreApplication::translate("ArmControlWidget", "-", nullptr));
        pushButton_18->setText(QCoreApplication::translate("ArmControlWidget", "-", nullptr));
        pushButton_30->setText(QCoreApplication::translate("ArmControlWidget", "+", nullptr));
        label_18->setText(QCoreApplication::translate("ArmControlWidget", "\350\202\230\351\203\250", nullptr));
        label_25->setText(QCoreApplication::translate("ArmControlWidget", "\302\260", nullptr));
        pushButton_35->setText(QCoreApplication::translate("ArmControlWidget", "-", nullptr));
        pushButton_29->setText(QCoreApplication::translate("ArmControlWidget", "-", nullptr));
        label_21->setText(QCoreApplication::translate("ArmControlWidget", "\302\260", nullptr));
        pushButton_38->setText(QCoreApplication::translate("ArmControlWidget", "-", nullptr));
        label_24->setText(QCoreApplication::translate("ArmControlWidget", "\302\260", nullptr));
        pushButton_27->setText(QCoreApplication::translate("ArmControlWidget", "+", nullptr));
        label_26->setText(QCoreApplication::translate("ArmControlWidget", "\346\211\213\350\205\2252", nullptr));
        label_16->setText(QCoreApplication::translate("ArmControlWidget", "\350\202\251\351\203\250", nullptr));
        label_17->setText(QCoreApplication::translate("ArmControlWidget", "\346\211\213\350\205\2251", nullptr));
        label_23->setText(QCoreApplication::translate("ArmControlWidget", "\302\260", nullptr));
        pushButton_33->setText(QCoreApplication::translate("ArmControlWidget", "+", nullptr));
        pushButton_36->setText(QCoreApplication::translate("ArmControlWidget", "-", nullptr));
        pushButton_28->setText(QCoreApplication::translate("ArmControlWidget", "+", nullptr));
        pushButton_32->setText(QCoreApplication::translate("ArmControlWidget", "+", nullptr));
        pushButton_31->setText(QCoreApplication::translate("ArmControlWidget", "+", nullptr));
        label_22->setText(QCoreApplication::translate("ArmControlWidget", "\302\260", nullptr));
        label_20->setText(QCoreApplication::translate("ArmControlWidget", "\346\211\213\350\205\2253", nullptr));
        pushButton_37->setText(QCoreApplication::translate("ArmControlWidget", "-", nullptr));
        label_19->setText(QCoreApplication::translate("ArmControlWidget", "\302\260", nullptr));
        label_15->setText(QCoreApplication::translate("ArmControlWidget", "\345\237\272\345\272\247", nullptr));
        pushButton_34->setText(QCoreApplication::translate("ArmControlWidget", "-", nullptr));
        pushButton->setText(QCoreApplication::translate("ArmControlWidget", "0", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ArmControlWidget", "\351\241\266\350\247\206\345\233\276", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ArmControlWidget", "\344\276\247\350\247\206\345\233\276", nullptr));
        label_2->setText(QCoreApplication::translate("ArmControlWidget", "\346\234\272\346\242\260\350\207\202\344\275\215\347\275\256", nullptr));
        btnArmPosExecute->setText(QCoreApplication::translate("ArmControlWidget", "+", nullptr));
        btnArmPosMinus->setText(QCoreApplication::translate("ArmControlWidget", "-", nullptr));
        btnArmPosPlus->setText(QCoreApplication::translate("ArmControlWidget", "\342\226\266", nullptr));
        pushButton_10->setText(QCoreApplication::translate("ArmControlWidget", "\345\217\263\345\261\225\345\274\200\344\275\215", nullptr));
        pushButton_11->setText(QCoreApplication::translate("ArmControlWidget", "\346\226\255\345\274\200", nullptr));
        pushButton_12->setText(QCoreApplication::translate("ArmControlWidget", "\350\277\236\346\216\245", nullptr));
        pushButton_14->setText(QCoreApplication::translate("ArmControlWidget", "\345\205\263\346\234\272", nullptr));
        pushButton_7->setText(QCoreApplication::translate("ArmControlWidget", "\346\212\230\345\217\240\344\275\215", nullptr));
        pushButton_8->setText(QCoreApplication::translate("ArmControlWidget", "\351\233\266\344\275\215", nullptr));
        pushButton_9->setText(QCoreApplication::translate("ArmControlWidget", "\345\267\246\345\261\225\345\274\200\344\275\215", nullptr));
        pushButton_13->setText(QCoreApplication::translate("ArmControlWidget", "\345\201\234\346\255\242", nullptr));
        pushButton_15->setText(QCoreApplication::translate("ArmControlWidget", "\347\244\272\346\225\231", nullptr));
        pushButton_16->setText(QCoreApplication::translate("ArmControlWidget", "\350\247\243\351\231\244\345\201\234\346\234\272", nullptr));
        pushButton_17->setText(QCoreApplication::translate("ArmControlWidget", "\351\207\215\345\220\257", nullptr));
        backButton->setText(QCoreApplication::translate("ArmControlWidget", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ArmControlWidget: public Ui_ArmControlWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARMCONTROLWIDGET_H
