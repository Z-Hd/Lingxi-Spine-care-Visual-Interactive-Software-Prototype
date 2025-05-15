#ifndef IMAGEDISPLAYWIDGET_H
#define IMAGEDISPLAYWIDGET_H

#include <QWidget>

namespace Ui {
class ImageDisplayWidget;
}

class ImageDisplayWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ImageDisplayWidget(QWidget *parent = nullptr);
    ~ImageDisplayWidget();

private slots:
    void on_simulationButton_clicked();

signals:
    void simulationButton_pressed();

private:
    Ui::ImageDisplayWidget *ui;
};

#endif // IMAGEDISPLAYWIDGET_H
