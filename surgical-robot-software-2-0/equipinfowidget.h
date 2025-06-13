#ifndef EQUIPINFOWIDGET_H
#define EQUIPINFOWIDGET_H

#include <QWidget>
#include <QListWidgetItem>

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


    void on_toollistWidget_itemClicked(QListWidgetItem *item);

signals:
    void confirmButton_pressed();
    void itemNameSelected(const QString &itemName);

private:
    Ui::EquipInfoWidget *ui;
};

#endif // EQUIPINFOWIDGET_H
