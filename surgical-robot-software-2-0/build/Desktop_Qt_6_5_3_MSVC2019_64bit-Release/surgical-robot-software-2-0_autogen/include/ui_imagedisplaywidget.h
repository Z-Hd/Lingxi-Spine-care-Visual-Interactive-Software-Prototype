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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
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
    QLabel *labelP;
    QLabel *labelL;
    QLabel *labelR;
    QLabel *labelA;
    QFrame *coronalLine_1;
    QFrame *sagittalLine_1;
    QWidget *transverseTools;
    QHBoxLayout *horizontalLayout_3;
    QWidget *transverseButtonsWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *unfoldButton;
    QWidget *transverseButtons;
    QGridLayout *gridLayout_2;
    QPushButton *rightButton;
    QPushButton *antiClockWiseButton;
    QPushButton *downButton;
    QPushButton *brightButton;
    QPushButton *clockWiseButton;
    QPushButton *eraseButton;
    QPushButton *enlargeTransverseButton;
    QPushButton *distanceMeasureButton;
    QPushButton *rotateButton;
    QPushButton *MPRButton;
    QPushButton *angleMeasureButton;
    QPushButton *upButton;
    QPushButton *leftButton;
    QPushButton *targetButton;
    QWidget *transverseSpaceWidget;
    QSlider *transverseSlider;
    QWidget *sagittalWidget;
    QHBoxLayout *horizontalLayout_4;
    QVTKOpenGLNativeWidget *sagittalPlate;
    QLabel *labelS;
    QLabel *labelP_2;
    QLabel *labelI;
    QLabel *labelA_2;
    QFrame *coronalLine_2;
    QFrame *transverseLine_1;
    QWidget *sagittalTools;
    QHBoxLayout *horizontalLayout_5;
    QWidget *sagittalButtonsWidget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *unfoldButton_2;
    QWidget *sagittalButtons;
    QGridLayout *gridLayout_3;
    QPushButton *MPRButton_2;
    QPushButton *distanceMeasureButton_2;
    QPushButton *clockWiseButton_2;
    QPushButton *rotateButton_2;
    QPushButton *enlargeSagittalButton;
    QPushButton *targetButton_2;
    QPushButton *leftButton_2;
    QPushButton *brightButton_2;
    QPushButton *rightButton_2;
    QPushButton *angleMeasureButton_2;
    QPushButton *antiClockWiseButton_2;
    QPushButton *upButton_2;
    QPushButton *eraseButton_2;
    QPushButton *downButton_2;
    QWidget *sagittalSpaceWidget;
    QSlider *sagittalSlider;
    QWidget *coronalWidget;
    QHBoxLayout *horizontalLayout_6;
    QVTKOpenGLNativeWidget *coronalPlate;
    QLabel *labelS_2;
    QLabel *labelL_2;
    QLabel *labelI_2;
    QLabel *labelR_2;
    QFrame *sagittalLine_2;
    QFrame *transverseLine_2;
    QWidget *coronalTools;
    QHBoxLayout *horizontalLayout_7;
    QWidget *coronalButtonsWidget;
    QVBoxLayout *verticalLayout_4;
    QPushButton *unfoldButton_3;
    QWidget *coronalButtons;
    QGridLayout *gridLayout_4;
    QPushButton *rotateButton_3;
    QPushButton *leftButton_3;
    QPushButton *rightButton_3;
    QPushButton *brightButton_3;
    QPushButton *targetButton_3;
    QPushButton *distanceMeasureButton_3;
    QPushButton *upButton_3;
    QPushButton *eraseButton_3;
    QPushButton *MPRButton_3;
    QPushButton *antiClockWiseButton_3;
    QPushButton *enlargeCoronalButton;
    QPushButton *angleMeasureButton_3;
    QPushButton *clockWiseButton_3;
    QPushButton *downButton_3;
    QWidget *coronalSpaceWidget;
    QSlider *coronalSlider;
    QWidget *model3DWidget;
    QHBoxLayout *horizontalLayout_8;
    QVTKOpenGLNativeWidget *model3DPlate;
    QVTKOpenGLNativeWidget *model3DBody;
    QWidget *model3DTools;
    QVBoxLayout *verticalLayout_5;
    QPushButton *unfoldButton_4;
    QWidget *model3DButtons;
    QGridLayout *gridLayout_5;
    QPushButton *enlarge3DModelButton;
    QPushButton *eyeButton;
    QPushButton *cubeButton;
    QPushButton *CButton;
    QPushButton *TButton;
    QPushButton *SButton;
    QPushButton *brightButton_4;
    QWidget *model3DSpaceWidget;
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
        transversePlate->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        labelP = new QLabel(transversePlate);
        labelP->setObjectName("labelP");
        labelP->setGeometry(QRect(180, 0, 40, 40));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font.setPointSize(17);
        font.setBold(true);
        font.setItalic(false);
        labelP->setFont(font);
        labelP->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"qproperty-alignment: 'AlignCenter';"));
        labelL = new QLabel(transversePlate);
        labelL->setObjectName("labelL");
        labelL->setGeometry(QRect(0, 210, 40, 40));
        labelL->setFont(font);
        labelL->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"qproperty-alignment: 'AlignCenter';"));
        labelR = new QLabel(transversePlate);
        labelR->setObjectName("labelR");
        labelR->setGeometry(QRect(390, 220, 40, 40));
        labelR->setFont(font);
        labelR->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"qproperty-alignment: 'AlignCenter';"));
        labelA = new QLabel(transversePlate);
        labelA->setObjectName("labelA");
        labelA->setGeometry(QRect(180, 450, 40, 40));
        labelA->setFont(font);
        labelA->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"qproperty-alignment: 'AlignCenter';"));
        coronalLine_1 = new QFrame(transversePlate);
        coronalLine_1->setObjectName("coronalLine_1");
        coronalLine_1->setGeometry(QRect(10, 210, 401, 20));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(coronalLine_1->sizePolicy().hasHeightForWidth());
        coronalLine_1->setSizePolicy(sizePolicy);
        coronalLine_1->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color:transparent;\n"
