/********************************************************************************
** Form generated from reading UI file 'imagedisplaywidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEDISPLAYWIDGET_H
#define UI_IMAGEDISPLAYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QVTKOpenGLNativeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ImageDisplayWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *visualizationWidget;
    QGridLayout *gridLayout;
    QWidget *transverseWidget;
    QHBoxLayout *horizontalLayout_2;
    QVTKOpenGLNativeWidget *transversePlate;
    QWidget *transverseTools;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *enlargeTransverseButton;
    QSlider *transverseSlider;
    QWidget *sagittalWidget;
    QHBoxLayout *horizontalLayout_4;
    QVTKOpenGLNativeWidget *sagittalPlate;
    QWidget *sagittalTools;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *enlargeSagittalButton;
    QSlider *sagittalSlider;
    QWidget *coronalWidget;
    QHBoxLayout *horizontalLayout_6;
    QVTKOpenGLNativeWidget *coronalPlate;
    QWidget *coronalTools;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *enlargeCoronalButton;
    QSlider *coronalSlider;
    QWidget *model3DWidget;
    QHBoxLayout *horizontalLayout_8;
    QVTKOpenGLNativeWidget *model3DPlate;
    QVTKOpenGLNativeWidget *model3DBody;
    QWidget *model3DTools;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *enlarge3DModelButton;
    QWidget *additionWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *verticalSpacer_12;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QStackedWidget *stackedWidget;

    void setupUi(QWidget *ImageDisplayWidget)
    {
        if (ImageDisplayWidget->objectName().isEmpty())
            ImageDisplayWidget->setObjectName("ImageDisplayWidget");
        ImageDisplayWidget->resize(1510, 996);
        ImageDisplayWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 29, 33)"));
        horizontalLayout = new QHBoxLayout(ImageDisplayWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        visualizationWidget = new QWidget(ImageDisplayWidget);
        visualizationWidget->setObjectName("visualizationWidget");
        visualizationWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        gridLayout = new QGridLayout(visualizationWidget);
        gridLayout->setSpacing(4);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        transverseWidget = new QWidget(visualizationWidget);
        transverseWidget->setObjectName("transverseWidget");
        horizontalLayout_2 = new QHBoxLayout(transverseWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        transversePlate = new QVTKOpenGLNativeWidget(transverseWidget);
        transversePlate->setObjectName("transversePlate");
        transversePlate->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));

        horizontalLayout_2->addWidget(transversePlate);

        transverseTools = new QWidget(transverseWidget);
        transverseTools->setObjectName("transverseTools");
        horizontalLayout_3 = new QHBoxLayout(transverseTools);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        enlargeTransverseButton = new QPushButton(transverseTools);
        enlargeTransverseButton->setObjectName("enlargeTransverseButton");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(enlargeTransverseButton->sizePolicy().hasHeightForWidth());
        enlargeTransverseButton->setSizePolicy(sizePolicy);
        enlargeTransverseButton->setMinimumSize(QSize(30, 30));

        horizontalLayout_3->addWidget(enlargeTransverseButton);

        transverseSlider = new QSlider(transverseTools);
        transverseSlider->setObjectName("transverseSlider");
        transverseSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:vertical {\n"
"    background: #000000;    /* \351\273\221\350\211\262\346\273\221\350\275\250 */\n"
"    width: 10px;            /* \346\273\221\350\275\250\345\256\275\345\272\246 */\n"
"    border-radius: 5px;     /* \345\234\206\350\247\222 */\n"
"    margin: 0px;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: #8A2BE2;    /* \347\264\253\350\211\262\346\273\221\345\235\227 */\n"
"    border: none;           /* \346\227\240\350\276\271\346\241\206 */\n"
"    width: 16px;            /* \346\273\221\345\235\227\345\256\275\345\272\246 */\n"
"    height: 30px;           /* \347\274\251\347\237\255\347\232\204\346\273\221\345\235\227\351\225\277\345\272\246 */\n"
"    margin: 0px 0;         /* \350\260\203\346\225\264\346\273\221\345\235\227\344\275\215\347\275\256 */\n"
"    border-radius: 5px;     /* \345\234\206\350\247\222 */\n"
"}\n"
"\n"
"QSlider::handle:vertical:hover {\n"
"    background: #9C4DE8;    /* \346\202\254\345\201\234\346\227\266\344\272\256\347\264\253\350\211\262"
                        " */\n"
