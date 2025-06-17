/********************************************************************************
** Form generated from reading UI file 'segmentationwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEGMENTATIONWIDGET_H
#define UI_SEGMENTATIONWIDGET_H

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

class Ui_SegmentationWidget
{
public:
    QVBoxLayout *verticalLayout;
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
    QWidget *spaceWidget;

    void setupUi(QWidget *SegmentationWidget)
    {
        if (SegmentationWidget->objectName().isEmpty())
            SegmentationWidget->setObjectName("SegmentationWidget");
        SegmentationWidget->resize(309, 741);
        SegmentationWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 17, 18);"));
        verticalLayout = new QVBoxLayout(SegmentationWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(15, 20, 15, 10);
        frame = new QFrame(SegmentationWidget);
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

        verticalLayout->addWidget(frame);

        widget = new QWidget(SegmentationWidget);
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

        verticalLayout->addWidget(widget);

        frame_2 = new QFrame(SegmentationWidget);
        frame_2->setObjectName("frame_2");
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setStyleSheet(QString::fromUtf8("QFrame{background:23, 23, 26;min-height:5px;color:white}"));
        frame_2->setFrameShape(QFrame::HLine);
        frame_2->setFrameShadow(QFrame::Plain);
        frame_2->setLineWidth(1);

        verticalLayout->addWidget(frame_2);

        spaceWidget = new QWidget(SegmentationWidget);
        spaceWidget->setObjectName("spaceWidget");
        spaceWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 17, 18);"));

        verticalLayout->addWidget(spaceWidget);

        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(3, 24);

        retranslateUi(SegmentationWidget);

        QMetaObject::connectSlotsByName(SegmentationWidget);
    } // setupUi

    void retranslateUi(QWidget *SegmentationWidget)
    {
        SegmentationWidget->setWindowTitle(QCoreApplication::translate("SegmentationWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("SegmentationWidget", "\350\257\267\345\257\274\345\205\245\345\275\261\345\203\217", nullptr));
        imageInputButton->setText(QCoreApplication::translate("SegmentationWidget", "\345\257\274\345\205\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SegmentationWidget: public Ui_SegmentationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEGMENTATIONWIDGET_H
