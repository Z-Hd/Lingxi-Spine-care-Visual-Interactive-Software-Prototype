#ifndef IMAGEINPUTWIDGET_H
#define IMAGEINPUTWIDGET_H

#include <QWidget>

namespace Ui {
class ImageInputWidget;
}

class ImageInputWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ImageInputWidget(QWidget *parent = nullptr);
    ~ImageInputWidget();

private:
    Ui::ImageInputWidget *ui;
};

#endif // IMAGEINPUTWIDGET_H
