/********************************************************************************
** Form generated from reading UI file 'intraoperativewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTRAOPERATIVEWIDGET_H
#define UI_INTRAOPERATIVEWIDGET_H

#include <QtCore/QVariant>
#include <QtMultimediaWidgets/QVideoWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QVTKOpenGLNativeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_IntraoperativeWidget
{
public:
    QGridLayout *gridLayout;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *leftWidget;
    QGridLayout *gridLayout_2;
    QWidget *model3dWidget;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget_4;
    QWidget *Widget1;
    QHBoxLayout *horizontalLayout_3;
    QVTKOpenGLNativeWidget *coronalWidget;
    QSlider *coronalSlider;
    QWidget *Widget2;
    QHBoxLayout *horizontalLayout_5;
    QVTKOpenGLNativeWidget *sagittalWidget;
    QSlider *sagittalSlider;
    QWidget *Widget3;
    QHBoxLayout *horizontalLayout_6;
    QVTKOpenGLNativeWidget *transverseWidget;
    QSlider *transverseSlider;
    QWidget *rightWidget;
    QVBoxLayout *verticalLayout;
    QVideoWidget *endoscopyWidget;
    QWidget *buttonWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *backButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *IntraoperativeWidget)
    {
        if (IntraoperativeWidget->objectName().isEmpty())
            IntraoperativeWidget->setObjectName("IntraoperativeWidget");
        IntraoperativeWidget->resize(890, 546);
        gridLayout = new QGridLayout(IntraoperativeWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 1);
        centralWidget = new QWidget(IntraoperativeWidget);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        leftWidget = new QWidget(centralWidget);
        leftWidget->setObjectName("leftWidget");
        leftWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        gridLayout_2 = new QGridLayout(leftWidget);
        gridLayout_2->setSpacing(2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 2, 0, 2);
        model3dWidget = new QWidget(leftWidget);
        model3dWidget->setObjectName("model3dWidget");
        model3dWidget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_4 = new QHBoxLayout(model3dWidget);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(1, 1, 1, 1);
        widget_4 = new QWidget(model3dWidget);
        widget_4->setObjectName("widget_4");
        widget_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        horizontalLayout_4->addWidget(widget_4);


        gridLayout_2->addWidget(model3dWidget, 1, 1, 1, 1);

        Widget1 = new QWidget(leftWidget);
        Widget1->setObjectName("Widget1");
        Widget1->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_3 = new QHBoxLayout(Widget1);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(1, 1, 1, 1);
        coronalWidget = new QVTKOpenGLNativeWidget(Widget1);
        coronalWidget->setObjectName("coronalWidget");
        coronalWidget->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(coronalWidget);

        coronalSlider = new QSlider(Widget1);
        coronalSlider->setObjectName("coronalSlider");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(coronalSlider->sizePolicy().hasHeightForWidth());
        coronalSlider->setSizePolicy(sizePolicy);
        coronalSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:vertical {\n"
"    background: #000000;    /* \351\273\221\350\211\262\346\273\221\350\275\250 */\n"
"    width: 10px;            /* \346\273\221\350\275\250\345\256\275\345\272\246 */\n"
"    border-radius: 5px;     /* \345\234\206\350\247\222 */\n"
"    margin: 0px;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: #1E88E5;    /* \346\267\261\350\223\235\350\211\262\346\273\221\345\235\227 (\351\235\236\345\242\250\350\223\235) */\n"
"    border: none;           /* \346\227\240\350\276\271\346\241\206 */\n"
"    width: 16px;            /* \346\273\221\345\235\227\345\256\275\345\272\246 */\n"
"    height: 30px;           /* \346\273\221\345\235\227\351\225\277\345\272\246 */\n"
"    margin: 0px 0;          /* \346\273\221\345\235\227\344\275\215\347\275\256 */\n"
"    border-radius: 5px;     /* \345\234\206\350\247\222 */\n"
"}\n"
"\n"
"QSlider::handle:vertical:hover {\n"
"    background: #42A5F5;    /* \346\202\254\345\201\234\346\227\266\344\272\256\346\267\261\350\223\235\350\211"
                        "\262 */\n"
