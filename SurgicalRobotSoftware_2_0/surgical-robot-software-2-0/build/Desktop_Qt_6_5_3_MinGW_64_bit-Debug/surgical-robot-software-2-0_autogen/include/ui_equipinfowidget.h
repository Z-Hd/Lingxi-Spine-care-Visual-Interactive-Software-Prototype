/********************************************************************************
** Form generated from reading UI file 'equipinfowidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EQUIPINFOWIDGET_H
#define UI_EQUIPINFOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EquipInfoWidget
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QFrame *frame;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *tool;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QFrame *frame_4;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *backButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *confirmButton;

    void setupUi(QWidget *EquipInfoWidget)
    {
        if (EquipInfoWidget->objectName().isEmpty())
            EquipInfoWidget->setObjectName("EquipInfoWidget");
        EquipInfoWidget->resize(1224, 770);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EquipInfoWidget->sizePolicy().hasHeightForWidth());
        EquipInfoWidget->setSizePolicy(sizePolicy);
        EquipInfoWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 23, 26);"));
        gridLayout = new QGridLayout(EquipInfoWidget);
        gridLayout->setObjectName("gridLayout");
        widget = new QWidget(EquipInfoWidget);
        widget->setObjectName("widget");
        widget->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setStyleSheet(QString::fromUtf8("background-color:rgb(23, 23, 26);\n"
"font-size: 20px;"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(20);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(150, -1, 150, -1);
        label = new QLabel(widget);
        label->setObjectName("label");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 23, 26);\n"
"color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        frame = new QFrame(widget);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy3);
        frame->setStyleSheet(QString::fromUtf8("QFrame{background:23, 23, 26;min-height:5px;color:white}"));
        frame->setFrameShape(QFrame::HLine);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(1);

        verticalLayout_2->addWidget(frame);

        groupBox = new QGroupBox(widget);
        groupBox->setObjectName("groupBox");
        groupBox->setStyleSheet(QString::fromUtf8("border:none"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 23, 26);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        tool = new QLabel(groupBox);
        tool->setObjectName("tool");
        tool->setStyleSheet(QString::fromUtf8("image: url(:/resource/image/tool.png);"));

        horizontalLayout->addWidget(tool);

        horizontalSpacer = new QSpacerItem(620, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(groupBox);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 23, 26);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(label_4);

        frame_4 = new QFrame(widget);
        frame_4->setObjectName("frame_4");
        frame_4->setStyleSheet(QString::fromUtf8("QFrame{background:23, 23, 26;min-height:5px;color:white}"));
        frame_4->setFrameShape(QFrame::HLine);
        frame_4->setFrameShadow(QFrame::Plain);
        frame_4->setLineWidth(1);

        verticalLayout_2->addWidget(frame_4);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName("groupBox_2");
        sizePolicy3.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy3);
        groupBox_2->setStyleSheet(QString::fromUtf8("border: none;"));
        horizontalLayout_10 = new QHBoxLayout(groupBox_2);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_4);

        backButton = new QPushButton(groupBox_2);
        backButton->setObjectName("backButton");
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy4);
        backButton->setLayoutDirection(Qt::LeftToRight);
        backButton->setStyleSheet(QString::fromUtf8("background-color:rgb(34, 35, 39);color:rgb(115, 118, 125)"));

        horizontalLayout_10->addWidget(backButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);

        confirmButton = new QPushButton(groupBox_2);
        confirmButton->setObjectName("confirmButton");
        sizePolicy4.setHeightForWidth(confirmButton->sizePolicy().hasHeightForWidth());
        confirmButton->setSizePolicy(sizePolicy4);
        confirmButton->setLayoutDirection(Qt::LeftToRight);
        confirmButton->setStyleSheet(QString::fromUtf8("background-color:rgb(34, 35, 39);color:rgb(115, 118, 125)"));

        horizontalLayout_10->addWidget(confirmButton);


        verticalLayout_2->addWidget(groupBox_2);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(EquipInfoWidget);

        QMetaObject::connectSlotsByName(EquipInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *EquipInfoWidget)
    {
        EquipInfoWidget->setWindowTitle(QCoreApplication::translate("EquipInfoWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("EquipInfoWidget", "\345\267\245\345\205\267\344\277\241\346\201\257\351\200\211\346\213\251", nullptr));
        groupBox->setTitle(QCoreApplication::translate("EquipInfoWidget", "GroupBox", nullptr));
        label_2->setText(QCoreApplication::translate("EquipInfoWidget", "\345\267\245\345\205\267\345\214\205", nullptr));
        tool->setText(QString());
        label_4->setText(QCoreApplication::translate("EquipInfoWidget", "\345\275\261\345\203\217\350\256\276\345\244\207\350\267\237\350\270\252\345\231\250", nullptr));
        groupBox_2->setTitle(QString());
        backButton->setText(QCoreApplication::translate("EquipInfoWidget", "\350\277\224\345\233\236", nullptr));
        confirmButton->setText(QCoreApplication::translate("EquipInfoWidget", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EquipInfoWidget: public Ui_EquipInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUIPINFOWIDGET_H
