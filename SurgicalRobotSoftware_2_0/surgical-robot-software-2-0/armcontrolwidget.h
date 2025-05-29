#ifndef ARMCONTROLWIDGET_H
#define ARMCONTROLWIDGET_H

#include <QWidget>

namespace Ui {
class ArmControlWidget;
}

class ArmControlWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ArmControlWidget(QWidget *parent = nullptr);
    ~ArmControlWidget();

private slots:
    void on_backButton_clicked();

signals:
    void back_to_prepage();

private:
    Ui::ArmControlWidget *ui;
};

#endif // ARMCONTROLWIDGET_H