"}\n"
"\n"
"QSlider::handle:vertical:pressed {\n"
"    background: #0D47A1;    /* \346\214\211\344\270\213\346\227\266\346\233\264\346\267\261\350\223\235\350\211\262 */\n"
"}"));
        coronalSlider->setOrientation(Qt::Vertical);

        horizontalLayout_3->addWidget(coronalSlider);


        gridLayout_2->addWidget(Widget1, 1, 0, 1, 1);

        Widget2 = new QWidget(leftWidget);
        Widget2->setObjectName("Widget2");
        Widget2->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_5 = new QHBoxLayout(Widget2);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(1, 1, 1, 1);
        sagittalWidget = new QVTKOpenGLNativeWidget(Widget2);
        sagittalWidget->setObjectName("sagittalWidget");
        sagittalWidget->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_5->addWidget(sagittalWidget);

        sagittalSlider = new QSlider(Widget2);
        sagittalSlider->setObjectName("sagittalSlider");
        sagittalSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:vertical {\n"
"    background: #000000;    /* \351\273\221\350\211\262\346\273\221\350\275\250 */\n"
"    width: 10px;            /* \346\273\221\350\275\250\345\256\275\345\272\246 */\n"
"    border-radius: 5px;     /* \345\234\206\350\247\222 */\n"
"    margin: 0px;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: #FFB74D;    /* \346\251\231\351\273\204\350\211\262\346\273\221\345\235\227 */\n"
"    border: none;           /* \346\227\240\350\276\271\346\241\206 */\n"
"    width: 16px;            /* \346\273\221\345\235\227\345\256\275\345\272\246 */\n"
"    height: 30px;           /* \346\273\221\345\235\227\351\225\277\345\272\246 */\n"
"    margin: 0px 0;          /* \346\273\221\345\235\227\344\275\215\347\275\256 */\n"
"    border-radius: 5px;     /* \345\234\206\350\247\222 */\n"
"}\n"
"\n"
"QSlider::handle:vertical:hover {\n"
"    background: #FFCC80;    /* \346\202\254\345\201\234\346\227\266\346\265\205\346\251\231\351\273\204\350\211\262 */\n"
"}\n"
"\n"
"QSlider::handl"
                        "e:vertical:pressed {\n"
"    background: #FFA726;    /* \346\214\211\344\270\213\346\227\266\346\267\261\346\251\231\351\273\204\350\211\262 */\n"
"}"));
        sagittalSlider->setOrientation(Qt::Vertical);

        horizontalLayout_5->addWidget(sagittalSlider);


        gridLayout_2->addWidget(Widget2, 0, 1, 1, 1);

        Widget3 = new QWidget(leftWidget);
        Widget3->setObjectName("Widget3");
        Widget3->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_6 = new QHBoxLayout(Widget3);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(1, 1, 1, 1);
        transverseWidget = new QVTKOpenGLNativeWidget(Widget3);
        transverseWidget->setObjectName("transverseWidget");
        transverseWidget->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_6->addWidget(transverseWidget);

        transverseSlider = new QSlider(Widget3);
        transverseSlider->setObjectName("transverseSlider");
        transverseSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:vertical {\n"
"    background: #000000;    /* \351\273\221\350\211\262\346\273\221\350\275\250 */\n"
"    width: 10px;            /* \346\273\221\350\275\250\345\256\275\345\272\246 */\n"
"    border-radius: 5px;     /* \345\234\206\350\247\222 */\n"
"    margin: 0px;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: #8A2BE2;    /* \347\264\253\350\211\262\346\273\221\345\235\227 */\n"
"    border: none;           /* \346\227\240\350\276\271\346\241\206 */\n"
"    width: 16px;            /* \346\273\221\345\235\227\345\256\275\345\272\246 */\n"
"    height: 30px;           /* \347\274\251\347\237\255\347\232\204\346\273\221\345\235\227\351\225\277\345\272\246 */\n"
"    margin: 0px 0;         /* \350\260\203\346\225\264\346\273\221\345\235\227\344\275\215\347\275\256 */\n"
"    border-radius: 5px;     /* \345\234\206\350\247\222 */\n"
"}\n"
"\n"
"QSlider::handle:vertical:hover {\n"
"    background: #9C4DE8;    /* \346\202\254\345\201\234\346\227\266\344\272\256\347\264\253\350\211\262"
                        " */\n"
"}\n"
"\n"
"QSlider::handle:vertical:pressed {\n"
"    background: #7B17D9;    /* \346\214\211\344\270\213\346\227\266\346\267\261\347\264\253\350\211\262 */\n"
"}"));
        transverseSlider->setOrientation(Qt::Vertical);

        horizontalLayout_6->addWidget(transverseSlider);


        gridLayout_2->addWidget(Widget3, 0, 0, 1, 1);


        horizontalLayout->addWidget(leftWidget);

        rightWidget = new QWidget(centralWidget);
        rightWidget->setObjectName("rightWidget");
        rightWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(95, 95, 95);"));
        verticalLayout = new QVBoxLayout(rightWidget);
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(1, 0, 2, 0);
        endoscopyWidget = new QVideoWidget(rightWidget);
        endoscopyWidget->setObjectName("endoscopyWidget");
        endoscopyWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(endoscopyWidget);

        buttonWidget = new QWidget(rightWidget);
        buttonWidget->setObjectName("buttonWidget");
        buttonWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        horizontalLayout_2 = new QHBoxLayout(buttonWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        backButton = new QPushButton(buttonWidget);
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

        horizontalLayout_2->addWidget(backButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addWidget(buttonWidget);

        verticalLayout->setStretch(0, 14);
        verticalLayout->setStretch(1, 1);

        horizontalLayout->addWidget(rightWidget);

        horizontalLayout->setStretch(0, 4);
        horizontalLayout->setStretch(1, 3);

        gridLayout->addWidget(centralWidget, 0, 0, 1, 1);


        retranslateUi(IntraoperativeWidget);

        QMetaObject::connectSlotsByName(IntraoperativeWidget);
    } // setupUi

    void retranslateUi(QWidget *IntraoperativeWidget)
    {
        IntraoperativeWidget->setWindowTitle(QCoreApplication::translate("IntraoperativeWidget", "Form", nullptr));
        backButton->setText(QCoreApplication::translate("IntraoperativeWidget", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IntraoperativeWidget: public Ui_IntraoperativeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTRAOPERATIVEWIDGET_H
