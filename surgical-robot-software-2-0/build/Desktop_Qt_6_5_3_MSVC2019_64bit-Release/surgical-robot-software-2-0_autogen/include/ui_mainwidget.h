/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *toolBarWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *trademarkWidget;
    QWidget *stepWidget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *segmentationLabel;
    QLabel *label_5;
    QLabel *registrationLabel;
    QLabel *label_3;
    QLabel *planLabel;
    QLabel *label_4;
    QLabel *executeLabel;
    QWidget *EquipNameWidget;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QWidget *positionWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QWidget *infoWidget;
    QGridLayout *gridLayout_3;
    QWidget *infoInnerWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QWidget *contorlButtonWidget;
    QGridLayout *gridLayout_4;
    QWidget *ctrlInnerWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *ndiPageButton;
    QPushButton *armPageButton;
    QWidget *unKnown;
    QGridLayout *gridLayout_5;
    QWidget *infoInnerWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_7;
    QWidget *settingWidget;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_11;
    QPushButton *pushButton_9;
    QPushButton *exitButton;
    QStackedWidget *centralWidget;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName("MainWidget");
        MainWidget->resize(1302, 793);
        MainWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        verticalLayout = new QVBoxLayout(MainWidget);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        toolBarWidget = new QWidget(MainWidget);
        toolBarWidget->setObjectName("toolBarWidget");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolBarWidget->sizePolicy().hasHeightForWidth());
        toolBarWidget->setSizePolicy(sizePolicy);
        toolBarWidget->setStyleSheet(QString::fromUtf8("background-color:rgb(28, 29, 33);"));
        horizontalLayout = new QHBoxLayout(toolBarWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(1, 2, 1, 2);
        trademarkWidget = new QWidget(toolBarWidget);
        trademarkWidget->setObjectName("trademarkWidget");
        trademarkWidget->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(trademarkWidget);

        stepWidget = new QWidget(toolBarWidget);
        stepWidget->setObjectName("stepWidget");
        stepWidget->setStyleSheet(QString::fromUtf8("background-color:rgb(28, 29, 33);"));
        horizontalLayout_6 = new QHBoxLayout(stepWidget);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        segmentationLabel = new QLabel(stepWidget);
        segmentationLabel->setObjectName("segmentationLabel");
        segmentationLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 29, 33);\n"
"color:rgb(111, 114, 121);\n"
"qproperty-alignment: AlignCenter;\n"
"font-size:17px;"));

        horizontalLayout_6->addWidget(segmentationLabel);

        label_5 = new QLabel(stepWidget);
        label_5->setObjectName("label_5");
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 29, 33);\n"
"color:rgb(111, 114, 121);\n"
"qproperty-alignment: AlignCenter;\n"
"font-size:17px;"));

        horizontalLayout_6->addWidget(label_5);

        registrationLabel = new QLabel(stepWidget);
        registrationLabel->setObjectName("registrationLabel");
        registrationLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 29, 33);\n"
"color:rgb(111, 114, 121);\n"
"qproperty-alignment: AlignCenter;\n"
"font-size:17px;"));

        horizontalLayout_6->addWidget(registrationLabel);

        label_3 = new QLabel(stepWidget);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 29, 33);\n"
"color:rgb(111, 114, 121);\n"
"qproperty-alignment: AlignCenter;\n"
"font-size:17px;"));

        horizontalLayout_6->addWidget(label_3);

        planLabel = new QLabel(stepWidget);
        planLabel->setObjectName("planLabel");
        planLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 29, 33);\n"
"color:rgb(111, 114, 121);\n"
"qproperty-alignment: AlignCenter;\n"
"font-size:17px;"));

        horizontalLayout_6->addWidget(planLabel);

        label_4 = new QLabel(stepWidget);
        label_4->setObjectName("label_4");
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 29, 33);\n"
"color:rgb(111, 114, 121);\n"
"qproperty-alignment: AlignCenter;\n"
"font-size:17px;"));

        horizontalLayout_6->addWidget(label_4);

        executeLabel = new QLabel(stepWidget);
        executeLabel->setObjectName("executeLabel");
        executeLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 29, 33);\n"
"color:rgb(111, 114, 121);\n"
"qproperty-alignment: AlignCenter;\n"
"font-size:17px;"));

        horizontalLayout_6->addWidget(executeLabel);

        horizontalLayout_6->setStretch(0, 2);
        horizontalLayout_6->setStretch(1, 1);
        horizontalLayout_6->setStretch(2, 2);
        horizontalLayout_6->setStretch(3, 1);
        horizontalLayout_6->setStretch(4, 2);
        horizontalLayout_6->setStretch(5, 1);
        horizontalLayout_6->setStretch(6, 2);

        horizontalLayout->addWidget(stepWidget);

        EquipNameWidget = new QWidget(toolBarWidget);
        EquipNameWidget->setObjectName("EquipNameWidget");
        EquipNameWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 29, 33);"));
        gridLayout_2 = new QGridLayout(EquipNameWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        label_2 = new QLabel(EquipNameWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 29, 33);\n"
"color:rgb(111, 114, 121);\n"
"qproperty-alignment: AlignCenter;\n"
"font-size:17px;"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);


        horizontalLayout->addWidget(EquipNameWidget);

        positionWidget = new QWidget(toolBarWidget);
        positionWidget->setObjectName("positionWidget");
        positionWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 29, 33);"));
        verticalLayout_2 = new QVBoxLayout(positionWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton = new QPushButton(positionWidget);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(30, 30));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    width: 35px;\n"
"    height: 35px;\n"
"    border-radius: 10px; /* \345\234\206\350\247\222\345\215\212\345\276\204\350\256\276\347\275\256\344\270\272\345\256\275\345\272\246\346\210\226\351\253\230\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    background-color: rgb(46, 48, 54);\n"
"    color: white;\n"
"}"));

        verticalLayout_2->addWidget(pushButton);


        horizontalLayout->addWidget(positionWidget);

        infoWidget = new QWidget(toolBarWidget);
        infoWidget->setObjectName("infoWidget");
        infoWidget->setStyleSheet(QString::fromUtf8("background-color:rgb(28, 29, 33);"));
        gridLayout_3 = new QGridLayout(infoWidget);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(2, 0, 2, 0);
        infoInnerWidget = new QWidget(infoWidget);
        infoInnerWidget->setObjectName("infoInnerWidget");
        infoInnerWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 29, 33);"));
        horizontalLayout_3 = new QHBoxLayout(infoInnerWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_4 = new QPushButton(infoInnerWidget);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    width: 40px;\n"
"    height: 25px;\n"
"    border-radius: 10px; /* \345\234\206\350\247\222\345\215\212\345\276\204\350\256\276\347\275\256\344\270\272\345\256\275\345\272\246\346\210\226\351\253\230\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    background-color: rgb(0, 153, 139);\n"
"    color: white;\n"
"}"));

        horizontalLayout_3->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(infoInnerWidget);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    width: 40px;\n"
"    height: 25px;\n"
"    border-radius: 10px; /* \345\234\206\350\247\222\345\215\212\345\276\204\350\256\276\347\275\256\344\270\272\345\256\275\345\272\246\346\210\226\351\253\230\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    background-color: rgb(0, 153, 139);\n"
"    color: white;\n"
"}"));

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(infoInnerWidget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    width: 40px;\n"
"    height: 25px;\n"
"    border-radius: 10px; /* \345\234\206\350\247\222\345\215\212\345\276\204\350\256\276\347\275\256\344\270\272\345\256\275\345\272\246\346\210\226\351\253\230\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    background-color: rgb(199, 76, 99);\n"
"    color: white;\n"
"}"));

        horizontalLayout_3->addWidget(pushButton_2);


        gridLayout_3->addWidget(infoInnerWidget, 0, 0, 1, 1);


        horizontalLayout->addWidget(infoWidget);

        contorlButtonWidget = new QWidget(toolBarWidget);
        contorlButtonWidget->setObjectName("contorlButtonWidget");
        contorlButtonWidget->setStyleSheet(QString::fromUtf8("background-color:rgb(28, 29, 33);"));
        gridLayout_4 = new QGridLayout(contorlButtonWidget);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 2, 0);
        ctrlInnerWidget = new QWidget(contorlButtonWidget);
        ctrlInnerWidget->setObjectName("ctrlInnerWidget");
        ctrlInnerWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 29, 33);\n"
""));
        horizontalLayout_2 = new QHBoxLayout(ctrlInnerWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        ndiPageButton = new QPushButton(ctrlInnerWidget);
        ndiPageButton->setObjectName("ndiPageButton");
        sizePolicy1.setHeightForWidth(ndiPageButton->sizePolicy().hasHeightForWidth());
        ndiPageButton->setSizePolicy(sizePolicy1);
        ndiPageButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    width: 40px;\n"
"    height: 25px;\n"
"    border-radius: 10px; /* \345\234\206\350\247\222\345\215\212\345\276\204\350\256\276\347\275\256\344\270\272\345\256\275\345\272\246\346\210\226\351\253\230\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    background-color: rgb(0, 153, 139);\n"
"    color: white;\n"
"}"));

        horizontalLayout_2->addWidget(ndiPageButton);

        armPageButton = new QPushButton(ctrlInnerWidget);
        armPageButton->setObjectName("armPageButton");
        sizePolicy1.setHeightForWidth(armPageButton->sizePolicy().hasHeightForWidth());
        armPageButton->setSizePolicy(sizePolicy1);
        armPageButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    width: 40px;\n"
"    height: 25px;\n"
"    border-radius: 10px; /* \345\234\206\350\247\222\345\215\212\345\276\204\350\256\276\347\275\256\344\270\272\345\256\275\345\272\246\346\210\226\351\253\230\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    background-color: rgb(0, 153, 139);\n"
"    color: white;\n"
"}"));

        horizontalLayout_2->addWidget(armPageButton);


        gridLayout_4->addWidget(ctrlInnerWidget, 0, 0, 1, 1);


        horizontalLayout->addWidget(contorlButtonWidget);

        unKnown = new QWidget(toolBarWidget);
        unKnown->setObjectName("unKnown");
        unKnown->setStyleSheet(QString::fromUtf8("background-color: rgb(111, 114, 121);"));
        gridLayout_5 = new QGridLayout(unKnown);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 2, 0);
        infoInnerWidget_2 = new QWidget(unKnown);
        infoInnerWidget_2->setObjectName("infoInnerWidget_2");
        infoInnerWidget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 29, 33);"));
        horizontalLayout_4 = new QHBoxLayout(infoInnerWidget_2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(9, -1, -1, -1);
        pushButton_7 = new QPushButton(infoInnerWidget_2);
        pushButton_7->setObjectName("pushButton_7");
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    width: 40px;\n"
"    height: 25px;\n"
"    border-radius: 10px; /* \345\234\206\350\247\222\345\215\212\345\276\204\350\256\276\347\275\256\344\270\272\345\256\275\345\272\246\346\210\226\351\253\230\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    background-color: rgb(199, 76, 99);\n"
"    color: white;\n"
"}"));

        horizontalLayout_4->addWidget(pushButton_7);


        gridLayout_5->addWidget(infoInnerWidget_2, 0, 0, 1, 1);


        horizontalLayout->addWidget(unKnown);

        settingWidget = new QWidget(toolBarWidget);
        settingWidget->setObjectName("settingWidget");
        settingWidget->setStyleSheet(QString::fromUtf8("background-color:rgb(28, 29, 33);"));
        horizontalLayout_5 = new QHBoxLayout(settingWidget);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        pushButton_8 = new QPushButton(settingWidget);
        pushButton_8->setObjectName("pushButton_8");
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setMinimumSize(QSize(30, 30));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    width: 35px;\n"
"    height: 35px;\n"
"    border-radius: 10px; /* \345\234\206\350\247\222\345\215\212\345\276\204\350\256\276\347\275\256\344\270\272\345\256\275\345\272\246\346\210\226\351\253\230\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    background-color: rgb(46, 48, 54);\n"
"    color: white;\n"
"	/*border-image:url(:/resource/image/snapshot.png);*/\n"
"}"));

        horizontalLayout_5->addWidget(pushButton_8);

        pushButton_11 = new QPushButton(settingWidget);
        pushButton_11->setObjectName("pushButton_11");
        sizePolicy1.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy1);
        pushButton_11->setMinimumSize(QSize(30, 30));
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    width: 35px;\n"
"    height: 35px;\n"
"    border-radius: 10px; /* \345\234\206\350\247\222\345\215\212\345\276\204\350\256\276\347\275\256\344\270\272\345\256\275\345\272\246\346\210\226\351\253\230\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    background-color: rgb(46, 48, 54);\n"
"    color: white;\n"
"}"));

        horizontalLayout_5->addWidget(pushButton_11);

        pushButton_9 = new QPushButton(settingWidget);
        pushButton_9->setObjectName("pushButton_9");
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);
        pushButton_9->setMinimumSize(QSize(30, 30));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    width: 35px;\n"
