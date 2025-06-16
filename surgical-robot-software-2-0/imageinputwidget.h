#ifndef IMAGEINPUTWIDGET_H
#define IMAGEINPUTWIDGET_H

#include <QWidget>
#include <qlabel.h>
#include <QFileDialog>
#include <QMessageBox>
#include <QDir>

namespace Ui {
class ImageInputWidget;
}

class ImageInputWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ImageInputWidget(QWidget *parent = nullptr);
    ~ImageInputWidget();

    QString getDicomFolderPath() const { return dicomFolderPath; }
    bool isDicomLoaded() const { return dicomLoaded; }

private slots:
    void on_backButton_clicked();
    void on_confirmButton_clicked();

    void on_addButton_clicked();

    void on_deleteButton_clicked();

signals:
    void back_to_imageDisplayWidget();
    void confirmButton_pressed();
    void dicomDataLoaded(const QString &folderPath);

    void currentWidgetChanged(const QString &widgetName);  // 用于文字高亮

private:
    Ui::ImageInputWidget *ui;
    QString dicomFolderPath;
    bool dicomLoaded;

    bool validateDicomFolder(const QString &folderPath);
};

#endif // IMAGEINPUTWIDGET_H
