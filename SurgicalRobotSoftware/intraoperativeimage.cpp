#include "intraoperativeimage.h"
#include "ui_intraoperativeimage.h"
#include <QScreen.h>

IntraoperativeImage::IntraoperativeImage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::IntraoperativeImage)
{
    ui->setupUi(this);

    //1. 发现摄像头,若没有默认摄像头,就无法进行本示例的操作
    QCameraDevice defaultCameraDevice= QMediaDevices::defaultVideoInput();

    if (defaultCameraDevice.isNull())
    {
        return;
    }
    QByteArray defaultCameraID=defaultCameraDevice.id();
    ui->actStartCamera->setEnabled(true);

    //2. 创建抓取管理器session和各个设备
    session = new QMediaCaptureSession(this);       //抓取管理器
    session->setVideoOutput(ui->endoscope);      //设置视频输出组件，用于视频预览

    //2.2 创建QCamera对象,用于控制摄像头
    camera = new QCamera(this);        //摄像头
    camera->setCameraDevice(defaultCameraDevice);   //
    session->setCamera(camera);        //为session设置摄像头

    connect(ui->actStartCamera, &QPushButton::clicked, this, &IntraoperativeImage::on_actStartCamera_triggered);
    connect(ui->actStopCamera, &QPushButton::clicked, this, &IntraoperativeImage::on_actStopCamera_triggered);

    QVBoxLayout *layout = static_cast<QVBoxLayout*>(ui->groupBox->layout());
    layout->setStretchFactor(ui->endoscope, 2); // 设置endoscope的伸展因子为2
}

IntraoperativeImage::~IntraoperativeImage()
{
    delete ui;
}

void IntraoperativeImage::on_actStartCamera_triggered()
{//开启摄像头
    camera->start();// 启动摄像头
    ui->actStartCamera->setEnabled(false); // 禁用开始按钮
    ui->actStopCamera->setEnabled(true); // 启用停止按钮
}

void IntraoperativeImage::on_actStopCamera_triggered()
{//关闭摄像头
    camera->stop(); // 停止摄像头
    ui->actStartCamera->setEnabled(true); // 启用开始按钮
    ui->actStopCamera->setEnabled(false); // 禁用停止按钮
}