"	min-height:5px;\n"
"	color:#1E88E5\n"
"}"));
        coronalLine_1->setFrameShape(QFrame::HLine);
        coronalLine_1->setFrameShadow(QFrame::Plain);
        coronalLine_1->setLineWidth(2);
        sagittalLine_1 = new QFrame(transversePlate);
        sagittalLine_1->setObjectName("sagittalLine_1");
        sagittalLine_1->setGeometry(QRect(190, 10, 20, 421));
        sizePolicy.setHeightForWidth(sagittalLine_1->sizePolicy().hasHeightForWidth());
        sagittalLine_1->setSizePolicy(sizePolicy);
        sagittalLine_1->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color:transparent;\n"
"	min-width:5px;\n"
"	color:#FFB74D\n"
"}"));
        sagittalLine_1->setFrameShape(QFrame::VLine);
        sagittalLine_1->setFrameShadow(QFrame::Plain);
        sagittalLine_1->setLineWidth(2);

        horizontalLayout_2->addWidget(transversePlate);

        transverseTools = new QWidget(transverseWidget);
        transverseTools->setObjectName("transverseTools");
        transverseTools->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_3 = new QHBoxLayout(transverseTools);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        transverseButtonsWidget = new QWidget(transverseTools);
        transverseButtonsWidget->setObjectName("transverseButtonsWidget");
        transverseButtonsWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        verticalLayout_2 = new QVBoxLayout(transverseButtonsWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(4, 6, 4, 0);
        unfoldButton = new QPushButton(transverseButtonsWidget);
        unfoldButton->setObjectName("unfoldButton");
        unfoldButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 10px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 7px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        verticalLayout_2->addWidget(unfoldButton);

        transverseButtons = new QWidget(transverseButtonsWidget);
        transverseButtons->setObjectName("transverseButtons");
        gridLayout_2 = new QGridLayout(transverseButtons);
        gridLayout_2->setSpacing(4);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 6, 0, 0);
        rightButton = new QPushButton(transverseButtons);
        rightButton->setObjectName("rightButton");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(rightButton->sizePolicy().hasHeightForWidth());
        rightButton->setSizePolicy(sizePolicy1);
        rightButton->setMinimumSize(QSize(30, 30));
        rightButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_2->addWidget(rightButton, 6, 0, 1, 1);

        antiClockWiseButton = new QPushButton(transverseButtons);
        antiClockWiseButton->setObjectName("antiClockWiseButton");
        sizePolicy1.setHeightForWidth(antiClockWiseButton->sizePolicy().hasHeightForWidth());
        antiClockWiseButton->setSizePolicy(sizePolicy1);
        antiClockWiseButton->setMinimumSize(QSize(30, 30));
        antiClockWiseButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_2->addWidget(antiClockWiseButton, 2, 0, 1, 1);

        downButton = new QPushButton(transverseButtons);
        downButton->setObjectName("downButton");
        sizePolicy1.setHeightForWidth(downButton->sizePolicy().hasHeightForWidth());
        downButton->setSizePolicy(sizePolicy1);
        downButton->setMinimumSize(QSize(30, 30));
        downButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_2->addWidget(downButton, 4, 0, 1, 1);

        brightButton = new QPushButton(transverseButtons);
        brightButton->setObjectName("brightButton");
        sizePolicy1.setHeightForWidth(brightButton->sizePolicy().hasHeightForWidth());
        brightButton->setSizePolicy(sizePolicy1);
        brightButton->setMinimumSize(QSize(30, 30));
        brightButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_2->addWidget(brightButton, 5, 1, 1, 1);

        clockWiseButton = new QPushButton(transverseButtons);
        clockWiseButton->setObjectName("clockWiseButton");
        sizePolicy1.setHeightForWidth(clockWiseButton->sizePolicy().hasHeightForWidth());
        clockWiseButton->setSizePolicy(sizePolicy1);
        clockWiseButton->setMinimumSize(QSize(30, 30));
        clockWiseButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_2->addWidget(clockWiseButton, 1, 0, 1, 1);

        eraseButton = new QPushButton(transverseButtons);
        eraseButton->setObjectName("eraseButton");
        sizePolicy1.setHeightForWidth(eraseButton->sizePolicy().hasHeightForWidth());
        eraseButton->setSizePolicy(sizePolicy1);
        eraseButton->setMinimumSize(QSize(30, 30));
        eraseButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_2->addWidget(eraseButton, 4, 1, 1, 1);

        enlargeTransverseButton = new QPushButton(transverseButtons);
        enlargeTransverseButton->setObjectName("enlargeTransverseButton");
        sizePolicy1.setHeightForWidth(enlargeTransverseButton->sizePolicy().hasHeightForWidth());
        enlargeTransverseButton->setSizePolicy(sizePolicy1);
        enlargeTransverseButton->setMinimumSize(QSize(30, 30));
        enlargeTransverseButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_2->addWidget(enlargeTransverseButton, 0, 1, 1, 1);

        distanceMeasureButton = new QPushButton(transverseButtons);
        distanceMeasureButton->setObjectName("distanceMeasureButton");
        sizePolicy1.setHeightForWidth(distanceMeasureButton->sizePolicy().hasHeightForWidth());
        distanceMeasureButton->setSizePolicy(sizePolicy1);
        distanceMeasureButton->setMinimumSize(QSize(30, 30));
        distanceMeasureButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_2->addWidget(distanceMeasureButton, 3, 1, 1, 1);

        rotateButton = new QPushButton(transverseButtons);
        rotateButton->setObjectName("rotateButton");
        sizePolicy1.setHeightForWidth(rotateButton->sizePolicy().hasHeightForWidth());
        rotateButton->setSizePolicy(sizePolicy1);
        rotateButton->setMinimumSize(QSize(30, 30));
        rotateButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_2->addWidget(rotateButton, 0, 0, 1, 1);

        MPRButton = new QPushButton(transverseButtons);
        MPRButton->setObjectName("MPRButton");
        sizePolicy1.setHeightForWidth(MPRButton->sizePolicy().hasHeightForWidth());
        MPRButton->setSizePolicy(sizePolicy1);
        MPRButton->setMinimumSize(QSize(30, 30));
        MPRButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_2->addWidget(MPRButton, 1, 1, 1, 1);

        angleMeasureButton = new QPushButton(transverseButtons);
        angleMeasureButton->setObjectName("angleMeasureButton");
        sizePolicy1.setHeightForWidth(angleMeasureButton->sizePolicy().hasHeightForWidth());
        angleMeasureButton->setSizePolicy(sizePolicy1);
        angleMeasureButton->setMinimumSize(QSize(30, 30));
        angleMeasureButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_2->addWidget(angleMeasureButton, 2, 1, 1, 1);

        upButton = new QPushButton(transverseButtons);
        upButton->setObjectName("upButton");
        sizePolicy1.setHeightForWidth(upButton->sizePolicy().hasHeightForWidth());
        upButton->setSizePolicy(sizePolicy1);
        upButton->setMinimumSize(QSize(30, 30));
        upButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_2->addWidget(upButton, 3, 0, 1, 1);

        leftButton = new QPushButton(transverseButtons);
        leftButton->setObjectName("leftButton");
        sizePolicy1.setHeightForWidth(leftButton->sizePolicy().hasHeightForWidth());
        leftButton->setSizePolicy(sizePolicy1);
        leftButton->setMinimumSize(QSize(30, 30));
        leftButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_2->addWidget(leftButton, 5, 0, 1, 1);

        targetButton = new QPushButton(transverseButtons);
        targetButton->setObjectName("targetButton");
        sizePolicy1.setHeightForWidth(targetButton->sizePolicy().hasHeightForWidth());
        targetButton->setSizePolicy(sizePolicy1);
        targetButton->setMinimumSize(QSize(30, 30));
        targetButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_2->addWidget(targetButton, 6, 1, 1, 1);


        verticalLayout_2->addWidget(transverseButtons);

        transverseSpaceWidget = new QWidget(transverseButtonsWidget);
        transverseSpaceWidget->setObjectName("transverseSpaceWidget");

        verticalLayout_2->addWidget(transverseSpaceWidget);

        verticalLayout_2->setStretch(0, 2);
        verticalLayout_2->setStretch(1, 7);
        verticalLayout_2->setStretch(2, 5);

        horizontalLayout_3->addWidget(transverseButtonsWidget);

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
        transverseSlider->setPageStep(10);
        transverseSlider->setOrientation(Qt::Vertical);

        horizontalLayout_3->addWidget(transverseSlider);


        horizontalLayout_2->addWidget(transverseTools);

        horizontalLayout_2->setStretch(0, 28);
        horizontalLayout_2->setStretch(1, 5);

        gridLayout->addWidget(transverseWidget, 0, 0, 1, 1);

        sagittalWidget = new QWidget(visualizationWidget);
        sagittalWidget->setObjectName("sagittalWidget");
        horizontalLayout_4 = new QHBoxLayout(sagittalWidget);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        sagittalPlate = new QVTKOpenGLNativeWidget(sagittalWidget);
        sagittalPlate->setObjectName("sagittalPlate");
        sagittalPlate->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        labelS = new QLabel(sagittalPlate);
        labelS->setObjectName("labelS");
        labelS->setGeometry(QRect(230, 0, 40, 40));
        labelS->setFont(font);
        labelS->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"qproperty-alignment: 'AlignCenter';"));
        labelP_2 = new QLabel(sagittalPlate);
        labelP_2->setObjectName("labelP_2");
        labelP_2->setGeometry(QRect(10, 220, 40, 40));
        labelP_2->setFont(font);
        labelP_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"qproperty-alignment: 'AlignCenter';"));
        labelI = new QLabel(sagittalPlate);
        labelI->setObjectName("labelI");
        labelI->setGeometry(QRect(240, 450, 40, 40));
        labelI->setFont(font);
        labelI->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"qproperty-alignment: 'AlignCenter';"));
        labelA_2 = new QLabel(sagittalPlate);
        labelA_2->setObjectName("labelA_2");
        labelA_2->setGeometry(QRect(380, 230, 40, 40));
        labelA_2->setFont(font);
        labelA_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"qproperty-alignment: 'AlignCenter';"));
        coronalLine_2 = new QFrame(sagittalPlate);
        coronalLine_2->setObjectName("coronalLine_2");
        coronalLine_2->setGeometry(QRect(230, 10, 20, 411));
        sizePolicy.setHeightForWidth(coronalLine_2->sizePolicy().hasHeightForWidth());
        coronalLine_2->setSizePolicy(sizePolicy);
        coronalLine_2->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color:transparent;\n"
"	min-width:5px;\n"
"	color:#1E88E5\n"
"}"));
        coronalLine_2->setFrameShape(QFrame::VLine);
        coronalLine_2->setFrameShadow(QFrame::Plain);
        coronalLine_2->setLineWidth(2);
        transverseLine_1 = new QFrame(sagittalPlate);
        transverseLine_1->setObjectName("transverseLine_1");
        transverseLine_1->setGeometry(QRect(10, 210, 401, 20));
        sizePolicy.setHeightForWidth(transverseLine_1->sizePolicy().hasHeightForWidth());
        transverseLine_1->setSizePolicy(sizePolicy);
        transverseLine_1->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color:transparent;\n"
"	min-height:5px;\n"
"	color:#8A2BE2\n"
"}"));
        transverseLine_1->setFrameShape(QFrame::HLine);
        transverseLine_1->setFrameShadow(QFrame::Plain);
        transverseLine_1->setLineWidth(2);

        horizontalLayout_4->addWidget(sagittalPlate);

        sagittalTools = new QWidget(sagittalWidget);
        sagittalTools->setObjectName("sagittalTools");
        horizontalLayout_5 = new QHBoxLayout(sagittalTools);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        sagittalButtonsWidget = new QWidget(sagittalTools);
        sagittalButtonsWidget->setObjectName("sagittalButtonsWidget");
        sagittalButtonsWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        verticalLayout_3 = new QVBoxLayout(sagittalButtonsWidget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(4, 6, 4, 0);
        unfoldButton_2 = new QPushButton(sagittalButtonsWidget);
        unfoldButton_2->setObjectName("unfoldButton_2");
        unfoldButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 10px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 7px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        verticalLayout_3->addWidget(unfoldButton_2);

        sagittalButtons = new QWidget(sagittalButtonsWidget);
        sagittalButtons->setObjectName("sagittalButtons");
        gridLayout_3 = new QGridLayout(sagittalButtons);
        gridLayout_3->setSpacing(4);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 6, 0, 0);
        MPRButton_2 = new QPushButton(sagittalButtons);
        MPRButton_2->setObjectName("MPRButton_2");
        sizePolicy1.setHeightForWidth(MPRButton_2->sizePolicy().hasHeightForWidth());
        MPRButton_2->setSizePolicy(sizePolicy1);
        MPRButton_2->setMinimumSize(QSize(30, 30));
        MPRButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_3->addWidget(MPRButton_2, 1, 1, 1, 1);

        distanceMeasureButton_2 = new QPushButton(sagittalButtons);
        distanceMeasureButton_2->setObjectName("distanceMeasureButton_2");
        sizePolicy1.setHeightForWidth(distanceMeasureButton_2->sizePolicy().hasHeightForWidth());
        distanceMeasureButton_2->setSizePolicy(sizePolicy1);
        distanceMeasureButton_2->setMinimumSize(QSize(30, 30));
        distanceMeasureButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_3->addWidget(distanceMeasureButton_2, 3, 1, 1, 1);

        clockWiseButton_2 = new QPushButton(sagittalButtons);
        clockWiseButton_2->setObjectName("clockWiseButton_2");
        sizePolicy1.setHeightForWidth(clockWiseButton_2->sizePolicy().hasHeightForWidth());
        clockWiseButton_2->setSizePolicy(sizePolicy1);
        clockWiseButton_2->setMinimumSize(QSize(30, 30));
        clockWiseButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_3->addWidget(clockWiseButton_2, 1, 0, 1, 1);

        rotateButton_2 = new QPushButton(sagittalButtons);
        rotateButton_2->setObjectName("rotateButton_2");
        sizePolicy1.setHeightForWidth(rotateButton_2->sizePolicy().hasHeightForWidth());
        rotateButton_2->setSizePolicy(sizePolicy1);
        rotateButton_2->setMinimumSize(QSize(30, 30));
        rotateButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_3->addWidget(rotateButton_2, 0, 0, 1, 1);

        enlargeSagittalButton = new QPushButton(sagittalButtons);
        enlargeSagittalButton->setObjectName("enlargeSagittalButton");
        sizePolicy1.setHeightForWidth(enlargeSagittalButton->sizePolicy().hasHeightForWidth());
        enlargeSagittalButton->setSizePolicy(sizePolicy1);
        enlargeSagittalButton->setMinimumSize(QSize(30, 30));
        enlargeSagittalButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_3->addWidget(enlargeSagittalButton, 0, 1, 1, 1);

        targetButton_2 = new QPushButton(sagittalButtons);
        targetButton_2->setObjectName("targetButton_2");
        sizePolicy1.setHeightForWidth(targetButton_2->sizePolicy().hasHeightForWidth());
        targetButton_2->setSizePolicy(sizePolicy1);
        targetButton_2->setMinimumSize(QSize(30, 30));
        targetButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_3->addWidget(targetButton_2, 6, 1, 1, 1);

        leftButton_2 = new QPushButton(sagittalButtons);
        leftButton_2->setObjectName("leftButton_2");
        sizePolicy1.setHeightForWidth(leftButton_2->sizePolicy().hasHeightForWidth());
        leftButton_2->setSizePolicy(sizePolicy1);
        leftButton_2->setMinimumSize(QSize(30, 30));
        leftButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_3->addWidget(leftButton_2, 5, 0, 1, 1);

        brightButton_2 = new QPushButton(sagittalButtons);
        brightButton_2->setObjectName("brightButton_2");
        sizePolicy1.setHeightForWidth(brightButton_2->sizePolicy().hasHeightForWidth());
        brightButton_2->setSizePolicy(sizePolicy1);
        brightButton_2->setMinimumSize(QSize(30, 30));
        brightButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_3->addWidget(brightButton_2, 5, 1, 1, 1);

        rightButton_2 = new QPushButton(sagittalButtons);
        rightButton_2->setObjectName("rightButton_2");
        sizePolicy1.setHeightForWidth(rightButton_2->sizePolicy().hasHeightForWidth());
        rightButton_2->setSizePolicy(sizePolicy1);
        rightButton_2->setMinimumSize(QSize(30, 30));
        rightButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_3->addWidget(rightButton_2, 6, 0, 1, 1);

        angleMeasureButton_2 = new QPushButton(sagittalButtons);
        angleMeasureButton_2->setObjectName("angleMeasureButton_2");
        sizePolicy1.setHeightForWidth(angleMeasureButton_2->sizePolicy().hasHeightForWidth());
        angleMeasureButton_2->setSizePolicy(sizePolicy1);
        angleMeasureButton_2->setMinimumSize(QSize(30, 30));
        angleMeasureButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_3->addWidget(angleMeasureButton_2, 2, 1, 1, 1);

        antiClockWiseButton_2 = new QPushButton(sagittalButtons);
        antiClockWiseButton_2->setObjectName("antiClockWiseButton_2");
        sizePolicy1.setHeightForWidth(antiClockWiseButton_2->sizePolicy().hasHeightForWidth());
        antiClockWiseButton_2->setSizePolicy(sizePolicy1);
        antiClockWiseButton_2->setMinimumSize(QSize(30, 30));
        antiClockWiseButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_3->addWidget(antiClockWiseButton_2, 2, 0, 1, 1);

        upButton_2 = new QPushButton(sagittalButtons);
        upButton_2->setObjectName("upButton_2");
        sizePolicy1.setHeightForWidth(upButton_2->sizePolicy().hasHeightForWidth());
        upButton_2->setSizePolicy(sizePolicy1);
        upButton_2->setMinimumSize(QSize(30, 30));
        upButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_3->addWidget(upButton_2, 3, 0, 1, 1);

        eraseButton_2 = new QPushButton(sagittalButtons);
        eraseButton_2->setObjectName("eraseButton_2");
        sizePolicy1.setHeightForWidth(eraseButton_2->sizePolicy().hasHeightForWidth());
        eraseButton_2->setSizePolicy(sizePolicy1);
        eraseButton_2->setMinimumSize(QSize(30, 30));
        eraseButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_3->addWidget(eraseButton_2, 4, 1, 1, 1);

        downButton_2 = new QPushButton(sagittalButtons);
        downButton_2->setObjectName("downButton_2");
        sizePolicy1.setHeightForWidth(downButton_2->sizePolicy().hasHeightForWidth());
        downButton_2->setSizePolicy(sizePolicy1);
        downButton_2->setMinimumSize(QSize(30, 30));
        downButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_3->addWidget(downButton_2, 4, 0, 1, 1);


        verticalLayout_3->addWidget(sagittalButtons);

        sagittalSpaceWidget = new QWidget(sagittalButtonsWidget);
        sagittalSpaceWidget->setObjectName("sagittalSpaceWidget");

        verticalLayout_3->addWidget(sagittalSpaceWidget);

        verticalLayout_3->setStretch(0, 2);
        verticalLayout_3->setStretch(1, 7);
        verticalLayout_3->setStretch(2, 5);

        horizontalLayout_5->addWidget(sagittalButtonsWidget);

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

        horizontalLayout_4->setStretch(0, 28);
        horizontalLayout_4->setStretch(1, 5);

        gridLayout->addWidget(sagittalWidget, 0, 1, 1, 1);

        coronalWidget = new QWidget(visualizationWidget);
        coronalWidget->setObjectName("coronalWidget");
        horizontalLayout_6 = new QHBoxLayout(coronalWidget);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        coronalPlate = new QVTKOpenGLNativeWidget(coronalWidget);
        coronalPlate->setObjectName("coronalPlate");
        coronalPlate->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        labelS_2 = new QLabel(coronalPlate);
        labelS_2->setObjectName("labelS_2");
        labelS_2->setGeometry(QRect(180, 30, 40, 40));
        labelS_2->setFont(font);
        labelS_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"qproperty-alignment: 'AlignCenter';"));
        labelL_2 = new QLabel(coronalPlate);
        labelL_2->setObjectName("labelL_2");
        labelL_2->setGeometry(QRect(0, 230, 40, 40));
        labelL_2->setFont(font);
        labelL_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"qproperty-alignment: 'AlignCenter';"));
        labelI_2 = new QLabel(coronalPlate);
        labelI_2->setObjectName("labelI_2");
        labelI_2->setGeometry(QRect(180, 450, 40, 40));
        labelI_2->setFont(font);
        labelI_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"qproperty-alignment: 'AlignCenter';"));
        labelR_2 = new QLabel(coronalPlate);
        labelR_2->setObjectName("labelR_2");
        labelR_2->setGeometry(QRect(390, 230, 40, 40));
        labelR_2->setFont(font);
        labelR_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"qproperty-alignment: 'AlignCenter';"));
        sagittalLine_2 = new QFrame(coronalPlate);
        sagittalLine_2->setObjectName("sagittalLine_2");
        sagittalLine_2->setGeometry(QRect(190, 50, 20, 411));
        sizePolicy.setHeightForWidth(sagittalLine_2->sizePolicy().hasHeightForWidth());
        sagittalLine_2->setSizePolicy(sizePolicy);
        sagittalLine_2->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color:transparent;\n"
