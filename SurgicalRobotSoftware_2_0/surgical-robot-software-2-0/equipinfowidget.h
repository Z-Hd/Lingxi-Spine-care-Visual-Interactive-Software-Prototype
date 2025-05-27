#ifndef EQUIPINFOWIDGET_H
#define EQUIPINFOWIDGET_H

#include <QWidget>

namespace Ui {
class EquipInfoWidget;
}

class EquipInfoWidget : public QWidget
{
    Q_OBJECT

public:
    explicit EquipInfoWidget(QWidget *parent = nullptr);
    ~EquipInfoWidget();

private slots:
    void on_confirmButton_clicked();


signals:
    void confirmButton_pressed();

private:
    Ui::EquipInfoWidget *ui;
};

#endif // EQUIPINFOWIDGET_H
