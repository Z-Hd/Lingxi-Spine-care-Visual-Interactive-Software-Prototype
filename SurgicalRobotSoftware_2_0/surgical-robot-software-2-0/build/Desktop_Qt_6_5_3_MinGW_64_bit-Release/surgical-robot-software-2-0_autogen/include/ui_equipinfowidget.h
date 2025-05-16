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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EquipInfoWidget
{
public:
    QPushButton *confirmButton;

    void setupUi(QWidget *EquipInfoWidget)
    {
        if (EquipInfoWidget->objectName().isEmpty())
            EquipInfoWidget->setObjectName("EquipInfoWidget");
        EquipInfoWidget->resize(400, 300);
        confirmButton = new QPushButton(EquipInfoWidget);
        confirmButton->setObjectName("confirmButton");
        confirmButton->setGeometry(QRect(220, 140, 81, 31));
        confirmButton->setStyleSheet(QString::fromUtf8("background-color:rgb(34, 35, 39);color:rgb(115, 118, 125)"));

        retranslateUi(EquipInfoWidget);

        QMetaObject::connectSlotsByName(EquipInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *EquipInfoWidget)
    {
        EquipInfoWidget->setWindowTitle(QCoreApplication::translate("EquipInfoWidget", "Form", nullptr));
        confirmButton->setText(QCoreApplication::translate("EquipInfoWidget", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EquipInfoWidget: public Ui_EquipInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUIPINFOWIDGET_H
