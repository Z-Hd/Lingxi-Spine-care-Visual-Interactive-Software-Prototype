#include "imageinputwidget.h"
#include "ui_imageinputwidget.h"
#include <vtkDICOMReader.h>
#include <vtkSmartPointer.h>
#include <vtkStringArray.h>
#include <vtkDICOMMetaData.h>
#include "GlobalVTKDataManager.h"
#include <QFileDialog.h>
namespace fs = std::filesystem;
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
    emit currentWidgetChanged("registraion"); // 发送信号用于 toolBar 文字高亮
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

    qDebug()<<folderPath;
    vtkSmartPointer<vtkStringArray> fileNames =
        vtkSmartPointer<vtkStringArray>::New();

    try
    {
        for (const auto& entry : fs::directory_iterator(folderPath.toStdString()))
        {
            // 检查文件扩展名是否为 .dcm 或其他 DICOM 常用扩展名
            std::string filename = entry.path().filename().string();
            if (entry.is_regular_file() &&
                (filename.rfind("CT", 0) == 0 || // rfind的第二个参数0表示从字符串开头搜索
                 entry.path().extension() == ".dcm" ||
                 entry.path().extension() == ".DCM")){
                qDebug()<< "找到文件: " << filename;
                fileNames->InsertNextValue(entry.path().string());
            }
        }
    }
    catch (const fs::filesystem_error& e)
    {
        qDebug()<< "访问目录时出错: " << e.what();
        GlobalVTKDataManager::instance().setIsLoaded(false);
        return false;
    }

    if (fileNames->GetNumberOfValues() == 0)
    {
        qDebug() << "在目录 '" << folderPath << "' 中未找到符合条件的文件";
        GlobalVTKDataManager::instance().setIsLoaded(false);
        return false;
    }

    auto reader = vtkSmartPointer<vtkDICOMReader>::New();
    reader->SetFileNames(fileNames);
    reader->Update();
    vtkDICOMMetaData *metaData = reader->GetMetaData();
    if (!metaData) {
        qWarning() << "无法获取DICOM元数据！";
        GlobalVTKDataManager::instance().setIsLoaded(false);
        return false;
    }

    // 定义需要提取的标签 (使用QMap)
    QMap<QString, vtkDICOMTag> tagsToExtract;
    tagsToExtract["Patient ID"]       = vtkDICOMTag(0x0010, 0x0020);
    tagsToExtract["Patient's Name"]   = vtkDICOMTag(0x0010, 0x0010);
    tagsToExtract["Patient's Age"]    = vtkDICOMTag(0x0010, 0x1010);
    tagsToExtract["Study Date"]       = vtkDICOMTag(0x0008, 0x0020);
    tagsToExtract["Study Description"] = vtkDICOMTag(0x0008, 0x1030);
    tagsToExtract["Modality"]         = vtkDICOMTag(0x0008, 0x0060);
    tagsToExtract["Series Date"]      = vtkDICOMTag(0x0008, 0x0021);
    tagsToExtract["Series Description"] = vtkDICOMTag(0x0008, 0x103E);
    QMap<QString,QString> g_dicomTags;

    // 循环提取并存入全局QMap
    QMapIterator<QString, vtkDICOMTag> i(tagsToExtract);
    while (i.hasNext()) {
        i.next();
        const QString& key = i.key();
        const vtkDICOMTag& tag = i.value();

        if (metaData->Has(tag)) {
            // 与VTK交互: metaData->Get()返回的值需要从std::string转换为QString
            // QString::trimmed() 用于替代之前的 trimString() 函数
            QString value = QString::fromStdString(metaData->Get(tag).AsString()).trimmed();
            g_dicomTags.insert(key, value);
            qDebug()<<key<<value;
        } else {
            g_dicomTags.insert(key, "Not Found");
            qDebug()<<key;
        }
    }
    GlobalVTKDataManager::instance().setDicomTags(g_dicomTags);
    if (!reader->GetOutput() || reader->GetOutput()->GetNumberOfPoints() == 0) {
        qWarning() << "vtkDICOMReader未能成功读取图像数据。";
        GlobalVTKDataManager::instance().setIsLoaded(false);
        return false;
    }else{
        GlobalVTKDataManager::instance().setImage(reader->GetOutput());
    }
    GlobalVTKDataManager::instance().setIsLoaded(true);
    return true;
}
