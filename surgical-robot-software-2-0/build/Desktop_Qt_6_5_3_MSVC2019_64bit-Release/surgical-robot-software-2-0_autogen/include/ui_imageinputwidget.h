/********************************************************************************
** Form generated from reading UI file 'imageinputwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEINPUTWIDGET_H
#define UI_IMAGEINPUTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageInputWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QWidget *imageInputWidget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *patientWidget;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QFrame *frame;
    QWidget *opWidget;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QFrame *frame_5;
    QWidget *patient;
    QWidget *studyWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QFrame *frame_2;
    QWidget *study;
    QWidget *seriesWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QFrame *frame_3;
    QWidget *series;
    QWidget *overViewWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QLabel *label_6;
    QFrame *frame_4;
    QWidget *allImagesWidget;
    QHBoxLayout *horizontalLayout_3;
    QWidget *images;
    QSlider *imagesSlider;
    QWidget *buttonWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *backButton;
    QPushButton *confirmButton;

    void setupUi(QWidget *ImageInputWidget)
    {
        if (ImageInputWidget->objectName().isEmpty())
            ImageInputWidget->setObjectName("ImageInputWidget");
        ImageInputWidget->resize(1411, 750);
        ImageInputWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        verticalLayout = new QVBoxLayout(ImageInputWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 18, 0, 0);
        label = new QLabel(ImageInputWidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 16pt \"Microsoft YaHei UI\";\n"
"color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        imageInputWidget = new QWidget(ImageInputWidget);
        imageInputWidget->setObjectName("imageInputWidget");
        imageInputWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        horizontalLayout_2 = new QHBoxLayout(imageInputWidget);
        horizontalLayout_2->setSpacing(1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        patientWidget = new QWidget(imageInputWidget);
        patientWidget->setObjectName("patientWidget");
        patientWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 17, 18);"));
        verticalLayout_5 = new QVBoxLayout(patientWidget);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_2 = new QLabel(patientWidget);
        label_2->setObjectName("label_2");
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 17, 18);\n"
"font: 12pt \"Microsoft YaHei UI\";\n"
"color: rgb(154, 152, 151);"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_2);

        frame = new QFrame(patientWidget);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setStyleSheet(QString::fromUtf8("QFrame{background:23, 23, 26;min-height:5px;color:white}"));
        frame->setFrameShape(QFrame::HLine);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(1);

        verticalLayout_5->addWidget(frame);

        opWidget = new QWidget(patientWidget);
        opWidget->setObjectName("opWidget");
        horizontalLayout_4 = new QHBoxLayout(opWidget);
        horizontalLayout_4->setSpacing(75);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        addButton = new QPushButton(opWidget);
        addButton->setObjectName("addButton");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(addButton->sizePolicy().hasHeightForWidth());
        addButton->setSizePolicy(sizePolicy2);
        addButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_4->addWidget(addButton);

        deleteButton = new QPushButton(opWidget);
        deleteButton->setObjectName("deleteButton");
        sizePolicy2.setHeightForWidth(deleteButton->sizePolicy().hasHeightForWidth());
        deleteButton->setSizePolicy(sizePolicy2);
        deleteButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_4->addWidget(deleteButton);


        verticalLayout_5->addWidget(opWidget);

        frame_5 = new QFrame(patientWidget);
        frame_5->setObjectName("frame_5");
        sizePolicy1.setHeightForWidth(frame_5->sizePolicy().hasHeightForWidth());
        frame_5->setSizePolicy(sizePolicy1);
        frame_5->setStyleSheet(QString::fromUtf8("QFrame{background:23, 23, 26;min-height:5px;color:white}"));
        frame_5->setFrameShape(QFrame::HLine);
        frame_5->setFrameShadow(QFrame::Plain);
        frame_5->setLineWidth(1);

        verticalLayout_5->addWidget(frame_5);

        patient = new QWidget(patientWidget);
        patient->setObjectName("patient");

        verticalLayout_5->addWidget(patient);

        verticalLayout_5->setStretch(2, 1);
        verticalLayout_5->setStretch(4, 22);

        horizontalLayout_2->addWidget(patientWidget);

        studyWidget = new QWidget(imageInputWidget);
        studyWidget->setObjectName("studyWidget");
        studyWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 17, 18);"));
        verticalLayout_3 = new QVBoxLayout(studyWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_3 = new QLabel(studyWidget);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 17, 18);\n"
"font: 12pt \"Microsoft YaHei UI\";\n"
"color: rgb(154, 152, 151);"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);

        frame_2 = new QFrame(studyWidget);
        frame_2->setObjectName("frame_2");
        sizePolicy1.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy1);
        frame_2->setStyleSheet(QString::fromUtf8("QFrame{background:23, 23, 26;min-height:5px;color:white}"));
        frame_2->setFrameShape(QFrame::HLine);
        frame_2->setFrameShadow(QFrame::Plain);
        frame_2->setLineWidth(1);

        verticalLayout_3->addWidget(frame_2);

        study = new QWidget(studyWidget);
        study->setObjectName("study");

        verticalLayout_3->addWidget(study);


        horizontalLayout_2->addWidget(studyWidget);

        seriesWidget = new QWidget(imageInputWidget);
        seriesWidget->setObjectName("seriesWidget");
        seriesWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 17, 18);"));
        verticalLayout_4 = new QVBoxLayout(seriesWidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_4 = new QLabel(seriesWidget);
        label_4->setObjectName("label_4");
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 17, 18);\n"
"font: 12pt \"Microsoft YaHei UI\";\n"
"color: rgb(154, 152, 151);"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_4);

        frame_3 = new QFrame(seriesWidget);
        frame_3->setObjectName("frame_3");
        sizePolicy1.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy1);
        frame_3->setStyleSheet(QString::fromUtf8("QFrame{background:23, 23, 26;min-height:5px;color:white}"));
        frame_3->setFrameShape(QFrame::HLine);
        frame_3->setFrameShadow(QFrame::Plain);
        frame_3->setLineWidth(1);

        verticalLayout_4->addWidget(frame_3);

        series = new QWidget(seriesWidget);
        series->setObjectName("series");

        verticalLayout_4->addWidget(series);


        horizontalLayout_2->addWidget(seriesWidget);

        overViewWidget = new QWidget(imageInputWidget);
        overViewWidget->setObjectName("overViewWidget");
        overViewWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 17, 18);"));
        verticalLayout_2 = new QVBoxLayout(overViewWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_5 = new QLabel(overViewWidget);
        label_5->setObjectName("label_5");
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 17, 18);\n"
"font: 12pt \"Microsoft YaHei UI\";\n"
"color: rgb(154, 152, 151);"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(overViewWidget);
        label_6->setObjectName("label_6");
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 17, 18);\n"
"font: 12pt \"Microsoft YaHei UI\";\n"
"color: rgb(154, 152, 151);"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_6);

        frame_4 = new QFrame(overViewWidget);
        frame_4->setObjectName("frame_4");
        sizePolicy1.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy1);
        frame_4->setStyleSheet(QString::fromUtf8("QFrame{background:23, 23, 26;min-height:5px;color:white}"));
        frame_4->setFrameShape(QFrame::HLine);
        frame_4->setFrameShadow(QFrame::Plain);
        frame_4->setLineWidth(1);

        verticalLayout_2->addWidget(frame_4);

        allImagesWidget = new QWidget(overViewWidget);
        allImagesWidget->setObjectName("allImagesWidget");
        horizontalLayout_3 = new QHBoxLayout(allImagesWidget);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        images = new QWidget(allImagesWidget);
        images->setObjectName("images");

        horizontalLayout_3->addWidget(images);

        imagesSlider = new QSlider(allImagesWidget);
        imagesSlider->setObjectName("imagesSlider");
        imagesSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:vertical {\n"
"    background: #000000;    /* \351\273\221\350\211\262\346\273\221\350\275\250 */\n"
"    width: 10px;            /* \347\250\215\345\276\256\345\212\240\345\256\275\347\232\204\346\273\221\350\275\250 */\n"
"    border-radius: 5px;     /* \345\234\206\350\247\222\344\270\216\346\273\221\345\235\227\344\270\200\350\207\264 */\n"
"    margin: 0px;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: #AAAAAA;    /* \347\201\260\350\211\262\346\273\221\345\235\227 */\n"
"    border: none;           /* \346\227\240\350\276\271\346\241\206 */\n"
"    width: 16px;            /* \346\273\221\345\235\227\345\256\275\345\272\246 */\n"
"    height: 45px;           /* \345\212\240\351\225\277\347\232\204\346\273\221\345\235\227 */\n"
"    margin: 0px 0;         /* \350\260\203\346\225\264\346\273\221\345\235\227\344\275\215\347\275\256 */\n"
"    border-radius: 5px;     /* \345\234\206\350\247\222\344\270\216\346\273\221\350\275\250\344\270\200\350\207\264 */\n"
"}\n"
"\n"
"QSlide"
                        "r::handle:vertical:hover {\n"
