/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qvtkopenglnativewidget.h>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *Refresh_2;
    QPushButton *Previous_2;
    QPushButton *Next_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QVTKOpenGLNativeWidget *Sagittal_2;
    QVTKOpenGLNativeWidget *Coronal_2;
    QVTKOpenGLNativeWidget *Transverse_2;
    QVTKOpenGLNativeWidget *Model3D_2;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(953, 554);
        verticalLayout = new QVBoxLayout(Form);
        verticalLayout->setObjectName("verticalLayout");
        groupBox_3 = new QGroupBox(Form);
        groupBox_3->setObjectName("groupBox_3");
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(groupBox_3);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(20);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        groupBox = new QGroupBox(groupBox_3);
        groupBox->setObjectName("groupBox");
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        Refresh_2 = new QPushButton(groupBox);
        Refresh_2->setObjectName("Refresh_2");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Refresh_2->sizePolicy().hasHeightForWidth());
        Refresh_2->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(Refresh_2);

        Previous_2 = new QPushButton(groupBox);
        Previous_2->setObjectName("Previous_2");
        sizePolicy1.setHeightForWidth(Previous_2->sizePolicy().hasHeightForWidth());
        Previous_2->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(Previous_2);

        Next_2 = new QPushButton(groupBox);
        Next_2->setObjectName("Next_2");
        sizePolicy1.setHeightForWidth(Next_2->sizePolicy().hasHeightForWidth());
        Next_2->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(Next_2);


        horizontalLayout_2->addWidget(groupBox);


        verticalLayout->addWidget(groupBox_3);

        groupBox_2 = new QGroupBox(Form);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName("gridLayout");
        Sagittal_2 = new QVTKOpenGLNativeWidget(groupBox_2);
        Sagittal_2->setObjectName("Sagittal_2");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Sagittal_2->sizePolicy().hasHeightForWidth());
        Sagittal_2->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(Sagittal_2, 0, 1, 1, 1);

        Coronal_2 = new QVTKOpenGLNativeWidget(groupBox_2);
        Coronal_2->setObjectName("Coronal_2");
        sizePolicy2.setHeightForWidth(Coronal_2->sizePolicy().hasHeightForWidth());
        Coronal_2->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(Coronal_2, 0, 0, 1, 1);

        Transverse_2 = new QVTKOpenGLNativeWidget(groupBox_2);
        Transverse_2->setObjectName("Transverse_2");
        sizePolicy2.setHeightForWidth(Transverse_2->sizePolicy().hasHeightForWidth());
        Transverse_2->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(Transverse_2, 1, 0, 1, 1);

        Model3D_2 = new QVTKOpenGLNativeWidget(groupBox_2);
        Model3D_2->setObjectName("Model3D_2");
        sizePolicy2.setHeightForWidth(Model3D_2->sizePolicy().hasHeightForWidth());
        Model3D_2->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(Model3D_2, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox_2);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        groupBox_3->setTitle(QString());
        label->setText(QCoreApplication::translate("Form", "\346\244\216\351\227\264\345\255\224\351\200\232\351\201\223\345\205\245\350\267\257\345\256\232\344\275\215", nullptr));
        groupBox->setTitle(QString());
        Refresh_2->setText(QCoreApplication::translate("Form", "\345\210\267\346\226\260", nullptr));
        Previous_2->setText(QCoreApplication::translate("Form", "\344\270\212\344\270\200\344\270\252", nullptr));
        Next_2->setText(QCoreApplication::translate("Form", "\344\270\213\344\270\200\344\270\252", nullptr));
        groupBox_2->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
