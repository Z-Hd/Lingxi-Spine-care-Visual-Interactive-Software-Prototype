#ifndef AVERAGEWIDGET_H
#define AVERAGEWIDGET_H

#include <QWidget>

namespace Ui {
class AverageWidget;
}

class AverageWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AverageWidget(QWidget *parent = nullptr);
    ~AverageWidget();

signals:
    void enlargeButton_pressed();
    void enlarge3DModelButton_pressed();

private slots:
    void on_enlargeButton_clicked();

    void on_enlarge3DModelButton_clicked();

private:
    Ui::AverageWidget *ui;
};

#endif // AVERAGEWIDGET_H