"	min-width:5px;\n"
"	color:#FFB74D\n"
"}"));
        sagittalLine_2->setFrameShape(QFrame::VLine);
        sagittalLine_2->setFrameShadow(QFrame::Plain);
        sagittalLine_2->setLineWidth(2);
        transverseLine_2 = new QFrame(coronalPlate);
        transverseLine_2->setObjectName("transverseLine_2");
        transverseLine_2->setGeometry(QRect(20, 240, 401, 20));
        sizePolicy.setHeightForWidth(transverseLine_2->sizePolicy().hasHeightForWidth());
        transverseLine_2->setSizePolicy(sizePolicy);
        transverseLine_2->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color:transparent;\n"
"	min-height:5px;\n"
"	color:#8A2BE2\n"
"}"));
        transverseLine_2->setFrameShape(QFrame::HLine);
        transverseLine_2->setFrameShadow(QFrame::Plain);
        transverseLine_2->setLineWidth(2);

        horizontalLayout_6->addWidget(coronalPlate);

        coronalTools = new QWidget(coronalWidget);
        coronalTools->setObjectName("coronalTools");
        horizontalLayout_7 = new QHBoxLayout(coronalTools);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        coronalButtonsWidget = new QWidget(coronalTools);
        coronalButtonsWidget->setObjectName("coronalButtonsWidget");
        coronalButtonsWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        verticalLayout_4 = new QVBoxLayout(coronalButtonsWidget);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(4, 6, 4, 0);
        unfoldButton_3 = new QPushButton(coronalButtonsWidget);
        unfoldButton_3->setObjectName("unfoldButton_3");
        unfoldButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 10px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 7px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        verticalLayout_4->addWidget(unfoldButton_3);

        coronalButtons = new QWidget(coronalButtonsWidget);
        coronalButtons->setObjectName("coronalButtons");
        gridLayout_4 = new QGridLayout(coronalButtons);
        gridLayout_4->setSpacing(4);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 6, 0, 0);
        rotateButton_3 = new QPushButton(coronalButtons);
        rotateButton_3->setObjectName("rotateButton_3");
        sizePolicy1.setHeightForWidth(rotateButton_3->sizePolicy().hasHeightForWidth());
        rotateButton_3->setSizePolicy(sizePolicy1);
        rotateButton_3->setMinimumSize(QSize(30, 30));
        rotateButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_4->addWidget(rotateButton_3, 0, 0, 1, 1);

        leftButton_3 = new QPushButton(coronalButtons);
        leftButton_3->setObjectName("leftButton_3");
        sizePolicy1.setHeightForWidth(leftButton_3->sizePolicy().hasHeightForWidth());
        leftButton_3->setSizePolicy(sizePolicy1);
        leftButton_3->setMinimumSize(QSize(30, 30));
        leftButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_4->addWidget(leftButton_3, 5, 0, 1, 1);

        rightButton_3 = new QPushButton(coronalButtons);
        rightButton_3->setObjectName("rightButton_3");
        sizePolicy1.setHeightForWidth(rightButton_3->sizePolicy().hasHeightForWidth());
        rightButton_3->setSizePolicy(sizePolicy1);
        rightButton_3->setMinimumSize(QSize(30, 30));
        rightButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_4->addWidget(rightButton_3, 6, 0, 1, 1);

        brightButton_3 = new QPushButton(coronalButtons);
        brightButton_3->setObjectName("brightButton_3");
        sizePolicy1.setHeightForWidth(brightButton_3->sizePolicy().hasHeightForWidth());
        brightButton_3->setSizePolicy(sizePolicy1);
        brightButton_3->setMinimumSize(QSize(30, 30));
        brightButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_4->addWidget(brightButton_3, 5, 1, 1, 1);

        targetButton_3 = new QPushButton(coronalButtons);
        targetButton_3->setObjectName("targetButton_3");
        sizePolicy1.setHeightForWidth(targetButton_3->sizePolicy().hasHeightForWidth());
        targetButton_3->setSizePolicy(sizePolicy1);
        targetButton_3->setMinimumSize(QSize(30, 30));
        targetButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_4->addWidget(targetButton_3, 6, 1, 1, 1);

        distanceMeasureButton_3 = new QPushButton(coronalButtons);
        distanceMeasureButton_3->setObjectName("distanceMeasureButton_3");
        sizePolicy1.setHeightForWidth(distanceMeasureButton_3->sizePolicy().hasHeightForWidth());
        distanceMeasureButton_3->setSizePolicy(sizePolicy1);
        distanceMeasureButton_3->setMinimumSize(QSize(30, 30));
        distanceMeasureButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_4->addWidget(distanceMeasureButton_3, 3, 1, 1, 1);

        upButton_3 = new QPushButton(coronalButtons);
        upButton_3->setObjectName("upButton_3");
        sizePolicy1.setHeightForWidth(upButton_3->sizePolicy().hasHeightForWidth());
        upButton_3->setSizePolicy(sizePolicy1);
        upButton_3->setMinimumSize(QSize(30, 30));
        upButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_4->addWidget(upButton_3, 3, 0, 1, 1);

        eraseButton_3 = new QPushButton(coronalButtons);
        eraseButton_3->setObjectName("eraseButton_3");
        sizePolicy1.setHeightForWidth(eraseButton_3->sizePolicy().hasHeightForWidth());
        eraseButton_3->setSizePolicy(sizePolicy1);
        eraseButton_3->setMinimumSize(QSize(30, 30));
        eraseButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_4->addWidget(eraseButton_3, 4, 1, 1, 1);

        MPRButton_3 = new QPushButton(coronalButtons);
        MPRButton_3->setObjectName("MPRButton_3");
        sizePolicy1.setHeightForWidth(MPRButton_3->sizePolicy().hasHeightForWidth());
        MPRButton_3->setSizePolicy(sizePolicy1);
        MPRButton_3->setMinimumSize(QSize(30, 30));
        MPRButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_4->addWidget(MPRButton_3, 1, 1, 1, 1);

        antiClockWiseButton_3 = new QPushButton(coronalButtons);
        antiClockWiseButton_3->setObjectName("antiClockWiseButton_3");
        sizePolicy1.setHeightForWidth(antiClockWiseButton_3->sizePolicy().hasHeightForWidth());
        antiClockWiseButton_3->setSizePolicy(sizePolicy1);
        antiClockWiseButton_3->setMinimumSize(QSize(30, 30));
        antiClockWiseButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_4->addWidget(antiClockWiseButton_3, 2, 0, 1, 1);

        enlargeCoronalButton = new QPushButton(coronalButtons);
        enlargeCoronalButton->setObjectName("enlargeCoronalButton");
        sizePolicy1.setHeightForWidth(enlargeCoronalButton->sizePolicy().hasHeightForWidth());
        enlargeCoronalButton->setSizePolicy(sizePolicy1);
        enlargeCoronalButton->setMinimumSize(QSize(30, 30));
        enlargeCoronalButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_4->addWidget(enlargeCoronalButton, 0, 1, 1, 1);

        angleMeasureButton_3 = new QPushButton(coronalButtons);
        angleMeasureButton_3->setObjectName("angleMeasureButton_3");
        sizePolicy1.setHeightForWidth(angleMeasureButton_3->sizePolicy().hasHeightForWidth());
        angleMeasureButton_3->setSizePolicy(sizePolicy1);
        angleMeasureButton_3->setMinimumSize(QSize(30, 30));
        angleMeasureButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_4->addWidget(angleMeasureButton_3, 2, 1, 1, 1);

        clockWiseButton_3 = new QPushButton(coronalButtons);
        clockWiseButton_3->setObjectName("clockWiseButton_3");
        sizePolicy1.setHeightForWidth(clockWiseButton_3->sizePolicy().hasHeightForWidth());
        clockWiseButton_3->setSizePolicy(sizePolicy1);
        clockWiseButton_3->setMinimumSize(QSize(30, 30));
        clockWiseButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_4->addWidget(clockWiseButton_3, 1, 0, 1, 1);

        downButton_3 = new QPushButton(coronalButtons);
        downButton_3->setObjectName("downButton_3");
        sizePolicy1.setHeightForWidth(downButton_3->sizePolicy().hasHeightForWidth());
        downButton_3->setSizePolicy(sizePolicy1);
        downButton_3->setMinimumSize(QSize(30, 30));
        downButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_4->addWidget(downButton_3, 4, 0, 1, 1);


        verticalLayout_4->addWidget(coronalButtons);

        coronalSpaceWidget = new QWidget(coronalButtonsWidget);
        coronalSpaceWidget->setObjectName("coronalSpaceWidget");

        verticalLayout_4->addWidget(coronalSpaceWidget);

        verticalLayout_4->setStretch(0, 2);
        verticalLayout_4->setStretch(1, 7);
        verticalLayout_4->setStretch(2, 5);

        horizontalLayout_7->addWidget(coronalButtonsWidget);

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

        horizontalLayout_6->setStretch(0, 28);
        horizontalLayout_6->setStretch(1, 5);

        gridLayout->addWidget(coronalWidget, 1, 0, 1, 1);

        model3DWidget = new QWidget(visualizationWidget);
        model3DWidget->setObjectName("model3DWidget");
        horizontalLayout_8 = new QHBoxLayout(model3DWidget);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        model3DPlate = new QVTKOpenGLNativeWidget(model3DWidget);
        model3DPlate->setObjectName("model3DPlate");
        model3DPlate->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        horizontalLayout_8->addWidget(model3DPlate);

        model3DBody = new QVTKOpenGLNativeWidget(model3DWidget);
        model3DBody->setObjectName("model3DBody");
        model3DBody->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));

        horizontalLayout_8->addWidget(model3DBody);

        model3DTools = new QWidget(model3DWidget);
        model3DTools->setObjectName("model3DTools");
        model3DTools->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        verticalLayout_5 = new QVBoxLayout(model3DTools);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(4, 6, 4, 0);
        unfoldButton_4 = new QPushButton(model3DTools);
        unfoldButton_4->setObjectName("unfoldButton_4");
        unfoldButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 10px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 7px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        verticalLayout_5->addWidget(unfoldButton_4);

        model3DButtons = new QWidget(model3DTools);
        model3DButtons->setObjectName("model3DButtons");
        gridLayout_5 = new QGridLayout(model3DButtons);
        gridLayout_5->setSpacing(4);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 6, 0, 0);
        enlarge3DModelButton = new QPushButton(model3DButtons);
        enlarge3DModelButton->setObjectName("enlarge3DModelButton");
        sizePolicy1.setHeightForWidth(enlarge3DModelButton->sizePolicy().hasHeightForWidth());
        enlarge3DModelButton->setSizePolicy(sizePolicy1);
        enlarge3DModelButton->setMinimumSize(QSize(30, 30));
        enlarge3DModelButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_5->addWidget(enlarge3DModelButton, 0, 0, 1, 1);

        eyeButton = new QPushButton(model3DButtons);
        eyeButton->setObjectName("eyeButton");
        sizePolicy1.setHeightForWidth(eyeButton->sizePolicy().hasHeightForWidth());
        eyeButton->setSizePolicy(sizePolicy1);
        eyeButton->setMinimumSize(QSize(30, 30));
        eyeButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_5->addWidget(eyeButton, 1, 0, 1, 1);

        cubeButton = new QPushButton(model3DButtons);
        cubeButton->setObjectName("cubeButton");
        sizePolicy1.setHeightForWidth(cubeButton->sizePolicy().hasHeightForWidth());
        cubeButton->setSizePolicy(sizePolicy1);
        cubeButton->setMinimumSize(QSize(30, 30));
        cubeButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_5->addWidget(cubeButton, 2, 0, 1, 1);

        CButton = new QPushButton(model3DButtons);
        CButton->setObjectName("CButton");
        sizePolicy1.setHeightForWidth(CButton->sizePolicy().hasHeightForWidth());
        CButton->setSizePolicy(sizePolicy1);
        CButton->setMinimumSize(QSize(30, 30));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        CButton->setFont(font1);
        CButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;\n"
"    border: 2px solid #1E88E5;  /* \350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    background-color: rgb(37, 38, 43);\n"
"    color: white;\n"
"    padding: 3px;\n"
"}"));

        gridLayout_5->addWidget(CButton, 3, 0, 1, 1);

        TButton = new QPushButton(model3DButtons);
        TButton->setObjectName("TButton");
        sizePolicy1.setHeightForWidth(TButton->sizePolicy().hasHeightForWidth());
        TButton->setSizePolicy(sizePolicy1);
        TButton->setMinimumSize(QSize(30, 30));
        TButton->setFont(font1);
        TButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;\n"
"    border: 2px solid #8A2BE2;  /* \350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    background-color: rgb(37, 38, 43);\n"
"    color: white;\n"
"    padding: 3px;\n"
"}"));

        gridLayout_5->addWidget(TButton, 4, 0, 1, 1);

        SButton = new QPushButton(model3DButtons);
        SButton->setObjectName("SButton");
        sizePolicy1.setHeightForWidth(SButton->sizePolicy().hasHeightForWidth());
        SButton->setSizePolicy(sizePolicy1);
        SButton->setMinimumSize(QSize(30, 30));
        SButton->setFont(font1);
        SButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;\n"
"    border: 2px solid #FFB74D;  /* \350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    background-color: rgb(37, 38, 43);\n"
"    color: white;\n"
"    padding: 3px;\n"
"}"));

        gridLayout_5->addWidget(SButton, 5, 0, 1, 1);

        brightButton_4 = new QPushButton(model3DButtons);
        brightButton_4->setObjectName("brightButton_4");
        sizePolicy1.setHeightForWidth(brightButton_4->sizePolicy().hasHeightForWidth());
        brightButton_4->setSizePolicy(sizePolicy1);
        brightButton_4->setMinimumSize(QSize(30, 30));
        brightButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 6px;    /* \345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"    background-color:rgb(37, 38, 43); /* \350\203\214\346\231\257\350\211\262 */\n"
