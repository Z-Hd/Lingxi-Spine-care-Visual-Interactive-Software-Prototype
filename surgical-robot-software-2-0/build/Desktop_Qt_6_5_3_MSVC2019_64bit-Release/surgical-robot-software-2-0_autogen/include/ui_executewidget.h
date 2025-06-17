/********************************************************************************
** Form generated from reading UI file 'executewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXECUTEWIDGET_H
#define UI_EXECUTEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExecuteWidget
{
public:
    QVBoxLayout *verticalLayout_7;
    QWidget *ioErrorWidget;
    QHBoxLayout *horizontalLayout_3;
    QWidget *inWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *inErrorText;
    QSpacerItem *verticalSpacer;
    QLabel *inErrorValue;
    QLabel *mmInErrorText;
    QWidget *outWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *outErrorText;
    QSpacerItem *verticalSpacer_2;
    QLabel *outErrorValue;
    QLabel *mmOutErrorText;
    QFrame *frame_3;
    QWidget *endWidget;
    QHBoxLayout *horizontalLayout_8;
    QWidget *endInfoWidget;
    QVBoxLayout *verticalLayout_6;
    QWidget *distanceWidget;
    QVBoxLayout *verticalLayout_4;
    QWidget *distanceInfoWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *distanceText;
    QLabel *distanceValue;
    QLabel *mmdistanceText;
    QWidget *distanceChangeWidget;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *distanceDownButton;
    QSlider *distanceSlider;
    QPushButton *distanceUpButton;
    QWidget *angleWidget;
    QVBoxLayout *verticalLayout_5;
    QWidget *angleInfoWidget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *angleText;
    QLabel *angleValue;
    QLabel *mmAngleText;
    QWidget *angleChangeWidget;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *angleDownButton;
    QSlider *angleSlider;
    QPushButton *angleUpButton;
    QWidget *endControlWidget;
    QVBoxLayout *verticalLayout;
    QLabel *endControlText;
    QPushButton *switchButton;
    QFrame *frame_2;
    QWidget *opWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *simulationButton;
    QPushButton *executeButton;
    QWidget *somethingWidget;
    QWidget *spaceWidget;
    QPushButton *opRouteButton;
    QWidget *spaceWidget_2;
    QFrame *frame;
    QWidget *buttonWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *backButton;

    void setupUi(QWidget *ExecuteWidget)
    {
        if (ExecuteWidget->objectName().isEmpty())
            ExecuteWidget->setObjectName("ExecuteWidget");
        ExecuteWidget->resize(554, 1013);
        ExecuteWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 17, 18);"));
        verticalLayout_7 = new QVBoxLayout(ExecuteWidget);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(15, 20, 15, 10);
        ioErrorWidget = new QWidget(ExecuteWidget);
        ioErrorWidget->setObjectName("ioErrorWidget");
        horizontalLayout_3 = new QHBoxLayout(ioErrorWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        inWidget = new QWidget(ioErrorWidget);
        inWidget->setObjectName("inWidget");
        verticalLayout_2 = new QVBoxLayout(inWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(40, 0, 25, 0);
        inErrorText = new QLabel(inWidget);
        inErrorText->setObjectName("inErrorText");
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        inErrorText->setFont(font);
        inErrorText->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"qproperty-alignment: 'AlignCenter';"));
        inErrorText->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(inErrorText);

        verticalSpacer = new QSpacerItem(20, 36, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        inErrorValue = new QLabel(inWidget);
        inErrorValue->setObjectName("inErrorValue");
        inErrorValue->setFont(font);
        inErrorValue->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"qproperty-alignment: 'AlignCenter';"));
        inErrorValue->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(inErrorValue);

        mmInErrorText = new QLabel(inWidget);
        mmInErrorText->setObjectName("mmInErrorText");
        mmInErrorText->setFont(font);
        mmInErrorText->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"qproperty-alignment: 'AlignCenter';"));
        mmInErrorText->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(mmInErrorText);


        horizontalLayout_3->addWidget(inWidget);

        outWidget = new QWidget(ioErrorWidget);
        outWidget->setObjectName("outWidget");
        verticalLayout_3 = new QVBoxLayout(outWidget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(25, 0, 40, 0);
        outErrorText = new QLabel(outWidget);
        outErrorText->setObjectName("outErrorText");
        outErrorText->setFont(font);
        outErrorText->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"qproperty-alignment: 'AlignCenter';"));
        outErrorText->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(outErrorText);

        verticalSpacer_2 = new QSpacerItem(20, 36, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        outErrorValue = new QLabel(outWidget);
        outErrorValue->setObjectName("outErrorValue");
        outErrorValue->setFont(font);
        outErrorValue->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"qproperty-alignment: 'AlignCenter';"));
        outErrorValue->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(outErrorValue);

        mmOutErrorText = new QLabel(outWidget);
        mmOutErrorText->setObjectName("mmOutErrorText");
        mmOutErrorText->setFont(font);
        mmOutErrorText->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"qproperty-alignment: 'AlignCenter';"));
        mmOutErrorText->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(mmOutErrorText);


        horizontalLayout_3->addWidget(outWidget);


        verticalLayout_7->addWidget(ioErrorWidget);

        frame_3 = new QFrame(ExecuteWidget);
        frame_3->setObjectName("frame_3");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy);
        frame_3->setStyleSheet(QString::fromUtf8("QFrame{background:23, 23, 26;min-height:5px;color:white}"));
        frame_3->setFrameShape(QFrame::HLine);
        frame_3->setFrameShadow(QFrame::Plain);
        frame_3->setLineWidth(1);

        verticalLayout_7->addWidget(frame_3);

        endWidget = new QWidget(ExecuteWidget);
        endWidget->setObjectName("endWidget");
        endWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        horizontalLayout_8 = new QHBoxLayout(endWidget);
        horizontalLayout_8->setSpacing(1);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        endInfoWidget = new QWidget(endWidget);
        endInfoWidget->setObjectName("endInfoWidget");
        endInfoWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 17, 18);"));
        verticalLayout_6 = new QVBoxLayout(endInfoWidget);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        distanceWidget = new QWidget(endInfoWidget);
        distanceWidget->setObjectName("distanceWidget");
        verticalLayout_4 = new QVBoxLayout(distanceWidget);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        distanceInfoWidget = new QWidget(distanceWidget);
        distanceInfoWidget->setObjectName("distanceInfoWidget");
        horizontalLayout_4 = new QHBoxLayout(distanceInfoWidget);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 100, 0);
        distanceText = new QLabel(distanceInfoWidget);
        distanceText->setObjectName("distanceText");
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        distanceText->setFont(font1);
        distanceText->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"qproperty-alignment: 'AlignCenter';"));
        distanceText->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(distanceText);

        distanceValue = new QLabel(distanceInfoWidget);
        distanceValue->setObjectName("distanceValue");
        distanceValue->setFont(font1);
        distanceValue->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"qproperty-alignment: 'AlignCenter';"));
        distanceValue->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(distanceValue);

        mmdistanceText = new QLabel(distanceInfoWidget);
        mmdistanceText->setObjectName("mmdistanceText");
        mmdistanceText->setFont(font1);
        mmdistanceText->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"qproperty-alignment: 'AlignCenter';"));
        mmdistanceText->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(mmdistanceText);


        verticalLayout_4->addWidget(distanceInfoWidget);

        distanceChangeWidget = new QWidget(distanceWidget);
        distanceChangeWidget->setObjectName("distanceChangeWidget");
        horizontalLayout_5 = new QHBoxLayout(distanceChangeWidget);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(12, 0, 12, 0);
        distanceDownButton = new QPushButton(distanceChangeWidget);
        distanceDownButton->setObjectName("distanceDownButton");
        QFont font2;
        font2.setBold(true);
        distanceDownButton->setFont(font2);
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

        distanceSlider = new QSlider(distanceChangeWidget);
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

        distanceUpButton = new QPushButton(distanceChangeWidget);
        distanceUpButton->setObjectName("distanceUpButton");
        distanceUpButton->setFont(font2);
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


        verticalLayout_4->addWidget(distanceChangeWidget);


        verticalLayout_6->addWidget(distanceWidget);

        angleWidget = new QWidget(endInfoWidget);
        angleWidget->setObjectName("angleWidget");
        angleWidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_5 = new QVBoxLayout(angleWidget);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        angleInfoWidget = new QWidget(angleWidget);
        angleInfoWidget->setObjectName("angleInfoWidget");
        horizontalLayout_6 = new QHBoxLayout(angleInfoWidget);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 100, 0);
        angleText = new QLabel(angleInfoWidget);
        angleText->setObjectName("angleText");
        angleText->setFont(font1);
        angleText->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"qproperty-alignment: 'AlignCenter';"));
        angleText->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(angleText);

        angleValue = new QLabel(angleInfoWidget);
        angleValue->setObjectName("angleValue");
        angleValue->setFont(font1);
        angleValue->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"qproperty-alignment: 'AlignCenter';"));
        angleValue->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(angleValue);

        mmAngleText = new QLabel(angleInfoWidget);
        mmAngleText->setObjectName("mmAngleText");
        mmAngleText->setFont(font1);
        mmAngleText->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"qproperty-alignment: 'AlignCenter';"));
        mmAngleText->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(mmAngleText);


        verticalLayout_5->addWidget(angleInfoWidget);

        angleChangeWidget = new QWidget(angleWidget);
        angleChangeWidget->setObjectName("angleChangeWidget");
        horizontalLayout_7 = new QHBoxLayout(angleChangeWidget);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(12, 0, 12, 0);
        angleDownButton = new QPushButton(angleChangeWidget);
        angleDownButton->setObjectName("angleDownButton");
        angleDownButton->setFont(font2);
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

        horizontalLayout_7->addWidget(angleDownButton);

        angleSlider = new QSlider(angleChangeWidget);
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
        angleSlider->setMaximum(500);
        angleSlider->setPageStep(7);
        angleSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(angleSlider);

        angleUpButton = new QPushButton(angleChangeWidget);
        angleUpButton->setObjectName("angleUpButton");
        angleUpButton->setFont(font2);
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

        horizontalLayout_7->addWidget(angleUpButton);


        verticalLayout_5->addWidget(angleChangeWidget);


        verticalLayout_6->addWidget(angleWidget);


        horizontalLayout_8->addWidget(endInfoWidget);

        endControlWidget = new QWidget(endWidget);
        endControlWidget->setObjectName("endControlWidget");
        endControlWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 17, 18);"));
        verticalLayout = new QVBoxLayout(endControlWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(15, 45, 15, 45);
        endControlText = new QLabel(endControlWidget);
        endControlText->setObjectName("endControlText");
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        endControlText->setFont(font3);
        endControlText->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"qproperty-alignment: 'AlignCenter';"));
        endControlText->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(endControlText);

        switchButton = new QPushButton(endControlWidget);
        switchButton->setObjectName("switchButton");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(switchButton->sizePolicy().hasHeightForWidth());
        switchButton->setSizePolicy(sizePolicy1);
        switchButton->setStyleSheet(QString::fromUtf8("border-image: url(:/resource/image/switchbuttonclose.png);\n"
"background-position: center; \n"
"background-repeat: no-repeat;"));

        verticalLayout->addWidget(switchButton);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);

        horizontalLayout_8->addWidget(endControlWidget);

        horizontalLayout_8->setStretch(0, 3);
        horizontalLayout_8->setStretch(1, 1);

        verticalLayout_7->addWidget(endWidget);

        frame_2 = new QFrame(ExecuteWidget);
        frame_2->setObjectName("frame_2");
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setStyleSheet(QString::fromUtf8("QFrame{background:23, 23, 26;min-height:5px;color:white}"));
        frame_2->setFrameShape(QFrame::HLine);
        frame_2->setFrameShadow(QFrame::Plain);
        frame_2->setLineWidth(1);

        verticalLayout_7->addWidget(frame_2);

        opWidget = new QWidget(ExecuteWidget);
        opWidget->setObjectName("opWidget");
        horizontalLayout_2 = new QHBoxLayout(opWidget);
        horizontalLayout_2->setSpacing(150);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(25, 0, 25, 0);
        simulationButton = new QPushButton(opWidget);
        simulationButton->setObjectName("simulationButton");
        sizePolicy1.setHeightForWidth(simulationButton->sizePolicy().hasHeightForWidth());
        simulationButton->setSizePolicy(sizePolicy1);
        simulationButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_2->addWidget(simulationButton);

        executeButton = new QPushButton(opWidget);
        executeButton->setObjectName("executeButton");
        sizePolicy1.setHeightForWidth(executeButton->sizePolicy().hasHeightForWidth());
        executeButton->setSizePolicy(sizePolicy1);
        executeButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_2->addWidget(executeButton);


        verticalLayout_7->addWidget(opWidget);

        somethingWidget = new QWidget(ExecuteWidget);
        somethingWidget->setObjectName("somethingWidget");
        somethingWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 25, 26);\n"
"border: 1px solid #BDBDBD;  /* \346\265\205\351\223\266\347\201\260\350\211\262 */\n"
"border-radius: 4px;\n"
"padding: 5px;               /* \345\206\205\350\276\271\350\267\235 */"));

        verticalLayout_7->addWidget(somethingWidget);

        spaceWidget = new QWidget(ExecuteWidget);
        spaceWidget->setObjectName("spaceWidget");

        verticalLayout_7->addWidget(spaceWidget);

        opRouteButton = new QPushButton(ExecuteWidget);
        opRouteButton->setObjectName("opRouteButton");
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

        verticalLayout_7->addWidget(opRouteButton);

        spaceWidget_2 = new QWidget(ExecuteWidget);
        spaceWidget_2->setObjectName("spaceWidget_2");

        verticalLayout_7->addWidget(spaceWidget_2);

        frame = new QFrame(ExecuteWidget);
        frame->setObjectName("frame");
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setStyleSheet(QString::fromUtf8("QFrame{background:23, 23, 26;min-height:5px;color:white}"));
        frame->setFrameShape(QFrame::HLine);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(1);

        verticalLayout_7->addWidget(frame);

        buttonWidget = new QWidget(ExecuteWidget);
        buttonWidget->setObjectName("buttonWidget");
        horizontalLayout = new QHBoxLayout(buttonWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 321, 0);
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

        horizontalLayout->addWidget(backButton);


        verticalLayout_7->addWidget(buttonWidget);

        verticalLayout_7->setStretch(0, 6);
        verticalLayout_7->setStretch(2, 9);
        verticalLayout_7->setStretch(4, 2);
        verticalLayout_7->setStretch(5, 4);
        verticalLayout_7->setStretch(6, 2);
        verticalLayout_7->setStretch(7, 3);
        verticalLayout_7->setStretch(8, 15);
        verticalLayout_7->setStretch(10, 2);

        retranslateUi(ExecuteWidget);

        QMetaObject::connectSlotsByName(ExecuteWidget);
    } // setupUi

    void retranslateUi(QWidget *ExecuteWidget)
    {
        ExecuteWidget->setWindowTitle(QCoreApplication::translate("ExecuteWidget", "Form", nullptr));
        inErrorText->setText(QCoreApplication::translate("ExecuteWidget", "\345\205\245\347\202\271\345\201\217\345\267\256", nullptr));
        inErrorValue->setText(QCoreApplication::translate("ExecuteWidget", "--", nullptr));
        mmInErrorText->setText(QCoreApplication::translate("ExecuteWidget", "mm", nullptr));
        outErrorText->setText(QCoreApplication::translate("ExecuteWidget", "\345\207\272\347\202\271\345\201\217\345\267\256", nullptr));
        outErrorValue->setText(QCoreApplication::translate("ExecuteWidget", "--", nullptr));
        mmOutErrorText->setText(QCoreApplication::translate("ExecuteWidget", "mm", nullptr));
        distanceText->setText(QCoreApplication::translate("ExecuteWidget", "\350\267\235\347\246\273", nullptr));
        distanceValue->setText(QCoreApplication::translate("ExecuteWidget", "0", nullptr));
        mmdistanceText->setText(QCoreApplication::translate("ExecuteWidget", "mm", nullptr));
        distanceDownButton->setText(QCoreApplication::translate("ExecuteWidget", "-", nullptr));
        distanceUpButton->setText(QCoreApplication::translate("ExecuteWidget", "+", nullptr));
        angleText->setText(QCoreApplication::translate("ExecuteWidget", "\350\247\222\345\272\246", nullptr));
        angleValue->setText(QCoreApplication::translate("ExecuteWidget", "0", nullptr));
        mmAngleText->setText(QCoreApplication::translate("ExecuteWidget", "\302\260", nullptr));
        angleDownButton->setText(QCoreApplication::translate("ExecuteWidget", "-", nullptr));
        angleUpButton->setText(QCoreApplication::translate("ExecuteWidget", "+", nullptr));
        endControlText->setText(QCoreApplication::translate("ExecuteWidget", "\346\234\253\347\253\257\346\216\247\345\210\266", nullptr));
        switchButton->setText(QString());
        simulationButton->setText(QCoreApplication::translate("ExecuteWidget", "\346\250\241\346\213\237", nullptr));
        executeButton->setText(QCoreApplication::translate("ExecuteWidget", "\346\211\247\350\241\214", nullptr));
        opRouteButton->setText(QCoreApplication::translate("ExecuteWidget", "L5-L", nullptr));
        backButton->setText(QCoreApplication::translate("ExecuteWidget", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExecuteWidget: public Ui_ExecuteWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXECUTEWIDGET_H