"}\n"
"\n"
"QSlider::handle:vertical:pressed {\n"
"    background: #7B17D9;    /* \346\214\211\344\270\213\346\227\266\346\267\261\347\264\253\350\211\262 */\n"
"}"));
        transverseSlider->setOrientation(Qt::Vertical);

        horizontalLayout_3->addWidget(transverseSlider);


        horizontalLayout_2->addWidget(transverseTools);

        horizontalLayout_2->setStretch(0, 14);
        horizontalLayout_2->setStretch(1, 3);

        gridLayout->addWidget(transverseWidget, 0, 0, 1, 1);

        sagittalWidget = new QWidget(visualizationWidget);
        sagittalWidget->setObjectName("sagittalWidget");
        horizontalLayout_4 = new QHBoxLayout(sagittalWidget);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        sagittalPlate = new QVTKOpenGLNativeWidget(sagittalWidget);
        sagittalPlate->setObjectName("sagittalPlate");
        sagittalPlate->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));

        horizontalLayout_4->addWidget(sagittalPlate);

        sagittalTools = new QWidget(sagittalWidget);
        sagittalTools->setObjectName("sagittalTools");
        horizontalLayout_5 = new QHBoxLayout(sagittalTools);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        enlargeSagittalButton = new QPushButton(sagittalTools);
        enlargeSagittalButton->setObjectName("enlargeSagittalButton");
        sizePolicy.setHeightForWidth(enlargeSagittalButton->sizePolicy().hasHeightForWidth());
        enlargeSagittalButton->setSizePolicy(sizePolicy);
        enlargeSagittalButton->setMinimumSize(QSize(30, 30));

        horizontalLayout_5->addWidget(enlargeSagittalButton);

        sagittalSlider = new QSlider(sagittalTools);
        sagittalSlider->setObjectName("sagittalSlider");
        sagittalSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:vertical {\n"
"    background: #000000;    /* \351\273\221\350\211\262\346\273\221\350\275\250 */\n"
"    width: 10px;            /* \346\273\221\350\275\250\345\256\275\345\272\246 */\n"
"    border-radius: 5px;     /* \345\234\206\350\247\222 */\n"
"    margin: 0px;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: #FFB74D;    /* \346\251\231\351\273\204\350\211\262\346\273\221\345\235\227 */\n"
"    border: none;           /* \346\227\240\350\276\271\346\241\206 */\n"
"    width: 16px;            /* \346\273\221\345\235\227\345\256\275\345\272\246 */\n"
"    height: 30px;           /* \346\273\221\345\235\227\351\225\277\345\272\246 */\n"
"    margin: 0px 0;          /* \346\273\221\345\235\227\344\275\215\347\275\256 */\n"
"    border-radius: 5px;     /* \345\234\206\350\247\222 */\n"
"}\n"
"\n"
"QSlider::handle:vertical:hover {\n"
"    background: #FFCC80;    /* \346\202\254\345\201\234\346\227\266\346\265\205\346\251\231\351\273\204\350\211\262 */\n"
"}\n"
"\n"
"QSlider::handl"
                        "e:vertical:pressed {\n"
"    background: #FFA726;    /* \346\214\211\344\270\213\346\227\266\346\267\261\346\251\231\351\273\204\350\211\262 */\n"
"}"));
        sagittalSlider->setOrientation(Qt::Vertical);

        horizontalLayout_5->addWidget(sagittalSlider);


        horizontalLayout_4->addWidget(sagittalTools);

        horizontalLayout_4->setStretch(0, 14);
        horizontalLayout_4->setStretch(1, 3);

        gridLayout->addWidget(sagittalWidget, 0, 1, 1, 1);

        coronalWidget = new QWidget(visualizationWidget);
        coronalWidget->setObjectName("coronalWidget");
        horizontalLayout_6 = new QHBoxLayout(coronalWidget);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        coronalPlate = new QVTKOpenGLNativeWidget(coronalWidget);
        coronalPlate->setObjectName("coronalPlate");
        coronalPlate->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));

        horizontalLayout_6->addWidget(coronalPlate);

        coronalTools = new QWidget(coronalWidget);
        coronalTools->setObjectName("coronalTools");
        horizontalLayout_7 = new QHBoxLayout(coronalTools);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        enlargeCoronalButton = new QPushButton(coronalTools);
        enlargeCoronalButton->setObjectName("enlargeCoronalButton");
        sizePolicy.setHeightForWidth(enlargeCoronalButton->sizePolicy().hasHeightForWidth());
        enlargeCoronalButton->setSizePolicy(sizePolicy);
        enlargeCoronalButton->setMinimumSize(QSize(30, 30));

        horizontalLayout_7->addWidget(enlargeCoronalButton);

        coronalSlider = new QSlider(coronalTools);
        coronalSlider->setObjectName("coronalSlider");
        coronalSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:vertical {\n"
"    background: #000000;    /* \351\273\221\350\211\262\346\273\221\350\275\250 */\n"
"    width: 10px;            /* \346\273\221\350\275\250\345\256\275\345\272\246 */\n"
"    border-radius: 5px;     /* \345\234\206\350\247\222 */\n"
"    margin: 0px;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: #1E88E5;    /* \346\267\261\350\223\235\350\211\262\346\273\221\345\235\227 (\351\235\236\345\242\250\350\223\235) */\n"
"    border: none;           /* \346\227\240\350\276\271\346\241\206 */\n"
"    width: 16px;            /* \346\273\221\345\235\227\345\256\275\345\272\246 */\n"
"    height: 30px;           /* \346\273\221\345\235\227\351\225\277\345\272\246 */\n"
"    margin: 0px 0;          /* \346\273\221\345\235\227\344\275\215\347\275\256 */\n"
"    border-radius: 5px;     /* \345\234\206\350\247\222 */\n"
"}\n"
"\n"
"QSlider::handle:vertical:hover {\n"
"    background: #42A5F5;    /* \346\202\254\345\201\234\346\227\266\344\272\256\346\267\261\350\223\235\350\211"
                        "\262 */\n"
"}\n"
"\n"
"QSlider::handle:vertical:pressed {\n"
"    background: #0D47A1;    /* \346\214\211\344\270\213\346\227\266\346\233\264\346\267\261\350\223\235\350\211\262 */\n"
"}"));
        coronalSlider->setOrientation(Qt::Vertical);

        horizontalLayout_7->addWidget(coronalSlider);


        horizontalLayout_6->addWidget(coronalTools);

        horizontalLayout_6->setStretch(0, 14);
        horizontalLayout_6->setStretch(1, 3);

        gridLayout->addWidget(coronalWidget, 1, 0, 1, 1);

        model3DWidget = new QWidget(visualizationWidget);
        model3DWidget->setObjectName("model3DWidget");
        horizontalLayout_8 = new QHBoxLayout(model3DWidget);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        model3DPlate = new QVTKOpenGLNativeWidget(model3DWidget);
        model3DPlate->setObjectName("model3DPlate");
        model3DPlate->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));

        horizontalLayout_8->addWidget(model3DPlate);

        model3DBody = new QVTKOpenGLNativeWidget(model3DWidget);
        model3DBody->setObjectName("model3DBody");
        model3DBody->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));

        horizontalLayout_8->addWidget(model3DBody);

        model3DTools = new QWidget(model3DWidget);
        model3DTools->setObjectName("model3DTools");
        horizontalLayout_9 = new QHBoxLayout(model3DTools);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        enlarge3DModelButton = new QPushButton(model3DTools);
        enlarge3DModelButton->setObjectName("enlarge3DModelButton");
        sizePolicy.setHeightForWidth(enlarge3DModelButton->sizePolicy().hasHeightForWidth());
        enlarge3DModelButton->setSizePolicy(sizePolicy);
        enlarge3DModelButton->setMinimumSize(QSize(30, 30));

        horizontalLayout_9->addWidget(enlarge3DModelButton);


        horizontalLayout_8->addWidget(model3DTools);

        horizontalLayout_8->setStretch(0, 28);
        horizontalLayout_8->setStretch(1, 4);
        horizontalLayout_8->setStretch(2, 5);

        gridLayout->addWidget(model3DWidget, 1, 1, 1, 1);


        horizontalLayout->addWidget(visualizationWidget);

        additionWidget = new QWidget(ImageDisplayWidget);
        additionWidget->setObjectName("additionWidget");
        additionWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 29, 33);"));
        verticalLayout = new QVBoxLayout(additionWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_7);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_8);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_9);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_10);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_11);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_12);

        pushButton = new QPushButton(additionWidget);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/resource/image/unknow1.png);\n"
