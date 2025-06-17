/********************************************************************************
** Form generated from reading UI file 'registrationwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONWIDGET_H
#define UI_REGISTRATIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegistrationWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *imageInputButton;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_2;
    QWidget *errorWidget;
    QGridLayout *gridLayout;
    QLabel *maxErrorText;
    QLabel *maxErrorValue;
    QLabel *meanErrorValue;
    QLabel *meanErrorText;
    QWidget *opRegistrationPointsWidget;
    QGridLayout *gridLayout_2;
    QPushButton *identifyRegistrationPointsButton;
    QPushButton *upButton;
    QPushButton *pickUpRegistrationPointsButton;
    QPushButton *downButton;
    QWidget *ndiPointsInfoWidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *headInfoWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *indexText;
    QSpacerItem *horizontalSpacer_5;
    QLabel *imageText;
    QSpacerItem *horizontalSpacer_6;
    QLabel *errorValueText;
    QWidget *theFirstPointWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *first;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *firstDeleteButton;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *horizontalSpacer_8;
    QLabel *firstErrorValue;
    QWidget *theSecondPointWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *second;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *secondDeleteButton;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *horizontalSpacer_14;
    QLabel *secondErrorValue;
    QWidget *theThirdPointWidget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *third;
    QSpacerItem *horizontalSpacer_15;
    QSpacerItem *horizontalSpacer_16;
    QPushButton *thirdDeleteButton;
    QSpacerItem *horizontalSpacer_17;
    QSpacerItem *horizontalSpacer_18;
    QLabel *thirdErrorValue;
    QWidget *theFourthPointWidget;
    QHBoxLayout *horizontalLayout_7;
    QLabel *fourth;
    QSpacerItem *horizontalSpacer_19;
    QSpacerItem *horizontalSpacer_20;
    QPushButton *fourthDeleteButton;
    QSpacerItem *horizontalSpacer_21;
    QSpacerItem *horizontalSpacer_22;
    QLabel *fourthErrorValue;
    QWidget *theFifthPointWidget;
    QHBoxLayout *horizontalLayout_8;
    QLabel *fifth;
    QSpacerItem *horizontalSpacer_23;
    QSpacerItem *horizontalSpacer_24;
    QPushButton *fifthDeleteButton;
    QSpacerItem *horizontalSpacer_25;
    QSpacerItem *horizontalSpacer_26;
    QLabel *fifthErrorValue;
    QWidget *ndiPointsImageWidget;
    QPushButton *reregistrateButton;
    QWidget *spaceWidget;
    QFrame *frame_3;
    QWidget *buttonWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *backButton;
    QPushButton *nextButton;

    void setupUi(QWidget *RegistrationWidget)
    {
        if (RegistrationWidget->objectName().isEmpty())
            RegistrationWidget->setObjectName("RegistrationWidget");
        RegistrationWidget->resize(432, 1240);
        RegistrationWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 17, 18);"));
        verticalLayout_3 = new QVBoxLayout(RegistrationWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(15, 20, 15, 10);
        frame = new QFrame(RegistrationWidget);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setStyleSheet(QString::fromUtf8("QFrame{background:23, 23, 26;min-height:5px;color:white}"));
        frame->setFrameShape(QFrame::HLine);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(1);

        verticalLayout_3->addWidget(frame);

        widget = new QWidget(RegistrationWidget);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"qproperty-alignment: 'AlignCenter';"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        imageInputButton = new QPushButton(widget);
        imageInputButton->setObjectName("imageInputButton");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(imageInputButton->sizePolicy().hasHeightForWidth());
        imageInputButton->setSizePolicy(sizePolicy1);
        imageInputButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout->addWidget(imageInputButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(1, 5);
        horizontalLayout->setStretch(4, 2);

        verticalLayout_3->addWidget(widget);

        frame_2 = new QFrame(RegistrationWidget);
        frame_2->setObjectName("frame_2");
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setStyleSheet(QString::fromUtf8("QFrame{background:23, 23, 26;min-height:5px;color:white}"));
        frame_2->setFrameShape(QFrame::HLine);
        frame_2->setFrameShadow(QFrame::Plain);
        frame_2->setLineWidth(1);

        verticalLayout_3->addWidget(frame_2);

        errorWidget = new QWidget(RegistrationWidget);
        errorWidget->setObjectName("errorWidget");
        gridLayout = new QGridLayout(errorWidget);
        gridLayout->setObjectName("gridLayout");
        maxErrorText = new QLabel(errorWidget);
        maxErrorText->setObjectName("maxErrorText");
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        maxErrorText->setFont(font1);
        maxErrorText->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"qproperty-alignment: 'AlignCenter';"));
        maxErrorText->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(maxErrorText, 0, 0, 1, 1);

        maxErrorValue = new QLabel(errorWidget);
        maxErrorValue->setObjectName("maxErrorValue");
        maxErrorValue->setFont(font1);
        maxErrorValue->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"qproperty-alignment: 'AlignCenter';"));
        maxErrorValue->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(maxErrorValue, 1, 0, 1, 1);

        meanErrorValue = new QLabel(errorWidget);
        meanErrorValue->setObjectName("meanErrorValue");
        meanErrorValue->setFont(font1);
        meanErrorValue->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 0);\n"
"qproperty-alignment: 'AlignCenter';"));
        meanErrorValue->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(meanErrorValue, 1, 1, 1, 1);

        meanErrorText = new QLabel(errorWidget);
        meanErrorText->setObjectName("meanErrorText");
        meanErrorText->setFont(font1);
        meanErrorText->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"qproperty-alignment: 'AlignCenter';"));
        meanErrorText->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(meanErrorText, 0, 1, 1, 1);


        verticalLayout_3->addWidget(errorWidget);

        opRegistrationPointsWidget = new QWidget(RegistrationWidget);
        opRegistrationPointsWidget->setObjectName("opRegistrationPointsWidget");
        gridLayout_2 = new QGridLayout(opRegistrationPointsWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(1);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        identifyRegistrationPointsButton = new QPushButton(opRegistrationPointsWidget);
        identifyRegistrationPointsButton->setObjectName("identifyRegistrationPointsButton");
        sizePolicy1.setHeightForWidth(identifyRegistrationPointsButton->sizePolicy().hasHeightForWidth());
        identifyRegistrationPointsButton->setSizePolicy(sizePolicy1);
        identifyRegistrationPointsButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(28, 29, 33);\n"
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

        gridLayout_2->addWidget(identifyRegistrationPointsButton, 0, 0, 1, 1);

        upButton = new QPushButton(opRegistrationPointsWidget);
        upButton->setObjectName("upButton");
        sizePolicy1.setHeightForWidth(upButton->sizePolicy().hasHeightForWidth());
        upButton->setSizePolicy(sizePolicy1);
        upButton->setStyleSheet(QString::fromUtf8("border-image: url(:/resource/image/up.png);\n"
"background-position: center; \n"
"background-repeat: no-repeat;"));

        gridLayout_2->addWidget(upButton, 0, 1, 1, 1);

        pickUpRegistrationPointsButton = new QPushButton(opRegistrationPointsWidget);
        pickUpRegistrationPointsButton->setObjectName("pickUpRegistrationPointsButton");
        sizePolicy1.setHeightForWidth(pickUpRegistrationPointsButton->sizePolicy().hasHeightForWidth());
        pickUpRegistrationPointsButton->setSizePolicy(sizePolicy1);
        pickUpRegistrationPointsButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(28, 29, 33);\n"
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

        gridLayout_2->addWidget(pickUpRegistrationPointsButton, 1, 0, 1, 1);

        downButton = new QPushButton(opRegistrationPointsWidget);
        downButton->setObjectName("downButton");
        sizePolicy1.setHeightForWidth(downButton->sizePolicy().hasHeightForWidth());
        downButton->setSizePolicy(sizePolicy1);
        downButton->setStyleSheet(QString::fromUtf8("border-image: url(:/resource/image/down.png);\n"
"background-position: center; \n"
"background-repeat: no-repeat;"));

        gridLayout_2->addWidget(downButton, 1, 1, 1, 1);

        gridLayout_2->setColumnStretch(0, 15);
        gridLayout_2->setColumnStretch(1, 4);

        verticalLayout_3->addWidget(opRegistrationPointsWidget);

        ndiPointsInfoWidget = new QWidget(RegistrationWidget);
        ndiPointsInfoWidget->setObjectName("ndiPointsInfoWidget");
        verticalLayout_2 = new QVBoxLayout(ndiPointsInfoWidget);
        verticalLayout_2->setSpacing(7);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        headInfoWidget = new QWidget(ndiPointsInfoWidget);
        headInfoWidget->setObjectName("headInfoWidget");
        headInfoWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(37, 38, 43);"));
        horizontalLayout_3 = new QHBoxLayout(headInfoWidget);
        horizontalLayout_3->setSpacing(4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(30, 0, 30, 0);
        indexText = new QLabel(headInfoWidget);
        indexText->setObjectName("indexText");
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        indexText->setFont(font2);
        indexText->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"qproperty-alignment: 'AlignCenter';"));
        indexText->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(indexText);

        horizontalSpacer_5 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        imageText = new QLabel(headInfoWidget);
        imageText->setObjectName("imageText");
        imageText->setFont(font2);
        imageText->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"qproperty-alignment: 'AlignCenter';"));
        imageText->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(imageText);

        horizontalSpacer_6 = new QSpacerItem(99, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        errorValueText = new QLabel(headInfoWidget);
        errorValueText->setObjectName("errorValueText");
        errorValueText->setFont(font2);
        errorValueText->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"qproperty-alignment: 'AlignCenter';"));
        errorValueText->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(errorValueText);


        verticalLayout_2->addWidget(headInfoWidget);

        theFirstPointWidget = new QWidget(ndiPointsInfoWidget);
        theFirstPointWidget->setObjectName("theFirstPointWidget");
        theFirstPointWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 17, 18);"));
        horizontalLayout_4 = new QHBoxLayout(theFirstPointWidget);
        horizontalLayout_4->setSpacing(4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        first = new QLabel(theFirstPointWidget);
        first->setObjectName("first");
        first->setFont(font2);
        first->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"qproperty-alignment: 'AlignCenter';"));
        first->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(first);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);

        firstDeleteButton = new QPushButton(theFirstPointWidget);
        firstDeleteButton->setObjectName("firstDeleteButton");
        sizePolicy1.setHeightForWidth(firstDeleteButton->sizePolicy().hasHeightForWidth());
        firstDeleteButton->setSizePolicy(sizePolicy1);
        firstDeleteButton->setMinimumSize(QSize(15, 15));
        firstDeleteButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-image: url(:/resource/image/trash.png);\n"
"background-position: center; \n"
"background-repeat: no-repeat;"));

        horizontalLayout_4->addWidget(firstDeleteButton);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_11);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        firstErrorValue = new QLabel(theFirstPointWidget);
        firstErrorValue->setObjectName("firstErrorValue");
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(true);
        firstErrorValue->setFont(font3);
        firstErrorValue->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"background-color: rgb(0, 0, 0);\n"
"qproperty-alignment: 'AlignCenter';"));
        firstErrorValue->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(firstErrorValue);

        horizontalLayout_4->setStretch(0, 2);
        horizontalLayout_4->setStretch(3, 1);
        horizontalLayout_4->setStretch(6, 3);

        verticalLayout_2->addWidget(theFirstPointWidget);

        theSecondPointWidget = new QWidget(ndiPointsInfoWidget);
        theSecondPointWidget->setObjectName("theSecondPointWidget");
        theSecondPointWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 17, 18);"));
        horizontalLayout_5 = new QHBoxLayout(theSecondPointWidget);
        horizontalLayout_5->setSpacing(4);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        second = new QLabel(theSecondPointWidget);
        second->setObjectName("second");
        second->setFont(font2);
        second->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"qproperty-alignment: 'AlignCenter';"));
        second->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(second);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_12);

        secondDeleteButton = new QPushButton(theSecondPointWidget);
        secondDeleteButton->setObjectName("secondDeleteButton");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(secondDeleteButton->sizePolicy().hasHeightForWidth());
        secondDeleteButton->setSizePolicy(sizePolicy2);
        secondDeleteButton->setMinimumSize(QSize(15, 15));
        secondDeleteButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-image: url(:/resource/image/trash.png);\n"
"background-position: center; \n"
"background-repeat: no-repeat;"));

        horizontalLayout_5->addWidget(secondDeleteButton);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_13);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_14);

        secondErrorValue = new QLabel(theSecondPointWidget);
        secondErrorValue->setObjectName("secondErrorValue");
        secondErrorValue->setFont(font3);
        secondErrorValue->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"background-color: rgb(0, 0, 0);\n"
"qproperty-alignment: 'AlignCenter';"));
        secondErrorValue->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(secondErrorValue);

        horizontalLayout_5->setStretch(0, 2);
        horizontalLayout_5->setStretch(3, 1);
        horizontalLayout_5->setStretch(6, 3);

        verticalLayout_2->addWidget(theSecondPointWidget);

        theThirdPointWidget = new QWidget(ndiPointsInfoWidget);
        theThirdPointWidget->setObjectName("theThirdPointWidget");
        theThirdPointWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 17, 18);"));
        horizontalLayout_6 = new QHBoxLayout(theThirdPointWidget);
        horizontalLayout_6->setSpacing(4);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        third = new QLabel(theThirdPointWidget);
        third->setObjectName("third");
        third->setFont(font2);
        third->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"qproperty-alignment: 'AlignCenter';"));
        third->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(third);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_15);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_16);

        thirdDeleteButton = new QPushButton(theThirdPointWidget);
        thirdDeleteButton->setObjectName("thirdDeleteButton");
        sizePolicy1.setHeightForWidth(thirdDeleteButton->sizePolicy().hasHeightForWidth());
        thirdDeleteButton->setSizePolicy(sizePolicy1);
        thirdDeleteButton->setMinimumSize(QSize(15, 15));
        thirdDeleteButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-image: url(:/resource/image/trash.png);\n"
"background-position: center; \n"
"background-repeat: no-repeat;"));

        horizontalLayout_6->addWidget(thirdDeleteButton);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_17);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_18);

        thirdErrorValue = new QLabel(theThirdPointWidget);
        thirdErrorValue->setObjectName("thirdErrorValue");
        thirdErrorValue->setFont(font3);
        thirdErrorValue->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"background-color: rgb(0, 0, 0);\n"
"qproperty-alignment: 'AlignCenter';"));
        thirdErrorValue->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(thirdErrorValue);

        horizontalLayout_6->setStretch(0, 2);
        horizontalLayout_6->setStretch(3, 1);
        horizontalLayout_6->setStretch(6, 3);

        verticalLayout_2->addWidget(theThirdPointWidget);

        theFourthPointWidget = new QWidget(ndiPointsInfoWidget);
        theFourthPointWidget->setObjectName("theFourthPointWidget");
        theFourthPointWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 17, 18);"));
        horizontalLayout_7 = new QHBoxLayout(theFourthPointWidget);
        horizontalLayout_7->setSpacing(4);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        fourth = new QLabel(theFourthPointWidget);
        fourth->setObjectName("fourth");
        fourth->setFont(font2);
        fourth->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"qproperty-alignment: 'AlignCenter';"));
        fourth->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(fourth);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_19);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_20);

        fourthDeleteButton = new QPushButton(theFourthPointWidget);
        fourthDeleteButton->setObjectName("fourthDeleteButton");
        sizePolicy1.setHeightForWidth(fourthDeleteButton->sizePolicy().hasHeightForWidth());
        fourthDeleteButton->setSizePolicy(sizePolicy1);
        fourthDeleteButton->setMinimumSize(QSize(15, 15));
        fourthDeleteButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-image: url(:/resource/image/trash.png);\n"
"background-position: center; \n"
"background-repeat: no-repeat;"));

        horizontalLayout_7->addWidget(fourthDeleteButton);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_21);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_22);

        fourthErrorValue = new QLabel(theFourthPointWidget);
        fourthErrorValue->setObjectName("fourthErrorValue");
        fourthErrorValue->setFont(font3);
        fourthErrorValue->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"background-color: rgb(0, 0, 0);\n"
"qproperty-alignment: 'AlignCenter';"));
        fourthErrorValue->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(fourthErrorValue);

        horizontalLayout_7->setStretch(0, 2);
        horizontalLayout_7->setStretch(3, 1);
        horizontalLayout_7->setStretch(6, 3);

        verticalLayout_2->addWidget(theFourthPointWidget);

        theFifthPointWidget = new QWidget(ndiPointsInfoWidget);
        theFifthPointWidget->setObjectName("theFifthPointWidget");
        theFifthPointWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 17, 18);"));
        horizontalLayout_8 = new QHBoxLayout(theFifthPointWidget);
        horizontalLayout_8->setSpacing(4);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        fifth = new QLabel(theFifthPointWidget);
        fifth->setObjectName("fifth");
        fifth->setFont(font2);
        fifth->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"qproperty-alignment: 'AlignCenter';"));
        fifth->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(fifth);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_23);

        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_24);

        fifthDeleteButton = new QPushButton(theFifthPointWidget);
        fifthDeleteButton->setObjectName("fifthDeleteButton");
        sizePolicy1.setHeightForWidth(fifthDeleteButton->sizePolicy().hasHeightForWidth());
        fifthDeleteButton->setSizePolicy(sizePolicy1);
        fifthDeleteButton->setMinimumSize(QSize(15, 15));
        fifthDeleteButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-image: url(:/resource/image/trash.png);\n"
"background-position: center; \n"
"background-repeat: no-repeat;"));

        horizontalLayout_8->addWidget(fifthDeleteButton);

        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_25);

        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_26);

        fifthErrorValue = new QLabel(theFifthPointWidget);
        fifthErrorValue->setObjectName("fifthErrorValue");
        fifthErrorValue->setFont(font3);
        fifthErrorValue->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"background-color: rgb(0, 0, 0);\n"
"qproperty-alignment: 'AlignCenter';"));
        fifthErrorValue->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(fifthErrorValue);

        horizontalLayout_8->setStretch(0, 2);
        horizontalLayout_8->setStretch(3, 1);
        horizontalLayout_8->setStretch(6, 3);

        verticalLayout_2->addWidget(theFifthPointWidget);

        ndiPointsImageWidget = new QWidget(ndiPointsInfoWidget);
        ndiPointsImageWidget->setObjectName("ndiPointsImageWidget");
        ndiPointsImageWidget->setStyleSheet(QString::fromUtf8("border-image: url(:/resource/image/ndipoints.png);\n"
"background-position: center; \n"
"background-repeat: no-repeat;"));

        verticalLayout_2->addWidget(ndiPointsImageWidget);

        verticalLayout_2->setStretch(0, 2);
        verticalLayout_2->setStretch(1, 2);
        verticalLayout_2->setStretch(2, 2);
        verticalLayout_2->setStretch(3, 2);
        verticalLayout_2->setStretch(4, 2);
        verticalLayout_2->setStretch(5, 2);
        verticalLayout_2->setStretch(6, 13);

        verticalLayout_3->addWidget(ndiPointsInfoWidget);

        reregistrateButton = new QPushButton(RegistrationWidget);
        reregistrateButton->setObjectName("reregistrateButton");
        sizePolicy1.setHeightForWidth(reregistrateButton->sizePolicy().hasHeightForWidth());
        reregistrateButton->setSizePolicy(sizePolicy1);
        reregistrateButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        verticalLayout_3->addWidget(reregistrateButton);

        spaceWidget = new QWidget(RegistrationWidget);
        spaceWidget->setObjectName("spaceWidget");

        verticalLayout_3->addWidget(spaceWidget);

        frame_3 = new QFrame(RegistrationWidget);
        frame_3->setObjectName("frame_3");
        sizePolicy.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy);
        frame_3->setStyleSheet(QString::fromUtf8("QFrame{background:23, 23, 26;min-height:5px;color:white}"));
        frame_3->setFrameShape(QFrame::HLine);
        frame_3->setFrameShadow(QFrame::Plain);
        frame_3->setLineWidth(1);

        verticalLayout_3->addWidget(frame_3);

        buttonWidget = new QWidget(RegistrationWidget);
        buttonWidget->setObjectName("buttonWidget");
        horizontalLayout_2 = new QHBoxLayout(buttonWidget);
        horizontalLayout_2->setSpacing(200);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        backButton = new QPushButton(buttonWidget);
        backButton->setObjectName("backButton");
        sizePolicy1.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy1);
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

        horizontalLayout_2->addWidget(backButton);

        nextButton = new QPushButton(buttonWidget);
        nextButton->setObjectName("nextButton");
        sizePolicy1.setHeightForWidth(nextButton->sizePolicy().hasHeightForWidth());
        nextButton->setSizePolicy(sizePolicy1);
        nextButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_2->addWidget(nextButton);


        verticalLayout_3->addWidget(buttonWidget);

        verticalLayout_3->setStretch(1, 4);
        verticalLayout_3->setStretch(3, 8);
        verticalLayout_3->setStretch(4, 6);
        verticalLayout_3->setStretch(5, 60);
        verticalLayout_3->setStretch(6, 3);
        verticalLayout_3->setStretch(7, 16);
        verticalLayout_3->setStretch(9, 2);

        retranslateUi(RegistrationWidget);

        QMetaObject::connectSlotsByName(RegistrationWidget);
    } // setupUi

    void retranslateUi(QWidget *RegistrationWidget)
    {
        RegistrationWidget->setWindowTitle(QCoreApplication::translate("RegistrationWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("RegistrationWidget", "\350\257\267\345\257\274\345\205\245\345\275\261\345\203\217", nullptr));
        imageInputButton->setText(QCoreApplication::translate("RegistrationWidget", "\345\257\274\345\205\245", nullptr));
        maxErrorText->setText(QCoreApplication::translate("RegistrationWidget", "\346\234\200\345\244\247\350\257\257\345\267\256 mm", nullptr));
        maxErrorValue->setText(QCoreApplication::translate("RegistrationWidget", "20.09", nullptr));
        meanErrorValue->setText(QCoreApplication::translate("RegistrationWidget", "0.72", nullptr));
        meanErrorText->setText(QCoreApplication::translate("RegistrationWidget", "\345\271\263\345\235\207\350\257\257\345\267\256 mm", nullptr));
        identifyRegistrationPointsButton->setText(QCoreApplication::translate("RegistrationWidget", "\350\207\252\345\212\250\350\257\206\345\210\253\351\205\215\345\207\206\347\202\271", nullptr));
        upButton->setText(QString());
        pickUpRegistrationPointsButton->setText(QCoreApplication::translate("RegistrationWidget", "\346\211\213\345\212\250\346\213\276\345\217\226\351\205\215\345\207\206\347\202\271", nullptr));
        downButton->setText(QString());
        indexText->setText(QCoreApplication::translate("RegistrationWidget", "\345\272\217\345\217\267", nullptr));
        imageText->setText(QCoreApplication::translate("RegistrationWidget", "\345\233\276\345\203\217", nullptr));
        errorValueText->setText(QCoreApplication::translate("RegistrationWidget", "\350\257\257\345\267\256\345\200\274/mm", nullptr));
        first->setText(QCoreApplication::translate("RegistrationWidget", "1", nullptr));
        firstDeleteButton->setText(QString());
        firstErrorValue->setText(QCoreApplication::translate("RegistrationWidget", "0.91", nullptr));
        second->setText(QCoreApplication::translate("RegistrationWidget", "2", nullptr));
        secondDeleteButton->setText(QString());
        secondErrorValue->setText(QCoreApplication::translate("RegistrationWidget", "0.38", nullptr));
        third->setText(QCoreApplication::translate("RegistrationWidget", "3", nullptr));
        thirdDeleteButton->setText(QString());
        thirdErrorValue->setText(QCoreApplication::translate("RegistrationWidget", "0.96", nullptr));
        fourth->setText(QCoreApplication::translate("RegistrationWidget", "4", nullptr));
        fourthDeleteButton->setText(QString());
        fourthErrorValue->setText(QCoreApplication::translate("RegistrationWidget", "0.72", nullptr));
        fifth->setText(QCoreApplication::translate("RegistrationWidget", "5", nullptr));
        fifthDeleteButton->setText(QString());
        fifthErrorValue->setText(QCoreApplication::translate("RegistrationWidget", "0.61", nullptr));
        reregistrateButton->setText(QCoreApplication::translate("RegistrationWidget", "\351\207\215\346\226\260\351\205\215\345\207\206", nullptr));
        backButton->setText(QCoreApplication::translate("RegistrationWidget", "\350\277\224\345\233\236", nullptr));
        nextButton->setText(QCoreApplication::translate("RegistrationWidget", "\344\270\213\344\270\200\346\255\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistrationWidget: public Ui_RegistrationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONWIDGET_H
