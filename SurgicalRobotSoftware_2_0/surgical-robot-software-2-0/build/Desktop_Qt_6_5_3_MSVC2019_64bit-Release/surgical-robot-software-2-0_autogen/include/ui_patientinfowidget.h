/********************************************************************************
** Form generated from reading UI file 'patientinfowidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTINFOWIDGET_H
#define UI_PATIENTINFOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PatientInfoWidget
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QFrame *frame;
    QWidget *titleWidget;
    QHBoxLayout *horizontalLayout_9;
    QLabel *bellIcon;
    QLabel *label_3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *info;
    QVBoxLayout *verticalLayout_3;
    QWidget *infoWidget;
    QHBoxLayout *horizontalLayout_6;
    QWidget *patientInputWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *patientNumInput;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QLineEdit *patientNameInput;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QLineEdit *patientAgeInput;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_10;
    QComboBox *patientGenderInput;
    QSpacerItem *horizontalSpacer_8;
    QWidget *typeWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QComboBox *surgicalTypeInput;
    QSpacerItem *horizontalSpacer_9;
    QWidget *notesWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_11;
    QLineEdit *lineEdit_5;
    QFrame *frame_3;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_4;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *backButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *confirmButton;

    void setupUi(QWidget *PatientInfoWidget)
    {
        if (PatientInfoWidget->objectName().isEmpty())
            PatientInfoWidget->setObjectName("PatientInfoWidget");
        PatientInfoWidget->resize(1156, 633);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PatientInfoWidget->sizePolicy().hasHeightForWidth());
        PatientInfoWidget->setSizePolicy(sizePolicy);
        PatientInfoWidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(PatientInfoWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(PatientInfoWidget);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(16, 16));
        widget->setStyleSheet(QString::fromUtf8("background-color:rgb(23, 23, 26);\n"
"font-size: 20px;"));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setSpacing(20);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(150, -1, 150, -1);
        label = new QLabel(widget);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 23, 26);\n"
"color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label);

        frame = new QFrame(widget);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy2);
        frame->setStyleSheet(QString::fromUtf8("QFrame{background:23, 23, 26;min-height:5px;color:white}"));
        frame->setFrameShape(QFrame::HLine);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(1);

        verticalLayout_4->addWidget(frame);

        titleWidget = new QWidget(widget);
        titleWidget->setObjectName("titleWidget");
        horizontalLayout_9 = new QHBoxLayout(titleWidget);
        horizontalLayout_9->setSpacing(13);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setSizeConstraint(QLayout::SetMinimumSize);
        bellIcon = new QLabel(titleWidget);
        bellIcon->setObjectName("bellIcon");
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(bellIcon->sizePolicy().hasHeightForWidth());
        bellIcon->setSizePolicy(sizePolicy3);
        bellIcon->setMinimumSize(QSize(0, 0));
        bellIcon->setStyleSheet(QString::fromUtf8("border-radius: 20px;     \n"
"border-image: url(:/resource/image/bell.png);\n"
"border:1px solid black; \n"
"background: white;"));

        horizontalLayout_9->addWidget(bellIcon);

        label_3 = new QLabel(titleWidget);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy4);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_9->addWidget(label_3);


        verticalLayout_4->addWidget(titleWidget);

        groupBox = new QGroupBox(widget);
        groupBox->setObjectName("groupBox");
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        horizontalLayout_8 = new QHBoxLayout(groupBox);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer_2 = new QSpacerItem(73, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        info = new QGroupBox(groupBox);
        info->setObjectName("info");
        sizePolicy.setHeightForWidth(info->sizePolicy().hasHeightForWidth());
        info->setSizePolicy(sizePolicy);
        info->setStyleSheet(QString::fromUtf8("border:none"));
        verticalLayout_3 = new QVBoxLayout(info);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName("verticalLayout_3");
        infoWidget = new QWidget(info);
        infoWidget->setObjectName("infoWidget");
        sizePolicy.setHeightForWidth(infoWidget->sizePolicy().hasHeightForWidth());
        infoWidget->setSizePolicy(sizePolicy);
        horizontalLayout_6 = new QHBoxLayout(infoWidget);
        horizontalLayout_6->setSpacing(40);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        patientInputWidget = new QWidget(infoWidget);
        patientInputWidget->setObjectName("patientInputWidget");
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(patientInputWidget->sizePolicy().hasHeightForWidth());
        patientInputWidget->setSizePolicy(sizePolicy5);
        verticalLayout = new QVBoxLayout(patientInputWidget);
        verticalLayout->setSpacing(30);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(30);
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(patientInputWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(label_2);

        patientNumInput = new QLineEdit(patientInputWidget);
        patientNumInput->setObjectName("patientNumInput");
        sizePolicy3.setHeightForWidth(patientNumInput->sizePolicy().hasHeightForWidth());
        patientNumInput->setSizePolicy(sizePolicy3);
        patientNumInput->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 85);\n"
"color: rgb(255, 255, 255);\n"
"border: none;\n"
"text-align: center"));

        horizontalLayout->addWidget(patientNumInput);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(30);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_8 = new QLabel(patientInputWidget);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(label_8);

        patientNameInput = new QLineEdit(patientInputWidget);
        patientNameInput->setObjectName("patientNameInput");
        sizePolicy3.setHeightForWidth(patientNameInput->sizePolicy().hasHeightForWidth());
        patientNameInput->setSizePolicy(sizePolicy3);
        patientNameInput->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 85);\n"
"color: rgb(255, 255, 255);\n"
"border: none;\n"
"text-align: center"));

        horizontalLayout_3->addWidget(patientNameInput);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(30);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_9 = new QLabel(patientInputWidget);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(label_9);

        patientAgeInput = new QLineEdit(patientInputWidget);
        patientAgeInput->setObjectName("patientAgeInput");
        sizePolicy3.setHeightForWidth(patientAgeInput->sizePolicy().hasHeightForWidth());
        patientAgeInput->setSizePolicy(sizePolicy3);
        patientAgeInput->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 85);\n"
"color: rgb(255, 255, 255);\n"
"border: none;\n"
"text-align: center"));

        horizontalLayout_4->addWidget(patientAgeInput);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(30);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_10 = new QLabel(patientInputWidget);
        label_10->setObjectName("label_10");
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(label_10);

        patientGenderInput = new QComboBox(patientInputWidget);
        patientGenderInput->setObjectName("patientGenderInput");
        sizePolicy3.setHeightForWidth(patientGenderInput->sizePolicy().hasHeightForWidth());
        patientGenderInput->setSizePolicy(sizePolicy3);
        patientGenderInput->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 85);\n"
"color: rgb(255, 255, 255);\n"
"border: none;\n"
"text-align: center"));

        horizontalLayout_5->addWidget(patientGenderInput);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_5);


        horizontalLayout_6->addWidget(patientInputWidget);

        typeWidget = new QWidget(infoWidget);
        typeWidget->setObjectName("typeWidget");
        sizePolicy3.setHeightForWidth(typeWidget->sizePolicy().hasHeightForWidth());
        typeWidget->setSizePolicy(sizePolicy3);
        horizontalLayout_2 = new QHBoxLayout(typeWidget);
        horizontalLayout_2->setSpacing(30);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_7 = new QLabel(typeWidget);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(label_7);

        surgicalTypeInput = new QComboBox(typeWidget);
        surgicalTypeInput->setObjectName("surgicalTypeInput");
        sizePolicy3.setHeightForWidth(surgicalTypeInput->sizePolicy().hasHeightForWidth());
        surgicalTypeInput->setSizePolicy(sizePolicy3);
        surgicalTypeInput->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 85);\n"
"color: rgb(255, 255, 255);\n"
"border: none;\n"
"text-align: center"));

        horizontalLayout_2->addWidget(surgicalTypeInput);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);


        horizontalLayout_6->addWidget(typeWidget);


        verticalLayout_3->addWidget(infoWidget);

        notesWidget = new QWidget(info);
        notesWidget->setObjectName("notesWidget");
        sizePolicy4.setHeightForWidth(notesWidget->sizePolicy().hasHeightForWidth());
        notesWidget->setSizePolicy(sizePolicy4);
        verticalLayout_2 = new QVBoxLayout(notesWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_11 = new QLabel(notesWidget);
        label_11->setObjectName("label_11");
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_7->addWidget(label_11);

        lineEdit_5 = new QLineEdit(notesWidget);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_7->addWidget(lineEdit_5);


        verticalLayout_2->addLayout(horizontalLayout_7);

        frame_3 = new QFrame(notesWidget);
        frame_3->setObjectName("frame_3");
        sizePolicy2.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy2);
        frame_3->setStyleSheet(QString::fromUtf8("background:23, 23, 26;min-height:5px;color:white;border-top: 1px solid white; "));
        frame_3->setFrameShape(QFrame::HLine);
        frame_3->setFrameShadow(QFrame::Plain);
        frame_3->setLineWidth(1);

        verticalLayout_2->addWidget(frame_3);


        verticalLayout_3->addWidget(notesWidget);


        horizontalLayout_8->addWidget(info);

        horizontalSpacer = new QSpacerItem(72, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);


        verticalLayout_4->addWidget(groupBox);

        frame_4 = new QFrame(widget);
        frame_4->setObjectName("frame_4");
        frame_4->setStyleSheet(QString::fromUtf8("QFrame{background:23, 23, 26;min-height:5px;color:white}"));
        frame_4->setFrameShape(QFrame::HLine);
        frame_4->setFrameShadow(QFrame::Plain);
        frame_4->setLineWidth(1);

        verticalLayout_4->addWidget(frame_4);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName("groupBox_2");
        sizePolicy2.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy2);
        groupBox_2->setStyleSheet(QString::fromUtf8("border: none;"));
        horizontalLayout_10 = new QHBoxLayout(groupBox_2);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_4);

        backButton = new QPushButton(groupBox_2);
        backButton->setObjectName("backButton");
        sizePolicy3.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy3);
        backButton->setLayoutDirection(Qt::LeftToRight);
        backButton->setStyleSheet(QString::fromUtf8("background-color:rgb(34, 35, 39);color:rgb(115, 118, 125)"));

        horizontalLayout_10->addWidget(backButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);

        confirmButton = new QPushButton(groupBox_2);
        confirmButton->setObjectName("confirmButton");
        sizePolicy3.setHeightForWidth(confirmButton->sizePolicy().hasHeightForWidth());
        confirmButton->setSizePolicy(sizePolicy3);
        confirmButton->setLayoutDirection(Qt::LeftToRight);
        confirmButton->setStyleSheet(QString::fromUtf8("background-color:rgb(34, 35, 39);color:rgb(115, 118, 125)"));

        horizontalLayout_10->addWidget(confirmButton);


        verticalLayout_4->addWidget(groupBox_2);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(PatientInfoWidget);

        QMetaObject::connectSlotsByName(PatientInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *PatientInfoWidget)
    {
        PatientInfoWidget->setWindowTitle(QCoreApplication::translate("PatientInfoWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("PatientInfoWidget", "\346\202\243\350\200\205\344\277\241\346\201\257", nullptr));
        bellIcon->setText(QString());
        label_3->setText(QCoreApplication::translate("PatientInfoWidget", "\350\257\267\350\276\223\345\205\245\346\202\243\350\200\205\344\277\241\346\201\257", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("PatientInfoWidget", "\347\227\205\345\216\206\345\217\267  ", nullptr));
        patientNumInput->setText(QString());
        patientNumInput->setPlaceholderText(QCoreApplication::translate("PatientInfoWidget", "\350\257\267\350\276\223\345\205\245\346\202\243\350\200\205\347\227\205\345\216\206\345\217\267", nullptr));
        label_8->setText(QCoreApplication::translate("PatientInfoWidget", "\346\202\243\350\200\205\345\247\223\345\220\215", nullptr));
        patientNameInput->setText(QString());
        patientNameInput->setPlaceholderText(QCoreApplication::translate("PatientInfoWidget", "\350\257\267\350\276\223\345\205\245\346\202\243\350\200\205\345\247\223\345\220\215", nullptr));
        label_9->setText(QCoreApplication::translate("PatientInfoWidget", "\346\202\243\350\200\205\345\271\264\351\276\204", nullptr));
        patientAgeInput->setText(QString());
        patientAgeInput->setPlaceholderText(QCoreApplication::translate("PatientInfoWidget", "\350\257\267\350\276\223\345\205\245\346\202\243\350\200\205\345\271\264\351\276\204", nullptr));
        label_10->setText(QCoreApplication::translate("PatientInfoWidget", "\346\202\243\350\200\205\346\200\247\345\210\253", nullptr));
        patientGenderInput->setPlaceholderText(QCoreApplication::translate("PatientInfoWidget", "\350\257\267\351\200\211\346\213\251\346\202\243\350\200\205\346\200\247\345\210\253", nullptr));
        label_7->setText(QCoreApplication::translate("PatientInfoWidget", "\346\211\213\346\234\257\347\261\273\345\236\213", nullptr));
        surgicalTypeInput->setPlaceholderText(QCoreApplication::translate("PatientInfoWidget", "\350\257\267\351\200\211\346\213\251\346\211\213\346\234\257\347\261\273\345\236\213", nullptr));
        label_11->setText(QCoreApplication::translate("PatientInfoWidget", "\345\244\207\346\263\250\357\274\232", nullptr));
        groupBox_2->setTitle(QString());
        backButton->setText(QCoreApplication::translate("PatientInfoWidget", "\350\277\224\345\233\236", nullptr));
        confirmButton->setText(QCoreApplication::translate("PatientInfoWidget", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PatientInfoWidget: public Ui_PatientInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTINFOWIDGET_H