"    background: #CCCCCC;    /* \346\202\254\345\201\234\346\227\266\344\272\256\347\201\260\350\211\262 */\n"
"}\n"
"\n"
"QSlider::handle:vertical:pressed {\n"
"    background: #888888;    /* \346\214\211\344\270\213\346\227\266\346\267\261\347\201\260\350\211\262 */\n"
"}"));
        imagesSlider->setOrientation(Qt::Vertical);

        horizontalLayout_3->addWidget(imagesSlider);


        verticalLayout_2->addWidget(allImagesWidget);


        horizontalLayout_2->addWidget(overViewWidget);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 2);
        horizontalLayout_2->setStretch(2, 2);
        horizontalLayout_2->setStretch(3, 5);

        verticalLayout->addWidget(imageInputWidget);

        buttonWidget = new QWidget(ImageInputWidget);
        buttonWidget->setObjectName("buttonWidget");
        horizontalLayout = new QHBoxLayout(buttonWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        backButton = new QPushButton(buttonWidget);
        backButton->setObjectName("backButton");
        sizePolicy2.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy2);
        backButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout->addWidget(backButton);

        confirmButton = new QPushButton(buttonWidget);
        confirmButton->setObjectName("confirmButton");
        sizePolicy2.setHeightForWidth(confirmButton->sizePolicy().hasHeightForWidth());
        confirmButton->setSizePolicy(sizePolicy2);
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

        horizontalLayout->setStretch(0, 28);
        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 5);

        verticalLayout->addWidget(buttonWidget);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 15);
        verticalLayout->setStretch(2, 1);

        retranslateUi(ImageInputWidget);

        QMetaObject::connectSlotsByName(ImageInputWidget);
    } // setupUi

    void retranslateUi(QWidget *ImageInputWidget)
    {
        ImageInputWidget->setWindowTitle(QCoreApplication::translate("ImageInputWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("ImageInputWidget", "\345\233\276\345\203\217\345\257\274\345\205\245", nullptr));
        label_2->setText(QCoreApplication::translate("ImageInputWidget", "Patient", nullptr));
        addButton->setText(QCoreApplication::translate("ImageInputWidget", "\346\267\273\345\212\240", nullptr));
        deleteButton->setText(QCoreApplication::translate("ImageInputWidget", "\345\210\240\351\231\244", nullptr));
        label_3->setText(QCoreApplication::translate("ImageInputWidget", "Study", nullptr));
        label_4->setText(QCoreApplication::translate("ImageInputWidget", "Series", nullptr));
        label_5->setText(QCoreApplication::translate("ImageInputWidget", "SeriesInstanceUID", nullptr));
        label_6->setText(QCoreApplication::translate("ImageInputWidget", "StudyInstanceUID", nullptr));
        backButton->setText(QCoreApplication::translate("ImageInputWidget", "\350\277\224\345\233\236", nullptr));
        confirmButton->setText(QCoreApplication::translate("ImageInputWidget", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImageInputWidget: public Ui_ImageInputWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEINPUTWIDGET_H
