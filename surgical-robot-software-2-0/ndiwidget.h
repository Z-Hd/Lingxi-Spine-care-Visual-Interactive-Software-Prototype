#ifndef NDIWIDGET_H
#define NDIWIDGET_H

#include <QWidget>

namespace Ui {
class NDIWidget;
}

class NDIWidget : public QWidget
{
    Q_OBJECT

public:
    explicit NDIWidget(QWidget *parent = nullptr);
    ~NDIWidget();

private slots:
    void on_backButton_clicked();

signals:
    void back_to_prepage();

private:
    Ui::NDIWidget *ui;
};

#endif // NDIWIDGET_H