"background-position: center; \n"
"background-repeat: no-repeat;"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(additionWidget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/resource/image/unknow2.png);\n"
"background-position: center; \n"
"background-repeat: no-repeat;"));

        verticalLayout->addWidget(pushButton_2);


        horizontalLayout->addWidget(additionWidget);

        stackedWidget = new QStackedWidget(ImageDisplayWidget);
        stackedWidget->setObjectName("stackedWidget");
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 17, 18);"));

        horizontalLayout->addWidget(stackedWidget);

        horizontalLayout->setStretch(0, 92);
        horizontalLayout->setStretch(1, 6);
        horizontalLayout->setStretch(2, 32);

        retranslateUi(ImageDisplayWidget);

        stackedWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(ImageDisplayWidget);
    } // setupUi

    void retranslateUi(QWidget *ImageDisplayWidget)
    {
        ImageDisplayWidget->setWindowTitle(QCoreApplication::translate("ImageDisplayWidget", "Form", nullptr));
        enlargeTransverseButton->setText(QCoreApplication::translate("ImageDisplayWidget", "\346\211\251\345\244\247", nullptr));
        enlargeSagittalButton->setText(QCoreApplication::translate("ImageDisplayWidget", "\346\211\251\345\244\247", nullptr));
        enlargeCoronalButton->setText(QCoreApplication::translate("ImageDisplayWidget", "\346\211\251\345\244\247", nullptr));
        enlarge3DModelButton->setText(QCoreApplication::translate("ImageDisplayWidget", "\346\211\251\345\244\247", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ImageDisplayWidget: public Ui_ImageDisplayWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEDISPLAYWIDGET_H
