#ifndef IMAGEINPUTWIDGET_H
#define IMAGEINPUTWIDGET_H

#include <QWidget>
#include <qlabel.h>

namespace Ui {
class ImageInputWidget;
}

class ImageInputWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ImageInputWidget(QWidget *parent = nullptr);
    ~ImageInputWidget();

private slots:
    void on_backButton_clicked();
    void on_confirmButton_clicked();

signals:
    void back_to_imageDisplayWidget();
    void confirmButton_pressed();

private:
    Ui::ImageInputWidget *ui;
};

#endif // IMAGEINPUTWIDGET_H