"    color: white;           /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 3px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"}"));

        gridLayout_5->addWidget(brightButton_4, 6, 0, 1, 1);


        verticalLayout_5->addWidget(model3DButtons);

        model3DSpaceWidget = new QWidget(model3DTools);
        model3DSpaceWidget->setObjectName("model3DSpaceWidget");

        verticalLayout_5->addWidget(model3DSpaceWidget);

        verticalLayout_5->setStretch(0, 2);
        verticalLayout_5->setStretch(1, 7);
        verticalLayout_5->setStretch(2, 5);

        horizontalLayout_8->addWidget(model3DTools);

        horizontalLayout_8->setStretch(0, 32);
        horizontalLayout_8->setStretch(1, 5);
        horizontalLayout_8->setStretch(2, 4);

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
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/resource/image/unknow1.png);\n"
"background-position: center; \n"
"background-repeat: no-repeat;"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(additionWidget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/resource/image/unknow2.png);\n"
"background-position: center; \n"
"background-repeat: no-repeat;"));

        verticalLayout->addWidget(pushButton_2);


        horizontalLayout->addWidget(additionWidget);

        stackedWidget = new QStackedWidget(ImageDisplayWidget);
        stackedWidget->setObjectName("stackedWidget");
        sizePolicy2.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy2);
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
        labelP->setText(QCoreApplication::translate("ImageDisplayWidget", "P", nullptr));
        labelL->setText(QCoreApplication::translate("ImageDisplayWidget", "L", nullptr));
        labelR->setText(QCoreApplication::translate("ImageDisplayWidget", "R", nullptr));
        labelA->setText(QCoreApplication::translate("ImageDisplayWidget", "A", nullptr));
        unfoldButton->setText(QCoreApplication::translate("ImageDisplayWidget", "\345\261\225\345\274\200", nullptr));
        rightButton->setText(QCoreApplication::translate("ImageDisplayWidget", "14", nullptr));
        antiClockWiseButton->setText(QCoreApplication::translate("ImageDisplayWidget", "6", nullptr));
        downButton->setText(QCoreApplication::translate("ImageDisplayWidget", "10", nullptr));
        brightButton->setText(QCoreApplication::translate("ImageDisplayWidget", "11", nullptr));
        clockWiseButton->setText(QCoreApplication::translate("ImageDisplayWidget", "4", nullptr));
        eraseButton->setText(QCoreApplication::translate("ImageDisplayWidget", "9", nullptr));
        enlargeTransverseButton->setText(QCoreApplication::translate("ImageDisplayWidget", "1", nullptr));
        distanceMeasureButton->setText(QCoreApplication::translate("ImageDisplayWidget", "7", nullptr));
        rotateButton->setText(QCoreApplication::translate("ImageDisplayWidget", "2", nullptr));
        MPRButton->setText(QCoreApplication::translate("ImageDisplayWidget", "3", nullptr));
        angleMeasureButton->setText(QCoreApplication::translate("ImageDisplayWidget", "5", nullptr));
        upButton->setText(QCoreApplication::translate("ImageDisplayWidget", "8", nullptr));
        leftButton->setText(QCoreApplication::translate("ImageDisplayWidget", "12", nullptr));
        targetButton->setText(QCoreApplication::translate("ImageDisplayWidget", "13", nullptr));
        labelS->setText(QCoreApplication::translate("ImageDisplayWidget", "S", nullptr));
        labelP_2->setText(QCoreApplication::translate("ImageDisplayWidget", "P", nullptr));
        labelI->setText(QCoreApplication::translate("ImageDisplayWidget", "I", nullptr));
        labelA_2->setText(QCoreApplication::translate("ImageDisplayWidget", "A", nullptr));
        unfoldButton_2->setText(QCoreApplication::translate("ImageDisplayWidget", "\345\261\225\345\274\200", nullptr));
        MPRButton_2->setText(QCoreApplication::translate("ImageDisplayWidget", "3", nullptr));
        distanceMeasureButton_2->setText(QCoreApplication::translate("ImageDisplayWidget", "7", nullptr));
        clockWiseButton_2->setText(QCoreApplication::translate("ImageDisplayWidget", "4", nullptr));
        rotateButton_2->setText(QCoreApplication::translate("ImageDisplayWidget", "2", nullptr));
        enlargeSagittalButton->setText(QCoreApplication::translate("ImageDisplayWidget", "1", nullptr));
        targetButton_2->setText(QCoreApplication::translate("ImageDisplayWidget", "13", nullptr));
        leftButton_2->setText(QCoreApplication::translate("ImageDisplayWidget", "12", nullptr));
        brightButton_2->setText(QCoreApplication::translate("ImageDisplayWidget", "11", nullptr));
        rightButton_2->setText(QCoreApplication::translate("ImageDisplayWidget", "14", nullptr));
        angleMeasureButton_2->setText(QCoreApplication::translate("ImageDisplayWidget", "5", nullptr));
        antiClockWiseButton_2->setText(QCoreApplication::translate("ImageDisplayWidget", "6", nullptr));
        upButton_2->setText(QCoreApplication::translate("ImageDisplayWidget", "8", nullptr));
        eraseButton_2->setText(QCoreApplication::translate("ImageDisplayWidget", "9", nullptr));
        downButton_2->setText(QCoreApplication::translate("ImageDisplayWidget", "10", nullptr));
        labelS_2->setText(QCoreApplication::translate("ImageDisplayWidget", "S", nullptr));
        labelL_2->setText(QCoreApplication::translate("ImageDisplayWidget", "L", nullptr));
        labelI_2->setText(QCoreApplication::translate("ImageDisplayWidget", "I", nullptr));
        labelR_2->setText(QCoreApplication::translate("ImageDisplayWidget", "R", nullptr));
        unfoldButton_3->setText(QCoreApplication::translate("ImageDisplayWidget", "\345\261\225\345\274\200", nullptr));
        rotateButton_3->setText(QCoreApplication::translate("ImageDisplayWidget", "2", nullptr));
        leftButton_3->setText(QCoreApplication::translate("ImageDisplayWidget", "12", nullptr));
        rightButton_3->setText(QCoreApplication::translate("ImageDisplayWidget", "14", nullptr));
        brightButton_3->setText(QCoreApplication::translate("ImageDisplayWidget", "11", nullptr));
        targetButton_3->setText(QCoreApplication::translate("ImageDisplayWidget", "13", nullptr));
        distanceMeasureButton_3->setText(QCoreApplication::translate("ImageDisplayWidget", "7", nullptr));
        upButton_3->setText(QCoreApplication::translate("ImageDisplayWidget", "8", nullptr));
        eraseButton_3->setText(QCoreApplication::translate("ImageDisplayWidget", "9", nullptr));
        MPRButton_3->setText(QCoreApplication::translate("ImageDisplayWidget", "3", nullptr));
        antiClockWiseButton_3->setText(QCoreApplication::translate("ImageDisplayWidget", "6", nullptr));
        enlargeCoronalButton->setText(QCoreApplication::translate("ImageDisplayWidget", "1", nullptr));
        angleMeasureButton_3->setText(QCoreApplication::translate("ImageDisplayWidget", "5", nullptr));
        clockWiseButton_3->setText(QCoreApplication::translate("ImageDisplayWidget", "4", nullptr));
        downButton_3->setText(QCoreApplication::translate("ImageDisplayWidget", "10", nullptr));
        unfoldButton_4->setText(QCoreApplication::translate("ImageDisplayWidget", "\345\261\225\345\274\200", nullptr));
        enlarge3DModelButton->setText(QCoreApplication::translate("ImageDisplayWidget", "1", nullptr));
        eyeButton->setText(QCoreApplication::translate("ImageDisplayWidget", "2", nullptr));
        cubeButton->setText(QCoreApplication::translate("ImageDisplayWidget", "3", nullptr));
        CButton->setText(QCoreApplication::translate("ImageDisplayWidget", "C", nullptr));
        TButton->setText(QCoreApplication::translate("ImageDisplayWidget", "T", nullptr));
        SButton->setText(QCoreApplication::translate("ImageDisplayWidget", "S", nullptr));
        brightButton_4->setText(QCoreApplication::translate("ImageDisplayWidget", "4", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ImageDisplayWidget: public Ui_ImageDisplayWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEDISPLAYWIDGET_H
