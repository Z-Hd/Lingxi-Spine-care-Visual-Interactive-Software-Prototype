#ifndef ENLARGEDMODEL3DWIDGET_H
#define ENLARGEDMODEL3DWIDGET_H

#include <QWidget>

namespace Ui {
class EnlargedModel3DWidget;
}

class EnlargedModel3DWidget : public QWidget
{
    Q_OBJECT

public:
    explicit EnlargedModel3DWidget(QWidget *parent = nullptr);
    ~EnlargedModel3DWidget();

private slots:
    void on_reduce3DModelButton_clicked();

signals:
    void reduce3DModelButton_pressed();

private:
    Ui::EnlargedModel3DWidget *ui;
};

#endif // ENLARGEDMODEL3DWIDGET_H
