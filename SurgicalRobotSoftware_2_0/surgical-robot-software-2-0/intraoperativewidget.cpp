#include "intraoperativewidget.h"
#include "ui_intraoperativewidget.h"

IntraoperativeWidget::IntraoperativeWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::IntraoperativeWidget)
{
    ui->setupUi(this);

    initCamera();
}

IntraoperativeWidget::~IntraoperativeWidget()
{
    delete ui;
}

void IntraoperativeWidget::initCamera(){
    //1. 发现摄像头,若没有默认摄像头,就无法进行本示例的操作
    QCameraDevice defaultCameraDevice= QMediaDevices::defaultVideoInput();

    if (defaultCameraDevice.isNull())
    {
        return;
    }
    QByteArray defaultCameraID=defaultCameraDevice.id();
    //ui->actStartCamera->setEnabled(true);

    //2. 创建抓取管理器session和各个设备
    session = new QMediaCaptureSession(this);       //抓取管理器
    session->setVideoOutput(ui->endoscopyWidget);      //设置视频输出组件，用于视频预览

    //2.2 创建QCamera对象,用于控制摄像头
    camera = new QCamera(this);        //摄像头
    camera->setCameraDevice(defaultCameraDevice);   //
    session->setCamera(camera);        //为session设置摄像头

    camera->start();// 启动摄像头
}
