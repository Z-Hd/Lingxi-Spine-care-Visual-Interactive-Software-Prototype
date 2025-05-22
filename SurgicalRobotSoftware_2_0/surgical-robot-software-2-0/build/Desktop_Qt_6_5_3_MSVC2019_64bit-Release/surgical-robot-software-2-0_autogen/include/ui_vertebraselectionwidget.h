/********************************************************************************
** Form generated from reading UI file 'vertebraselectionwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERTEBRASELECTIONWIDGET_H
#define UI_VERTEBRASELECTIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VertebraSelectionWidget
{
public:
    QPushButton *confirmButton;
    QPushButton *cancelButton;
    QLabel *label;
    QPushButton *l5LButton;

    void setupUi(QWidget *VertebraSelectionWidget)
    {
        if (VertebraSelectionWidget->objectName().isEmpty())
            VertebraSelectionWidget->setObjectName("VertebraSelectionWidget");
        VertebraSelectionWidget->resize(771, 515);
        VertebraSelectionWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 17, 18);"));
        confirmButton = new QPushButton(VertebraSelectionWidget);
        confirmButton->setObjectName("confirmButton");
        confirmButton->setGeometry(QRect(450, 450, 100, 40));
        confirmButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        cancelButton = new QPushButton(VertebraSelectionWidget);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(590, 450, 100, 40));
        cancelButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label = new QLabel(VertebraSelectionWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 10, 461, 41));
        label->setStyleSheet(QString::fromUtf8("background-color:rgb(23, 23, 26);\n"
"color:rgb(220, 220, 220);\n"
"qproperty-alignment: AlignCenter;\n"
"font-size:20px;\n"
"\n"
""));
        l5LButton = new QPushButton(VertebraSelectionWidget);
        l5LButton->setObjectName("l5LButton");
        l5LButton->setGeometry(QRect(80, 310, 100, 40));
        l5LButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        retranslateUi(VertebraSelectionWidget);

        QMetaObject::connectSlotsByName(VertebraSelectionWidget);
    } // setupUi

    void retranslateUi(QWidget *VertebraSelectionWidget)
    {
        VertebraSelectionWidget->setWindowTitle(QCoreApplication::translate("VertebraSelectionWidget", "Form", nullptr));
        confirmButton->setText(QCoreApplication::translate("VertebraSelectionWidget", "\347\241\256\350\256\244", nullptr));
        cancelButton->setText(QCoreApplication::translate("VertebraSelectionWidget", "\345\217\226\346\266\210", nullptr));
        label->setText(QCoreApplication::translate("VertebraSelectionWidget", "\346\267\273\345\212\240\345\205\245\350\267\257", nullptr));
        l5LButton->setText(QCoreApplication::translate("VertebraSelectionWidget", "L5-L", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VertebraSelectionWidget: public Ui_VertebraSelectionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERTEBRASELECTIONWIDGET_H
