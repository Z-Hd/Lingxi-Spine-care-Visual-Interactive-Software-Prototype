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

private:
    Ui::NDIWidget *ui;
};

#endif // NDIWIDGET_H
