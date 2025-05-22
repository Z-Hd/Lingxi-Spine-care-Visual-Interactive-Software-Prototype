#ifndef SEGMENTATIONWIDGET_H
#define SEGMENTATIONWIDGET_H

#include <QWidget>

namespace Ui {
class SegmentationWidget;
}

class SegmentationWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SegmentationWidget(QWidget *parent = nullptr);
    ~SegmentationWidget();

private slots:
    void on_imageInputButton_clicked();

signals:
    void imageInputButton_pressed();

private:
    Ui::SegmentationWidget *ui;
};

#endif // SEGMENTATIONWIDGET_H
