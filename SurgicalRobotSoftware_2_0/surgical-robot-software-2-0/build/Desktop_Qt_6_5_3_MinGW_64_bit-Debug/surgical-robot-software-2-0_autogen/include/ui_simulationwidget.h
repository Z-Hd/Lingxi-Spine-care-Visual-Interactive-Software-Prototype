/********************************************************************************
** Form generated from reading UI file 'simulationwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMULATIONWIDGET_H
#define UI_SIMULATIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SimulationWidget
{
public:
    QLabel *label;

    void setupUi(QWidget *SimulationWidget)
    {
        if (SimulationWidget->objectName().isEmpty())
            SimulationWidget->setObjectName("SimulationWidget");
        SimulationWidget->resize(1109, 656);
        label = new QLabel(SimulationWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 150, 171, 81));

        retranslateUi(SimulationWidget);

        QMetaObject::connectSlotsByName(SimulationWidget);
    } // setupUi

    void retranslateUi(QWidget *SimulationWidget)
    {
        SimulationWidget->setWindowTitle(QCoreApplication::translate("SimulationWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("SimulationWidget", "simulation Widget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SimulationWidget: public Ui_SimulationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMULATIONWIDGET_H
