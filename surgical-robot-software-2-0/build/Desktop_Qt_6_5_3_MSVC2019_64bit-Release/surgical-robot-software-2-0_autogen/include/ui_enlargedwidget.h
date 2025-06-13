/********************************************************************************
** Form generated from reading UI file 'enlargedwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENLARGEDWIDGET_H
#define UI_ENLARGEDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EnlargedWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *otherViewsWidget;
    QVBoxLayout *verticalLayout;
    QWidget *view1Background;
    QHBoxLayout *horizontalLayout_2;
    QWidget *view1Plate;
    QWidget *view1Tools;
    QWidget *view2Background;
    QHBoxLayout *horizontalLayout_3;
    QWidget *view2Plate;
    QWidget *view2Tools;
    QWidget *model3DBackground;
    QHBoxLayout *horizontalLayout_4;
    QWidget *model3DPlate;
    QWidget *model3DBody;
    QWidget *model3DTools;
    QWidget *enlargedViewBackground;
    QHBoxLayout *horizontalLayout_5;
    QWidget *enlargedViewPlate;
    QWidget *enlargedViewTools;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *reduceButton;

    void setupUi(QWidget *EnlargedWidget)
    {
        if (EnlargedWidget->objectName().isEmpty())
            EnlargedWidget->setObjectName("EnlargedWidget");
        EnlargedWidget->resize(1047, 921);
        EnlargedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 29, 33);"));
        horizontalLayout = new QHBoxLayout(EnlargedWidget);
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        otherViewsWidget = new QWidget(EnlargedWidget);
        otherViewsWidget->setObjectName("otherViewsWidget");
        otherViewsWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 29, 33);"));
        verticalLayout = new QVBoxLayout(otherViewsWidget);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        view1Background = new QWidget(otherViewsWidget);
        view1Background->setObjectName("view1Background");
        view1Background->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        horizontalLayout_2 = new QHBoxLayout(view1Background);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        view1Plate = new QWidget(view1Background);
        view1Plate->setObjectName("view1Plate");
        view1Plate->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 127);"));

        horizontalLayout_2->addWidget(view1Plate);

        view1Tools = new QWidget(view1Background);
        view1Tools->setObjectName("view1Tools");
        view1Tools->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));

        horizontalLayout_2->addWidget(view1Tools);

        horizontalLayout_2->setStretch(0, 14);
        horizontalLayout_2->setStretch(1, 3);

        verticalLayout->addWidget(view1Background);

        view2Background = new QWidget(otherViewsWidget);
        view2Background->setObjectName("view2Background");
        view2Background->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        horizontalLayout_3 = new QHBoxLayout(view2Background);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        view2Plate = new QWidget(view2Background);
        view2Plate->setObjectName("view2Plate");
        view2Plate->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 127);"));

        horizontalLayout_3->addWidget(view2Plate);

        view2Tools = new QWidget(view2Background);
        view2Tools->setObjectName("view2Tools");
        view2Tools->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));

        horizontalLayout_3->addWidget(view2Tools);

        horizontalLayout_3->setStretch(0, 14);
        horizontalLayout_3->setStretch(1, 3);

        verticalLayout->addWidget(view2Background);

        model3DBackground = new QWidget(otherViewsWidget);
        model3DBackground->setObjectName("model3DBackground");
        model3DBackground->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        horizontalLayout_4 = new QHBoxLayout(model3DBackground);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        model3DPlate = new QWidget(model3DBackground);
        model3DPlate->setObjectName("model3DPlate");
        model3DPlate->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 127);"));

        horizontalLayout_4->addWidget(model3DPlate);

        model3DBody = new QWidget(model3DBackground);
        model3DBody->setObjectName("model3DBody");
        model3DBody->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));

        horizontalLayout_4->addWidget(model3DBody);

        model3DTools = new QWidget(model3DBackground);
        model3DTools->setObjectName("model3DTools");
        model3DTools->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));

        horizontalLayout_4->addWidget(model3DTools);

        horizontalLayout_4->setStretch(0, 28);
        horizontalLayout_4->setStretch(1, 4);
        horizontalLayout_4->setStretch(2, 5);

        verticalLayout->addWidget(model3DBackground);


        horizontalLayout->addWidget(otherViewsWidget);

        enlargedViewBackground = new QWidget(EnlargedWidget);
        enlargedViewBackground->setObjectName("enlargedViewBackground");
        enlargedViewBackground->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        horizontalLayout_5 = new QHBoxLayout(enlargedViewBackground);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        enlargedViewPlate = new QWidget(enlargedViewBackground);
        enlargedViewPlate->setObjectName("enlargedViewPlate");
        enlargedViewPlate->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 127);"));

        horizontalLayout_5->addWidget(enlargedViewPlate);

        enlargedViewTools = new QWidget(enlargedViewBackground);
        enlargedViewTools->setObjectName("enlargedViewTools");
        enlargedViewTools->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));
        horizontalLayout_6 = new QHBoxLayout(enlargedViewTools);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        reduceButton = new QPushButton(enlargedViewTools);
        reduceButton->setObjectName("reduceButton");

        horizontalLayout_6->addWidget(reduceButton);


        horizontalLayout_5->addWidget(enlargedViewTools);

        horizontalLayout_5->setStretch(0, 7);
        horizontalLayout_5->setStretch(1, 1);

        horizontalLayout->addWidget(enlargedViewBackground);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 3);

        retranslateUi(EnlargedWidget);

        QMetaObject::connectSlotsByName(EnlargedWidget);
    } // setupUi

    void retranslateUi(QWidget *EnlargedWidget)
    {
        EnlargedWidget->setWindowTitle(QCoreApplication::translate("EnlargedWidget", "Form", nullptr));
        reduceButton->setText(QCoreApplication::translate("EnlargedWidget", "\347\274\251\345\260\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EnlargedWidget: public Ui_EnlargedWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENLARGEDWIDGET_H
