/********************************************************************************
** Form generated from reading UI file 'armcontrolwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARMCONTROLWIDGET_H
#define UI_ARMCONTROLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ArmControlWidget
{
public:

    void setupUi(QWidget *ArmControlWidget)
    {
        if (ArmControlWidget->objectName().isEmpty())
            ArmControlWidget->setObjectName("ArmControlWidget");
        ArmControlWidget->resize(400, 300);

        retranslateUi(ArmControlWidget);

        QMetaObject::connectSlotsByName(ArmControlWidget);
    } // setupUi

    void retranslateUi(QWidget *ArmControlWidget)
    {
        ArmControlWidget->setWindowTitle(QCoreApplication::translate("ArmControlWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ArmControlWidget: public Ui_ArmControlWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARMCONTROLWIDGET_H
