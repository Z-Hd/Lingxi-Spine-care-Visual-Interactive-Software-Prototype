/********************************************************************************
** Form generated from reading UI file 'routeplan1widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROUTEPLAN1WIDGET_H
#define UI_ROUTEPLAN1WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RoutePlan1Widget
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QWidget *littleSpineImageWidget;
    QWidget *QLabelWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QPushButton *switchButton;
    QFrame *frame;
    QWidget *opWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addRouteButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *withDrawButton;
    QPushButton *goForwardButton;
    QWidget *spaceWidget;
    QFrame *frame_2;
    QWidget *buttonWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *backButton;
    QPushButton *nextButton;

    void setupUi(QWidget *RoutePlan1Widget)
    {
        if (RoutePlan1Widget->objectName().isEmpty())
            RoutePlan1Widget->setObjectName("RoutePlan1Widget");
        RoutePlan1Widget->resize(473, 874);
        RoutePlan1Widget->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 17, 18);"));
        verticalLayout_2 = new QVBoxLayout(RoutePlan1Widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(15, 20, 15, 10);
        widget = new QWidget(RoutePlan1Widget);
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
        label = new QLabel(QLabelWidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"qproperty-alignment: 'AlignLeft | AlignVCenter';"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(QLabelWidget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"qproperty-alignment: 'AlignLeft | AlignVCenter';"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(label_2);


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

        verticalLayout_2->addWidget(widget);

        frame = new QFrame(RoutePlan1Widget);
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

        verticalLayout_2->addWidget(frame);

        opWidget = new QWidget(RoutePlan1Widget);
        opWidget->setObjectName("opWidget");
        horizontalLayout_2 = new QHBoxLayout(opWidget);
        horizontalLayout_2->setSpacing(1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        addRouteButton = new QPushButton(opWidget);
        addRouteButton->setObjectName("addRouteButton");
        sizePolicy.setHeightForWidth(addRouteButton->sizePolicy().hasHeightForWidth());
        addRouteButton->setSizePolicy(sizePolicy);
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

        verticalLayout_2->addWidget(opWidget);

        spaceWidget = new QWidget(RoutePlan1Widget);
        spaceWidget->setObjectName("spaceWidget");

        verticalLayout_2->addWidget(spaceWidget);

        frame_2 = new QFrame(RoutePlan1Widget);
        frame_2->setObjectName("frame_2");
        sizePolicy1.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy1);
        frame_2->setStyleSheet(QString::fromUtf8("QFrame{background:23, 23, 26;min-height:5px;color:white}"));
        frame_2->setFrameShape(QFrame::HLine);
        frame_2->setFrameShadow(QFrame::Plain);
        frame_2->setLineWidth(1);

        verticalLayout_2->addWidget(frame_2);

        buttonWidget = new QWidget(RoutePlan1Widget);
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


        verticalLayout_2->addWidget(buttonWidget);

        verticalLayout_2->setStretch(0, 3);
        verticalLayout_2->setStretch(2, 2);
        verticalLayout_2->setStretch(3, 50);
        verticalLayout_2->setStretch(5, 2);

        retranslateUi(RoutePlan1Widget);

        QMetaObject::connectSlotsByName(RoutePlan1Widget);
    } // setupUi

    void retranslateUi(QWidget *RoutePlan1Widget)
    {
        RoutePlan1Widget->setWindowTitle(QCoreApplication::translate("RoutePlan1Widget", "Form", nullptr));
        label->setText(QCoreApplication::translate("RoutePlan1Widget", "\350\231\232\346\213\237\345\205\245\350\267\257", nullptr));
        label_2->setText(QCoreApplication::translate("RoutePlan1Widget", "1.\345\267\246\351\224\256\351\200\211\346\213\251\345\205\245\350\267\257\346\226\271\345\220\221(\344\270\211\347\273\264\350\247\206\345\233\276) 2.\345\276\256\350\260\203\345\205\245\350\267\257", nullptr));
        switchButton->setText(QString());
        addRouteButton->setText(QCoreApplication::translate("RoutePlan1Widget", "\346\267\273\345\212\240\345\205\245\350\267\257", nullptr));
        withDrawButton->setText(QString());
        goForwardButton->setText(QString());
        backButton->setText(QCoreApplication::translate("RoutePlan1Widget", "\350\277\224\345\233\236", nullptr));
        nextButton->setText(QCoreApplication::translate("RoutePlan1Widget", "\344\270\213\344\270\200\346\255\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RoutePlan1Widget: public Ui_RoutePlan1Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROUTEPLAN1WIDGET_H
