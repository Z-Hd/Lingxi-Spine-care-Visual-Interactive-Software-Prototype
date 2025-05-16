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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PatientInfoWidget
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QPushButton *confirmButton;

    void setupUi(QWidget *PatientInfoWidget)
    {
        if (PatientInfoWidget->objectName().isEmpty())
            PatientInfoWidget->setObjectName("PatientInfoWidget");
        PatientInfoWidget->resize(897, 512);
        gridLayout = new QGridLayout(PatientInfoWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(PatientInfoWidget);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 0, 0)"));
        confirmButton = new QPushButton(widget);
        confirmButton->setObjectName("confirmButton");
        confirmButton->setGeometry(QRect(770, 450, 81, 31));
        confirmButton->setStyleSheet(QString::fromUtf8("background-color:rgb(34, 35, 39);color:rgb(115, 118, 125)"));

        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(PatientInfoWidget);

        QMetaObject::connectSlotsByName(PatientInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *PatientInfoWidget)
    {
        PatientInfoWidget->setWindowTitle(QCoreApplication::translate("PatientInfoWidget", "Form", nullptr));
        confirmButton->setText(QCoreApplication::translate("PatientInfoWidget", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PatientInfoWidget: public Ui_PatientInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTINFOWIDGET_H