"    height: 35px;\n"
"    border-radius: 10px; /* \345\234\206\350\247\222\345\215\212\345\276\204\350\256\276\347\275\256\344\270\272\345\256\275\345\272\246\346\210\226\351\253\230\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    background-color: rgb(46, 48, 54);\n"
"    color: white;\n"
"}"));

        horizontalLayout_5->addWidget(pushButton_9);

        exitButton = new QPushButton(settingWidget);
        exitButton->setObjectName("exitButton");
        sizePolicy1.setHeightForWidth(exitButton->sizePolicy().hasHeightForWidth());
        exitButton->setSizePolicy(sizePolicy1);
        exitButton->setMinimumSize(QSize(30, 30));
        exitButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    width: 35px;\n"
"    height: 35px;\n"
"    border-radius: 10px; /* \345\234\206\350\247\222\345\215\212\345\276\204\350\256\276\347\275\256\344\270\272\345\256\275\345\272\246\346\210\226\351\253\230\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    background-color: rgb(46, 48, 54);\n"
"    color: white;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(70, 72, 81);\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(245, 245, 245);\n"
"}"));

        horizontalLayout_5->addWidget(exitButton);


        horizontalLayout->addWidget(settingWidget);

        horizontalLayout->setStretch(0, 8);
        horizontalLayout->setStretch(1, 4);
        horizontalLayout->setStretch(2, 5);
        horizontalLayout->setStretch(3, 2);
        horizontalLayout->setStretch(4, 4);
        horizontalLayout->setStretch(5, 2);
        horizontalLayout->setStretch(6, 1);
        horizontalLayout->setStretch(7, 3);

        verticalLayout->addWidget(toolBarWidget);

        centralWidget = new QStackedWidget(MainWidget);
        centralWidget->setObjectName("centralWidget");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(centralWidget);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 24);

        retranslateUi(MainWidget);

        centralWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QCoreApplication::translate("MainWidget", "MainWidget", nullptr));
        segmentationLabel->setText(QCoreApplication::translate("MainWidget", "\345\210\206\345\211\262", nullptr));
        label_5->setText(QCoreApplication::translate("MainWidget", "\342\200\224", nullptr));
        registrationLabel->setText(QCoreApplication::translate("MainWidget", "\351\205\215\345\207\206", nullptr));
        label_3->setText(QCoreApplication::translate("MainWidget", "\342\200\224", nullptr));
        planLabel->setText(QCoreApplication::translate("MainWidget", "\350\247\204\345\210\222", nullptr));
        label_4->setText(QCoreApplication::translate("MainWidget", "\342\200\224", nullptr));
        executeLabel->setText(QCoreApplication::translate("MainWidget", "\346\211\247\350\241\214", nullptr));
        label_2->setText(QCoreApplication::translate("MainWidget", "2S-0084", nullptr));
        pushButton->setText(QString());
        pushButton_4->setText(QString());
        pushButton_3->setText(QString());
        pushButton_2->setText(QString());
        ndiPageButton->setText(QCoreApplication::translate("MainWidget", "NDI", nullptr));
        armPageButton->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_11->setText(QString());
        pushButton_9->setText(QString());
        exitButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
