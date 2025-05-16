/********************************************************************************
** Form generated from reading UI file 'ndiwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NDIWIDGET_H
#define UI_NDIWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NDIWidget
{
public:

    void setupUi(QWidget *NDIWidget)
    {
        if (NDIWidget->objectName().isEmpty())
            NDIWidget->setObjectName("NDIWidget");
        NDIWidget->resize(400, 300);

        retranslateUi(NDIWidget);

        QMetaObject::connectSlotsByName(NDIWidget);
    } // setupUi

    void retranslateUi(QWidget *NDIWidget)
    {
        NDIWidget->setWindowTitle(QCoreApplication::translate("NDIWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NDIWidget: public Ui_NDIWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NDIWIDGET_H
