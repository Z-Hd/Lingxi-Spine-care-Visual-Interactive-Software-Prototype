#include "mainwidget.h"
#include "ui_mainwidget.h"
#include "spinalimage.h"
#include "intraoperativeimage.h"
#include "RoutePlan.h"
#include <QScreen.h>
#include "login.h"

mainWidget::mainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::mainWidget)
{
    ui->setupUi(this);
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->availableGeometry();
    this->setGeometry(screenGeometry);
    SpinalImage* spinalImage = new SpinalImage();
    IntraoperativeImage* intraoperativeImage = new IntraoperativeImage();
    Form* form = new Form();
    ui->stackedWidget->addWidget(spinalImage);
    ui->stackedWidget->addWidget(form);
    ui->stackedWidget->addWidget(intraoperativeImage);
    ui->stackedWidget->setCurrentIndex(0);
    connect(spinalImage,&SpinalImage::preButton_pressed,[=](){
        this->close();
        Login *login = new Login();
        login->show();
    });
    connect(spinalImage,&SpinalImage::nextButton_pressed,[=](){
        ui->stackedWidget->setCurrentIndex(1);
    });
    connect(form,&Form::preButton_pressed,[=](){
        ui->stackedWidget->setCurrentIndex(0);
    });
    connect(form,&Form::nextButton_pressed,[=](){
        ui->stackedWidget->setCurrentIndex(2);
    });


}

mainWidget::~mainWidget()
{
    delete ui;
}
