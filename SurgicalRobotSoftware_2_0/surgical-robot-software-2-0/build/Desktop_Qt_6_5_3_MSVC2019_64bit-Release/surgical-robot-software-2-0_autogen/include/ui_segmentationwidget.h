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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SegmentationWidget
{
public:
    QPushButton *imageInputButton;

    void setupUi(QWidget *SegmentationWidget)
    {
        if (SegmentationWidget->objectName().isEmpty())
            SegmentationWidget->setObjectName("SegmentationWidget");
        SegmentationWidget->resize(276, 584);
        SegmentationWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 17, 18);"));
        imageInputButton = new QPushButton(SegmentationWidget);
        imageInputButton->setObjectName("imageInputButton");
        imageInputButton->setGeometry(QRect(150, 40, 100, 40));
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

        retranslateUi(SegmentationWidget);

        QMetaObject::connectSlotsByName(SegmentationWidget);
    } // setupUi

    void retranslateUi(QWidget *SegmentationWidget)
    {
        SegmentationWidget->setWindowTitle(QCoreApplication::translate("SegmentationWidget", "Form", nullptr));
        imageInputButton->setText(QCoreApplication::translate("SegmentationWidget", "\345\257\274\345\205\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SegmentationWidget: public Ui_SegmentationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEGMENTATIONWIDGET_H
