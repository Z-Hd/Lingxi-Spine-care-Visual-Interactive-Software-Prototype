#include "equipinfowidget.h"
#include "ui_equipinfowidget.h"
#include <QDir>
#include <QDebug>
#include <QStringList>
#include <QLabel>
#include <QVBoxLayout>

QWidget* createImageTextWidget(const QString& imagePath, const QString& text, QWidget* parent = nullptr) {
    QWidget* widget = new QWidget(parent);
    QSize size(250,180);
    widget->setFixedSize(size.width(),size.height()*1.2);

    QVBoxLayout* layout = new QVBoxLayout(widget);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->setSpacing(0);

    // 创建图片标签
    QLabel* imgLabel = new QLabel(widget);
    imgLabel->setAlignment(Qt::AlignCenter);
    imgLabel->setFixedSize(size.width(),size.height());

    // 加载并缩放图片
    QPixmap pix(imagePath);
    if(!pix.isNull()) {
        pix = pix.scaled(size.width(), size.height(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
        imgLabel->setPixmap(pix);
    }

    // 创建文字标签
    QLabel* textLabel = new QLabel(text, widget);
    textLabel->setAlignment(Qt::AlignCenter);
    textLabel->setStyleSheet("QLabel{color:white; font-size:14px;background-color: rgb(61, 61, 61);}");
    textLabel->setFixedSize(size.width(),size.height()*0.2);

    // 添加控件到布局
    layout->addWidget(imgLabel);
    layout->addWidget(textLabel);
    return widget;
}


QStringList getSubdirs(QString dirPath) {

    QStringList subDirs;
    QDir subToolkitDir(dirPath);
    if (!subToolkitDir.exists()) {
        qDebug() << "错误:"<<dirPath<< "文件夹不存在";
        return subDirs;
    }

    subDirs = subToolkitDir.entryList(QDir::Dirs | QDir::NoDotAndDotDot);

    if (subDirs.isEmpty()) {
        qDebug() << "提示:"<<dirPath<<"子文件夹下没有其他文件夹";
    } else {
        qDebug() << "找到" << subDirs.size() << "个子文件夹:";
        foreach (const QString &dir, subDirs) {
            qDebug() << " - " << dir;
        }
    }
    return subDirs;
}


void addListItem(QString dirPath,QString imgPath,QListWidget* listWidget){
    listWidget->setFlow(QListView::LeftToRight);
    listWidget->setWrapping(true);
    listWidget->setResizeMode(QListView::Adjust);
    listWidget->setSpacing(20);
    QStringList subDirs= getSubdirs(QCoreApplication::applicationDirPath() + QDir::separator() + dirPath);
    foreach (const QString &dir, subDirs) {
        QWidget* itemWidget = createImageTextWidget(imgPath,dir);
        QListWidgetItem* item = new QListWidgetItem(listWidget);
        item->setData(Qt::UserRole, dir);
        listWidget->addItem(item);
        item->setSizeHint(itemWidget->size());
        listWidget->setItemWidget(item, itemWidget);
    }
}


EquipInfoWidget::EquipInfoWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::EquipInfoWidget)
{
    ui->setupUi(this);
    ui->backButton->setFixedSize(100,30);
    ui->confirmButton->setFixedSize(100,30);
    addListItem("resource/Toolkit/toolkit",":/resource/image/tool.png",ui->toollistWidget);
    addListItem("resource/Toolkit/imagingTrackerEquipment",":/resource/image/tool.png",ui->toollistWidget);

}

EquipInfoWidget::~EquipInfoWidget()
{
    delete ui;
}

void EquipInfoWidget::on_confirmButton_clicked()
{
    emit confirmButton_pressed();
    emit currentWidgetChanged("segmentation"); // 发送信号
}



void EquipInfoWidget::on_toollistWidget_itemClicked(QListWidgetItem *item)
{
    // Safety check
    if (!item) {
        return;
    }

    // Retrieve the name we stored earlier using setData
    QString itemName = item->data(Qt::UserRole).toString();

    // Announce to the outside world that an item was selected, and what its name is.
    emit itemNameSelected(itemName);

}

