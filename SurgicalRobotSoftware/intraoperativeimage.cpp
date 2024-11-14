#include "intraoperativeimage.h"
#include "ui_intraoperativeimage.h"
#include <QScreen.h>

IntraoperativeImage::IntraoperativeImage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::IntraoperativeImage)
{
    ui->setupUi(this);
}

IntraoperativeImage::~IntraoperativeImage()
{
    delete ui;
}
