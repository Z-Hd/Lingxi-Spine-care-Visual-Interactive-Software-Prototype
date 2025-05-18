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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NDIWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QListWidget *listWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;

    void setupUi(QWidget *NDIWidget)
    {
        if (NDIWidget->objectName().isEmpty())
            NDIWidget->setObjectName("NDIWidget");
        NDIWidget->resize(599, 522);
        horizontalLayout = new QHBoxLayout(NDIWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        splitter = new QSplitter(NDIWidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        listWidget = new QListWidget(splitter);
        listWidget->setObjectName("listWidget");
        splitter->addWidget(listWidget);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());
        splitter->addWidget(tabWidget);

        horizontalLayout->addWidget(splitter);


        retranslateUi(NDIWidget);

        QMetaObject::connectSlotsByName(NDIWidget);
    } // setupUi

    void retranslateUi(QWidget *NDIWidget)
    {
        NDIWidget->setWindowTitle(QCoreApplication::translate("NDIWidget", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("NDIWidget", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("NDIWidget", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NDIWidget: public Ui_NDIWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NDIWIDGET_H
