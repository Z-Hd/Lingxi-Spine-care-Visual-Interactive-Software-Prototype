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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VertebraSelectionWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QWidget *xWidget;
    QHBoxLayout *horizontalLayout_3;
    QWidget *spineModelWidget;
    QWidget *opWidget;
    QVBoxLayout *verticalLayout;
    QWidget *routeInfoWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *nameText;
    QLabel *nameValue;
    QLabel *diameterText;
    QComboBox *diameterValue;
    QLabel *lengthText;
    QComboBox *lengthValue;
    QWidget *selectWidget;
    QPushButton *l5RButton;
    QPushButton *l5LButton;
    QWidget *buttonWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *confirmButton;
    QPushButton *cancelButton;

    void setupUi(QWidget *VertebraSelectionWidget)
    {
        if (VertebraSelectionWidget->objectName().isEmpty())
            VertebraSelectionWidget->setObjectName("VertebraSelectionWidget");
        VertebraSelectionWidget->resize(960, 640);
        VertebraSelectionWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 17, 18);"));
        verticalLayout_2 = new QVBoxLayout(VertebraSelectionWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(VertebraSelectionWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(36, 38, 43);\n"
"color:rgb(220, 220, 220);\n"
"qproperty-alignment: AlignCenter;\n"
"font-size:20px;"));

        verticalLayout_2->addWidget(label);

        xWidget = new QWidget(VertebraSelectionWidget);
        xWidget->setObjectName("xWidget");
        horizontalLayout_3 = new QHBoxLayout(xWidget);
        horizontalLayout_3->setSpacing(60);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(30, 20, 30, 10);
        spineModelWidget = new QWidget(xWidget);
        spineModelWidget->setObjectName("spineModelWidget");
        spineModelWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 29, 33);\n"
"border-image: url(:/resource/image/spinemodel.png);\n"
"background-position: center; \n"
"background-repeat: no-repeat;"));

        horizontalLayout_3->addWidget(spineModelWidget);

        opWidget = new QWidget(xWidget);
        opWidget->setObjectName("opWidget");
        verticalLayout = new QVBoxLayout(opWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        routeInfoWidget = new QWidget(opWidget);
        routeInfoWidget->setObjectName("routeInfoWidget");
        horizontalLayout_2 = new QHBoxLayout(routeInfoWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        nameText = new QLabel(routeInfoWidget);
        nameText->setObjectName("nameText");
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        nameText->setFont(font);
        nameText->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"qproperty-alignment: 'AlignCenter';"));
        nameText->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(nameText);

        nameValue = new QLabel(routeInfoWidget);
        nameValue->setObjectName("nameValue");
        nameValue->setFont(font);
        nameValue->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"background-color: rgb(28, 29, 33);\n"
"qproperty-alignment: 'AlignCenter';"));
        nameValue->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(nameValue);

        diameterText = new QLabel(routeInfoWidget);
        diameterText->setObjectName("diameterText");
        diameterText->setFont(font);
        diameterText->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"qproperty-alignment: 'AlignCenter';"));
        diameterText->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(diameterText);

        diameterValue = new QComboBox(routeInfoWidget);
        diameterValue->setObjectName("diameterValue");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(diameterValue->sizePolicy().hasHeightForWidth());
        diameterValue->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(14);
        diameterValue->setFont(font1);
        diameterValue->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 85);\n"
"color: rgb(255, 255, 255);\n"
"border: none;\n"
"text-align: center"));
        diameterValue->setMaxVisibleItems(10);

        horizontalLayout_2->addWidget(diameterValue);

        lengthText = new QLabel(routeInfoWidget);
        lengthText->setObjectName("lengthText");
        lengthText->setFont(font);
        lengthText->setStyleSheet(QString::fromUtf8("color: rgb(154, 152, 151);\n"
"qproperty-alignment: 'AlignCenter';"));
        lengthText->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lengthText);

        lengthValue = new QComboBox(routeInfoWidget);
        lengthValue->setObjectName("lengthValue");
        sizePolicy.setHeightForWidth(lengthValue->sizePolicy().hasHeightForWidth());
        lengthValue->setSizePolicy(sizePolicy);
        lengthValue->setFont(font1);
        lengthValue->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 85);\n"
"color: rgb(255, 255, 255);\n"
"border: none;\n"
"text-align: center"));

        horizontalLayout_2->addWidget(lengthValue);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 1);
        horizontalLayout_2->setStretch(3, 2);
        horizontalLayout_2->setStretch(4, 1);
        horizontalLayout_2->setStretch(5, 2);

        verticalLayout->addWidget(routeInfoWidget);

        selectWidget = new QWidget(opWidget);
        selectWidget->setObjectName("selectWidget");
        selectWidget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    border-image: url(:/resource/image/vertebraselect.png);\n"
"    background-position: center;\n"
"    background-repeat: no-repeat;\n"
"}\n"
"\n"
"QPushButton {\n"
"    border-image: none; /* \351\207\215\347\275\256\346\214\211\351\222\256\347\232\204\350\203\214\346\231\257 */\n"
"    background-color: transparent; /* \347\241\256\344\277\235\350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"}"));
        l5RButton = new QPushButton(selectWidget);
        l5RButton->setObjectName("l5RButton");
        l5RButton->setGeometry(QRect(520, 280, 100, 40));
        l5RButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        l5LButton = new QPushButton(selectWidget);
        l5LButton->setObjectName("l5LButton");
        l5LButton->setGeometry(QRect(20, 280, 100, 40));
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

        verticalLayout->addWidget(selectWidget);

        buttonWidget = new QWidget(opWidget);
        buttonWidget->setObjectName("buttonWidget");
        horizontalLayout = new QHBoxLayout(buttonWidget);
        horizontalLayout->setSpacing(40);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(400, 0, 0, 0);
        confirmButton = new QPushButton(buttonWidget);
        confirmButton->setObjectName("confirmButton");
        sizePolicy.setHeightForWidth(confirmButton->sizePolicy().hasHeightForWidth());
        confirmButton->setSizePolicy(sizePolicy);
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

        horizontalLayout->addWidget(confirmButton);

        cancelButton = new QPushButton(buttonWidget);
        cancelButton->setObjectName("cancelButton");
        sizePolicy.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
        cancelButton->setSizePolicy(sizePolicy);
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

        horizontalLayout->addWidget(cancelButton);


        verticalLayout->addWidget(buttonWidget);

        verticalLayout->setStretch(0, 5);
        verticalLayout->setStretch(1, 60);
        verticalLayout->setStretch(2, 4);

        horizontalLayout_3->addWidget(opWidget);

        horizontalLayout_3->setStretch(0, 2);
        horizontalLayout_3->setStretch(1, 5);

        verticalLayout_2->addWidget(xWidget);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 15);

        retranslateUi(VertebraSelectionWidget);

        QMetaObject::connectSlotsByName(VertebraSelectionWidget);
    } // setupUi

    void retranslateUi(QWidget *VertebraSelectionWidget)
    {
        VertebraSelectionWidget->setWindowTitle(QCoreApplication::translate("VertebraSelectionWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("VertebraSelectionWidget", "\346\267\273\345\212\240\345\205\245\350\267\257", nullptr));
        nameText->setText(QCoreApplication::translate("VertebraSelectionWidget", "\345\220\215\347\247\260", nullptr));
        nameValue->setText(QCoreApplication::translate("VertebraSelectionWidget", "L5-L", nullptr));
        diameterText->setText(QCoreApplication::translate("VertebraSelectionWidget", "\347\233\264\345\276\204", nullptr));
        diameterValue->setPlaceholderText(QCoreApplication::translate("VertebraSelectionWidget", "6.00mm", nullptr));
        lengthText->setText(QCoreApplication::translate("VertebraSelectionWidget", "\351\225\277\345\272\246", nullptr));
        lengthValue->setPlaceholderText(QCoreApplication::translate("VertebraSelectionWidget", "45.00mm", nullptr));
        l5RButton->setText(QCoreApplication::translate("VertebraSelectionWidget", "L5-R", nullptr));
        l5LButton->setText(QCoreApplication::translate("VertebraSelectionWidget", "L5-L", nullptr));
        confirmButton->setText(QCoreApplication::translate("VertebraSelectionWidget", "\347\241\256\350\256\244", nullptr));
        cancelButton->setText(QCoreApplication::translate("VertebraSelectionWidget", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VertebraSelectionWidget: public Ui_VertebraSelectionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERTEBRASELECTIONWIDGET_H
