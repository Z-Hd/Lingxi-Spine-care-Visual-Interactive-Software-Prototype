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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IntraoperativeWidget
{
public:
    QGridLayout *gridLayout;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *leftWidget;
    QGridLayout *gridLayout_2;
    QWidget *transverseWidget;
    QGridLayout *gridLayout_6;
    QWidget *widget;
    QWidget *sagittalWidget;
    QGridLayout *gridLayout_5;
    QWidget *widget_2;
    QWidget *coronalWidget;
    QGridLayout *gridLayout_3;
    QWidget *widget_3;
    QWidget *model3dWidget;
    QGridLayout *gridLayout_4;
    QWidget *widget_4;
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
        transverseWidget = new QWidget(leftWidget);
        transverseWidget->setObjectName("transverseWidget");
        transverseWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(95, 95, 95);"));
        gridLayout_6 = new QGridLayout(transverseWidget);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(1, 1, 1, 1);
        widget = new QWidget(transverseWidget);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        gridLayout_6->addWidget(widget, 0, 0, 1, 1);


        gridLayout_2->addWidget(transverseWidget, 0, 0, 1, 1);

        sagittalWidget = new QWidget(leftWidget);
        sagittalWidget->setObjectName("sagittalWidget");
        sagittalWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(95, 95, 95);"));
        gridLayout_5 = new QGridLayout(sagittalWidget);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(1, 1, 1, 1);
        widget_2 = new QWidget(sagittalWidget);
        widget_2->setObjectName("widget_2");
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        gridLayout_5->addWidget(widget_2, 0, 0, 1, 1);


        gridLayout_2->addWidget(sagittalWidget, 0, 1, 1, 1);

        coronalWidget = new QWidget(leftWidget);
        coronalWidget->setObjectName("coronalWidget");
        coronalWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(95, 95, 95);"));
        gridLayout_3 = new QGridLayout(coronalWidget);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(1, 1, 1, 1);
        widget_3 = new QWidget(coronalWidget);
        widget_3->setObjectName("widget_3");
        widget_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        gridLayout_3->addWidget(widget_3, 0, 0, 1, 1);


        gridLayout_2->addWidget(coronalWidget, 1, 0, 1, 1);

        model3dWidget = new QWidget(leftWidget);
        model3dWidget->setObjectName("model3dWidget");
        model3dWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(95, 95, 95);"));
        gridLayout_4 = new QGridLayout(model3dWidget);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(1, 1, 1, 1);
        widget_4 = new QWidget(model3dWidget);
        widget_4->setObjectName("widget_4");
        widget_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        gridLayout_4->addWidget(widget_4, 0, 0, 1, 1);


        gridLayout_2->addWidget(model3dWidget, 1, 1, 1, 1);


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
