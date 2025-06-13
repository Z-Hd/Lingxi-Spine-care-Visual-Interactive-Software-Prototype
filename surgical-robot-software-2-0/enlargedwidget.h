#ifndef ENLARGEDWIDGET_H
#define ENLARGEDWIDGET_H

#include <QWidget>

namespace Ui {
class EnlargedWidget;
}

class EnlargedWidget : public QWidget
{
    Q_OBJECT

public:
    explicit EnlargedWidget(QWidget *parent = nullptr);
    ~EnlargedWidget();

private slots:
    void on_reduceButton_clicked();

signals:
    void reduceButton_pressed();

private:
    Ui::EnlargedWidget *ui;
};

#endif // ENLARGEDWIDGET_H
