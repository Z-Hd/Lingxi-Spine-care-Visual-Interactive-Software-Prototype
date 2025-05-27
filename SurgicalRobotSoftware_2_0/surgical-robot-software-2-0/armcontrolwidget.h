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

private:
    Ui::ArmControlWidget *ui;
};

#endif // ARMCONTROLWIDGET_H
