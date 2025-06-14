#include "imageinputwidget.h"
#include "ui_imageinputwidget.h"

ImageInputWidget::ImageInputWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ImageInputWidget)
{
    ui->setupUi(this);
}

ImageInputWidget::~ImageInputWidget()
{
    delete ui;
}

void ImageInputWidget::on_backButton_clicked()
{
    emit back_to_imageDisplayWidget();
}


void ImageInputWidget::on_confirmButton_clicked()
{
    // 如果已经加载了DICOM数据，再次发送dicomDataLoaded信号
    if (dicomLoaded && !dicomFolderPath.isEmpty()) {
        emit dicomDataLoaded(dicomFolderPath);
    }
    emit confirmButton_pressed();
}

void ImageInputWidget::on_addButton_clicked()
{
    QString folderPath = QFileDialog::getExistingDirectory(
        this,
        "选择包含DICOM影像序列的文件夹",
        QDir::homePath(),
        QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks
        );

    if (!folderPath.isEmpty()) {
        if (validateDicomFolder(folderPath)) {
            dicomFolderPath = folderPath;
            dicomLoaded = true;

            // 将confirmButton背景设置为黄色
            ui->confirmButton->setStyleSheet(
                "QPushButton {"
                "background-color: rgb(255, 255, 0);"
                "color: rgb(0, 0, 0);"
                "font-size:15px;"
                "border-radius: 5px;"
                "min-width: 100px;"
                "min-height: 40px;"
                "}"
                "QPushButton:hover{"
                "background-color: rgb(255, 255, 100);"
                "}"
                "QPushButton:pressed {"
                "background-color: rgb(200, 200, 0);"
                "}"
                );

            QMessageBox::information(this, "成功", "DICOM影像序列加载成功！");
            emit dicomDataLoaded(dicomFolderPath);
        } else {
            QMessageBox::warning(this, "错误", "所选文件夹不包含有效的DICOM文件！");
        }
    }
}

void ImageInputWidget::on_deleteButton_clicked()
{
    dicomFolderPath.clear();
    dicomLoaded = false;

    // 恢复confirmButton原始样式
    ui->confirmButton->setStyleSheet(
        "QPushButton {"
        "background-color: rgb(37, 38, 43);"
        "color: rgb(192, 192, 192);"
        "font-size:15px;"
        "border-radius: 5px;"
        "min-width: 100px;"
        "min-height: 40px;"
        "}"
        "QPushButton:hover{"
        "background-color: rgb(70, 72, 81);"
        "}"
        "QPushButton:pressed {"
        "background-color: rgb(245, 245, 245);"
        "}"
        );
}

bool ImageInputWidget::validateDicomFolder(const QString &folderPath)
{
    QDir dir(folderPath);
    if (!dir.exists()) {
        qDebug() << "Folder does not exist:" << folderPath;
        return false;
    }

    // 检查文件夹中是否包含DICOM文件
    QStringList filters;
    filters << "*.dcm" << "*.DCM" << "*.dicom" << "*.DICOM";
    QStringList dicomFiles = dir.entryList(filters, QDir::Files);

    qDebug() << "Found" << dicomFiles.size() << "standard DICOM files in folder";

    // 如果没有标准DICOM扩展名，检查是否有无扩展名的文件或CT开头的文件
    if (dicomFiles.isEmpty()) {
        QStringList allFiles = dir.entryList(QDir::Files);
        qDebug() << "Total files in folder:" << allFiles.size();

        for (const QString &file : allFiles) {
            // 检查无扩展名的文件
            if (!file.contains('.')) {
                qDebug() << "Found file without extension:" << file;
                return true;
            }
            // 检查以CT开头的文件（适应你的DICOM文件格式）
            if (file.startsWith("CT.", Qt::CaseInsensitive)) {
                qDebug() << "Found CT file:" << file;
                return true;
            }
            // 检查其他常见的DICOM文件模式
            if (file.contains("1.2.840") || file.contains("1.3.12")) {
                qDebug() << "Found file with DICOM UID pattern:" << file;
                return true;
            }
        }
        qDebug() << "No valid DICOM files found in folder";
        return false;
    }

    return true;
}
