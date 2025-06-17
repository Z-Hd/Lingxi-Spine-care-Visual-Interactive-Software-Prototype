/********************************************************************************
** Form generated from reading UI file 'routeplan2widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROUTEPLAN2WIDGET_H
#define UI_ROUTEPLAN2WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RoutePlan2Widget
{
public:
    QVBoxLayout *verticalLayout_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QWidget *littleSpineImageWidget;
    QWidget *QLabelWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *switchButton;
    QFrame *frame;
    QWidget *opWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addRouteButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *withDrawButton;
    QPushButton *goForwardButton;
    QWidget *opRouteWidget;
    QVBoxLayout *verticalLayout_3;
    QWidget *eyeRouteWidget;
    QPushButton *opRouteButton;
    QWidget *spaceWidget_2;
    QWidget *routeWidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *routeNameWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QWidget *spaceWidget_3;
    QWidget *routeInfoWidget;
    QGridLayout *gridLayout_2;
    QLabel *diameterText;
    QComboBox *diameterValue;
    QLabel *mmdiameterText;
    QLabel *lengthText;
    QComboBox *lengthValue;
    QLabel *mmlengthText;
    QWidget *funcWidget;
    QGridLayout *gridLayout;
    QPushButton *funcButton_1;
    QPushButton *funcButton_2;
    QPushButton *funcButton_3;
    QPushButton *funcButton_4;
    QPushButton *funcButton_5;
    QPushButton *funcButton_6;
    QPushButton *funcButton_7;
    QPushButton *funcButton_8;
    QPushButton *funcButton_9;
    QPushButton *funcButton_10;
    QWidget *spaceWidget;
    QFrame *frame_2;
    QWidget *buttonWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *backButton;
    QPushButton *nextButton;

    void setupUi(QWidget *RoutePlan2Widget)
    {
        if (RoutePlan2Widget->objectName().isEmpty())
            RoutePlan2Widget->setObjectName("RoutePlan2Widget");
        RoutePlan2Widget->resize(516, 969);
        RoutePlan2Widget->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 17, 18);"));
        verticalLayout_4 = new QVBoxLayout(RoutePlan2Widget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(15, 20, 15, 10);
        widget = new QWidget(RoutePlan2Widget);
        widget->setObjectName("widget");
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        littleSpineImageWidget = new QWidget(widget);
        littleSpineImageWidget->setObjectName("littleSpineImageWidget");
        littleSpineImageWidget->setStyleSheet(QString::fromUtf8("border-image: url(:/resource/image/littlespine.png);\n"
"background-position: center; \n"
"background-repeat: no-repeat;"));

        horizontalLayout_4->addWidget(littleSpineImageWidget);

        QLabelWidget = new QWidget(widget);
        QLabelWidget->setObjectName("QLabelWidget");
        verticalLayout = new QVBoxLayout(QLabelWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(QLabelWidget);
        label_2->setObjectName("label_2");
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(false);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"qproperty-alignment: 'AlignLeft | AlignVCenter';"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(QLabelWidget);
        label_3->setObjectName("label_3");
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"qproperty-alignment: 'AlignLeft | AlignVCenter';"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(label_3);


        horizontalLayout_4->addWidget(QLabelWidget);

        switchButton = new QPushButton(widget);
        switchButton->setObjectName("switchButton");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(switchButton->sizePolicy().hasHeightForWidth());
        switchButton->setSizePolicy(sizePolicy);
        switchButton->setStyleSheet(QString::fromUtf8("border-image: url(:/resource/image/switchbuttonclose.png);\n"
"background-position: center; \n"
"background-repeat: no-repeat;"));

        horizontalLayout_4->addWidget(switchButton);

        horizontalLayout_4->setStretch(0, 5);
        horizontalLayout_4->setStretch(1, 40);
        horizontalLayout_4->setStretch(2, 12);

        verticalLayout_4->addWidget(widget);

        frame = new QFrame(RoutePlan2Widget);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setStyleSheet(QString::fromUtf8("QFrame{background:23, 23, 26;min-height:5px;color:white}"));
        frame->setFrameShape(QFrame::HLine);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(1);

        verticalLayout_4->addWidget(frame);

        opWidget = new QWidget(RoutePlan2Widget);
        opWidget->setObjectName("opWidget");
        horizontalLayout_2 = new QHBoxLayout(opWidget);
        horizontalLayout_2->setSpacing(1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        addRouteButton = new QPushButton(opWidget);
        addRouteButton->setObjectName("addRouteButton");
        addRouteButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(32, 34, 37);\n"
"color: rgb(192, 192, 192);\n"
"font-size:16px;\n"
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

        horizontalLayout_2->addWidget(addRouteButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        withDrawButton = new QPushButton(opWidget);
        withDrawButton->setObjectName("withDrawButton");
        sizePolicy.setHeightForWidth(withDrawButton->sizePolicy().hasHeightForWidth());
        withDrawButton->setSizePolicy(sizePolicy);
        withDrawButton->setMinimumSize(QSize(0, 0));
        withDrawButton->setStyleSheet(QString::fromUtf8("border-image: url(:/resource/image/withdraw.png);\n"
"background-position: center; \n"
"background-repeat: no-repeat;"));

        horizontalLayout_2->addWidget(withDrawButton);

        goForwardButton = new QPushButton(opWidget);
        goForwardButton->setObjectName("goForwardButton");
        sizePolicy.setHeightForWidth(goForwardButton->sizePolicy().hasHeightForWidth());
        goForwardButton->setSizePolicy(sizePolicy);
        goForwardButton->setMinimumSize(QSize(0, 0));
        goForwardButton->setStyleSheet(QString::fromUtf8("border-image: url(:/resource/image/goforward.png);\n"
"background-position: center; \n"
"background-repeat: no-repeat;"));

        horizontalLayout_2->addWidget(goForwardButton);

        horizontalLayout_2->setStretch(0, 7);
        horizontalLayout_2->setStretch(2, 1);
        horizontalLayout_2->setStretch(3, 1);

        verticalLayout_4->addWidget(opWidget);

        opRouteWidget = new QWidget(RoutePlan2Widget);
        opRouteWidget->setObjectName("opRouteWidget");
        verticalLayout_3 = new QVBoxLayout(opRouteWidget);
        verticalLayout_3->setSpacing(4);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        eyeRouteWidget = new QWidget(opRouteWidget);
        eyeRouteWidget->setObjectName("eyeRouteWidget");
        eyeRouteWidget->setStyleSheet(QString::fromUtf8("border-image: url(:/resource/image/eye.png);\n"
"background-position: center; \n"
"background-repeat: no-repeat;"));

        verticalLayout_3->addWidget(eyeRouteWidget);

        opRouteButton = new QPushButton(opRouteWidget);
        opRouteButton->setObjectName("opRouteButton");
        QFont font2;
        font2.setBold(true);
        opRouteButton->setFont(font2);
        opRouteButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(74, 79, 84);\n"
"color: rgb(192, 192, 192);\n"
"font-size:18px;\n"
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

        verticalLayout_3->addWidget(opRouteButton);

        verticalLayout_3->setStretch(0, 3);
        verticalLayout_3->setStretch(1, 4);

        verticalLayout_4->addWidget(opRouteWidget);

        spaceWidget_2 = new QWidget(RoutePlan2Widget);
        spaceWidget_2->setObjectName("spaceWidget_2");

        verticalLayout_4->addWidget(spaceWidget_2);

        routeWidget = new QWidget(RoutePlan2Widget);
        routeWidget->setObjectName("routeWidget");
        verticalLayout_2 = new QVBoxLayout(routeWidget);
        verticalLayout_2->setSpacing(8);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        routeNameWidget = new QWidget(routeWidget);
        routeNameWidget->setObjectName("routeNameWidget");
        horizontalLayout_3 = new QHBoxLayout(routeNameWidget);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(routeNameWidget);
        label->setObjectName("label");
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 17, 18);\n"
"color:rgb(220, 220, 220);\n"
"qproperty-alignment: AlignCenter;\n"
"font-size:28px;"));

        horizontalLayout_3->addWidget(label);

        spaceWidget_3 = new QWidget(routeNameWidget);
        spaceWidget_3->setObjectName("spaceWidget_3");

        horizontalLayout_3->addWidget(spaceWidget_3);

        horizontalLayout_3->setStretch(0, 2);
        horizontalLayout_3->setStretch(1, 5);

        verticalLayout_2->addWidget(routeNameWidget);

        routeInfoWidget = new QWidget(routeWidget);
        routeInfoWidget->setObjectName("routeInfoWidget");
        gridLayout_2 = new QGridLayout(routeInfoWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(4);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        diameterText = new QLabel(routeInfoWidget);
        diameterText->setObjectName("diameterText");
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        diameterText->setFont(font3);
        diameterText->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"qproperty-alignment: 'AlignCenter';"));
        diameterText->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(diameterText, 0, 0, 1, 1);

        diameterValue = new QComboBox(routeInfoWidget);
        diameterValue->setObjectName("diameterValue");
        sizePolicy.setHeightForWidth(diameterValue->sizePolicy().hasHeightForWidth());
        diameterValue->setSizePolicy(sizePolicy);
        diameterValue->setFont(font3);
        diameterValue->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 85);\n"
"color: rgb(255, 255, 255);\n"
"border: none;\n"
"text-align: center"));
        diameterValue->setMaxVisibleItems(10);

        gridLayout_2->addWidget(diameterValue, 0, 1, 1, 1);

        mmdiameterText = new QLabel(routeInfoWidget);
        mmdiameterText->setObjectName("mmdiameterText");
        mmdiameterText->setFont(font3);
        mmdiameterText->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"qproperty-alignment: 'AlignCenter';"));
        mmdiameterText->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(mmdiameterText, 0, 2, 1, 1);

        lengthText = new QLabel(routeInfoWidget);
        lengthText->setObjectName("lengthText");
        lengthText->setFont(font3);
        lengthText->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"qproperty-alignment: 'AlignCenter';"));
        lengthText->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lengthText, 1, 0, 1, 1);

        lengthValue = new QComboBox(routeInfoWidget);
        lengthValue->setObjectName("lengthValue");
        sizePolicy.setHeightForWidth(lengthValue->sizePolicy().hasHeightForWidth());
        lengthValue->setSizePolicy(sizePolicy);
        lengthValue->setFont(font3);
        lengthValue->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 85);\n"
"color: rgb(255, 255, 255);\n"
"border: none;\n"
"text-align: center"));

        gridLayout_2->addWidget(lengthValue, 1, 1, 1, 1);

        mmlengthText = new QLabel(routeInfoWidget);
        mmlengthText->setObjectName("mmlengthText");
        mmlengthText->setFont(font3);
        mmlengthText->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"qproperty-alignment: 'AlignCenter';"));
        mmlengthText->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(mmlengthText, 1, 2, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 3);
        gridLayout_2->setColumnStretch(2, 1);

        verticalLayout_2->addWidget(routeInfoWidget);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 2);

        verticalLayout_4->addWidget(routeWidget);

        funcWidget = new QWidget(RoutePlan2Widget);
        funcWidget->setObjectName("funcWidget");
        gridLayout = new QGridLayout(funcWidget);
        gridLayout->setSpacing(8);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(60, 2, 60, 0);
        funcButton_1 = new QPushButton(funcWidget);
        funcButton_1->setObjectName("funcButton_1");
        sizePolicy.setHeightForWidth(funcButton_1->sizePolicy().hasHeightForWidth());
        funcButton_1->setSizePolicy(sizePolicy);
        funcButton_1->setMinimumSize(QSize(0, 0));
        funcButton_1->setStyleSheet(QString::fromUtf8("border-image: url(:/resource/image/func1.png);\n"
"background-position: center; \n"
"background-repeat: no-repeat;\n"
"background-color: rgb(41, 45, 49);"));

        gridLayout->addWidget(funcButton_1, 0, 0, 1, 1);

        funcButton_2 = new QPushButton(funcWidget);
        funcButton_2->setObjectName("funcButton_2");
        sizePolicy.setHeightForWidth(funcButton_2->sizePolicy().hasHeightForWidth());
        funcButton_2->setSizePolicy(sizePolicy);
        funcButton_2->setMinimumSize(QSize(0, 0));
        funcButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/resource/image/func2.png);\n"
"background-position: center; \n"
"background-repeat: no-repeat;\n"
"background-color: rgb(41, 45, 49);"));

        gridLayout->addWidget(funcButton_2, 0, 1, 1, 1);

        funcButton_3 = new QPushButton(funcWidget);
        funcButton_3->setObjectName("funcButton_3");
        sizePolicy.setHeightForWidth(funcButton_3->sizePolicy().hasHeightForWidth());
        funcButton_3->setSizePolicy(sizePolicy);
        funcButton_3->setMinimumSize(QSize(0, 0));
        funcButton_3->setStyleSheet(QString::fromUtf8("border-image: url(:/resource/image/func3.png);\n"
"background-position: center; \n"
"background-repeat: no-repeat;\n"
"background-color: rgb(41, 45, 49);"));

        gridLayout->addWidget(funcButton_3, 0, 2, 1, 1);

        funcButton_4 = new QPushButton(funcWidget);
        funcButton_4->setObjectName("funcButton_4");
        sizePolicy.setHeightForWidth(funcButton_4->sizePolicy().hasHeightForWidth());
        funcButton_4->setSizePolicy(sizePolicy);
        funcButton_4->setMinimumSize(QSize(0, 0));
        funcButton_4->setStyleSheet(QString::fromUtf8("border-image: url(:/resource/image/func4.png);\n"
"background-position: center; \n"
"background-repeat: no-repeat;\n"
"background-color: rgb(41, 45, 49);"));

        gridLayout->addWidget(funcButton_4, 0, 3, 1, 1);

        funcButton_5 = new QPushButton(funcWidget);
        funcButton_5->setObjectName("funcButton_5");
        sizePolicy.setHeightForWidth(funcButton_5->sizePolicy().hasHeightForWidth());
        funcButton_5->setSizePolicy(sizePolicy);
        funcButton_5->setMinimumSize(QSize(0, 0));
        funcButton_5->setStyleSheet(QString::fromUtf8("border-image: url(:/resource/image/func5.png);\n"
"background-position: center; \n"
"background-repeat: no-repeat;\n"
"background-color: rgb(41, 45, 49);"));

        gridLayout->addWidget(funcButton_5, 0, 4, 1, 1);

        funcButton_6 = new QPushButton(funcWidget);
        funcButton_6->setObjectName("funcButton_6");
        sizePolicy.setHeightForWidth(funcButton_6->sizePolicy().hasHeightForWidth());
        funcButton_6->setSizePolicy(sizePolicy);
        funcButton_6->setMinimumSize(QSize(0, 0));
        funcButton_6->setStyleSheet(QString::fromUtf8("border-image: url(:/resource/image/func6.png);\n"
"background-position: center; \n"
"background-repeat: no-repeat;\n"
"background-color: rgb(41, 45, 49);"));

        gridLayout->addWidget(funcButton_6, 1, 0, 1, 1);

        funcButton_7 = new QPushButton(funcWidget);
        funcButton_7->setObjectName("funcButton_7");
        sizePolicy.setHeightForWidth(funcButton_7->sizePolicy().hasHeightForWidth());
        funcButton_7->setSizePolicy(sizePolicy);
        funcButton_7->setMinimumSize(QSize(0, 0));
        funcButton_7->setStyleSheet(QString::fromUtf8("border-image: url(:/resource/image/func7.png);\n"
"background-position: center; \n"
"background-repeat: no-repeat;\n"
"background-color: rgb(41, 45, 49);"));

        gridLayout->addWidget(funcButton_7, 1, 1, 1, 1);

        funcButton_8 = new QPushButton(funcWidget);
        funcButton_8->setObjectName("funcButton_8");
        sizePolicy.setHeightForWidth(funcButton_8->sizePolicy().hasHeightForWidth());
        funcButton_8->setSizePolicy(sizePolicy);
        funcButton_8->setMinimumSize(QSize(0, 0));
        funcButton_8->setStyleSheet(QString::fromUtf8("border-image: url(:/resource/image/func8.png);\n"
"background-position: center; \n"
"background-repeat: no-repeat;\n"
"background-color: rgb(41, 45, 49);"));

        gridLayout->addWidget(funcButton_8, 1, 2, 1, 1);

        funcButton_9 = new QPushButton(funcWidget);
        funcButton_9->setObjectName("funcButton_9");
        sizePolicy.setHeightForWidth(funcButton_9->sizePolicy().hasHeightForWidth());
        funcButton_9->setSizePolicy(sizePolicy);
        funcButton_9->setMinimumSize(QSize(0, 0));
        funcButton_9->setStyleSheet(QString::fromUtf8("border-image: url(:/resource/image/func9.png);\n"
"background-position: center; \n"
"background-repeat: no-repeat;\n"
"background-color: rgb(41, 45, 49);"));

        gridLayout->addWidget(funcButton_9, 1, 3, 1, 1);

        funcButton_10 = new QPushButton(funcWidget);
        funcButton_10->setObjectName("funcButton_10");
        sizePolicy.setHeightForWidth(funcButton_10->sizePolicy().hasHeightForWidth());
        funcButton_10->setSizePolicy(sizePolicy);
        funcButton_10->setMinimumSize(QSize(0, 0));
        funcButton_10->setStyleSheet(QString::fromUtf8("border-image: url(:/resource/image/func10.png);\n"
"background-position: center; \n"
"background-repeat: no-repeat;\n"
"background-color: rgb(41, 45, 49);"));

        gridLayout->addWidget(funcButton_10, 1, 4, 1, 1);


        verticalLayout_4->addWidget(funcWidget);

        spaceWidget = new QWidget(RoutePlan2Widget);
        spaceWidget->setObjectName("spaceWidget");

        verticalLayout_4->addWidget(spaceWidget);

        frame_2 = new QFrame(RoutePlan2Widget);
        frame_2->setObjectName("frame_2");
        sizePolicy1.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy1);
        frame_2->setStyleSheet(QString::fromUtf8("QFrame{background:23, 23, 26;min-height:5px;color:white}"));
        frame_2->setFrameShape(QFrame::HLine);
        frame_2->setFrameShadow(QFrame::Plain);
        frame_2->setLineWidth(1);

        verticalLayout_4->addWidget(frame_2);

        buttonWidget = new QWidget(RoutePlan2Widget);
        buttonWidget->setObjectName("buttonWidget");
        horizontalLayout = new QHBoxLayout(buttonWidget);
        horizontalLayout->setSpacing(200);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        backButton = new QPushButton(buttonWidget);
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

        nextButton = new QPushButton(buttonWidget);
        nextButton->setObjectName("nextButton");
        sizePolicy.setHeightForWidth(nextButton->sizePolicy().hasHeightForWidth());
        nextButton->setSizePolicy(sizePolicy);
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

        horizontalLayout->addWidget(nextButton);


        verticalLayout_4->addWidget(buttonWidget);

        verticalLayout_4->setStretch(0, 3);
        verticalLayout_4->setStretch(2, 2);
        verticalLayout_4->setStretch(3, 6);
        verticalLayout_4->setStretch(4, 12);
        verticalLayout_4->setStretch(5, 13);
        verticalLayout_4->setStretch(6, 8);
        verticalLayout_4->setStretch(7, 10);
        verticalLayout_4->setStretch(9, 2);

        retranslateUi(RoutePlan2Widget);

        QMetaObject::connectSlotsByName(RoutePlan2Widget);
    } // setupUi

    void retranslateUi(QWidget *RoutePlan2Widget)
    {
        RoutePlan2Widget->setWindowTitle(QCoreApplication::translate("RoutePlan2Widget", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("RoutePlan2Widget", "\350\231\232\346\213\237\345\205\245\350\267\257", nullptr));
        label_3->setText(QCoreApplication::translate("RoutePlan2Widget", "1.\345\267\246\351\224\256\351\200\211\346\213\251\345\205\245\350\267\257\346\226\271\345\220\221(\344\270\211\347\273\264\350\247\206\345\233\276) 2.\345\276\256\350\260\203\345\205\245\350\267\257", nullptr));
        switchButton->setText(QString());
        addRouteButton->setText(QCoreApplication::translate("RoutePlan2Widget", "\346\267\273\345\212\240\345\205\245\350\267\257", nullptr));
        withDrawButton->setText(QString());
        goForwardButton->setText(QString());
        opRouteButton->setText(QCoreApplication::translate("RoutePlan2Widget", "L5-L", nullptr));
        label->setText(QCoreApplication::translate("RoutePlan2Widget", "\347\254\254\345\207\240\350\212\202\346\244\216\351\252\250", nullptr));
        diameterText->setText(QCoreApplication::translate("RoutePlan2Widget", "\347\233\264\345\276\204", nullptr));
        diameterValue->setPlaceholderText(QCoreApplication::translate("RoutePlan2Widget", "6.00mm", nullptr));
        mmdiameterText->setText(QCoreApplication::translate("RoutePlan2Widget", "mm", nullptr));
        lengthText->setText(QCoreApplication::translate("RoutePlan2Widget", "\351\225\277\345\272\246", nullptr));
        lengthValue->setPlaceholderText(QCoreApplication::translate("RoutePlan2Widget", "45.00mm", nullptr));
        mmlengthText->setText(QCoreApplication::translate("RoutePlan2Widget", "mm", nullptr));
        funcButton_1->setText(QString());
        funcButton_2->setText(QString());
        funcButton_3->setText(QString());
        funcButton_4->setText(QString());
        funcButton_5->setText(QString());
        funcButton_6->setText(QString());
        funcButton_7->setText(QString());
        funcButton_8->setText(QString());
        funcButton_9->setText(QString());
        funcButton_10->setText(QString());
        backButton->setText(QCoreApplication::translate("RoutePlan2Widget", "\350\277\224\345\233\236", nullptr));
        nextButton->setText(QCoreApplication::translate("RoutePlan2Widget", "\344\270\213\344\270\200\346\255\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RoutePlan2Widget: public Ui_RoutePlan2Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROUTEPLAN2WIDGET_H
