#ifndef ARMCONTROLWIDGET_H
#define ARMCONTROLWIDGET_H

#include "directionalpadwidget.h"
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
    void onSpeedSliderChanged(int value);


signals:
    void back_to_prepage();

private:
    Ui::ArmControlWidget *ui;

    void setupDirectionalPad();
};



#include <QStyledItemDelegate>
#include <QStyleOptionViewItem>

class CenteredItemDelegate : public QStyledItemDelegate {
public:
    using QStyledItemDelegate::QStyledItemDelegate;

    void initStyleOption(QStyleOptionViewItem *option, const QModelIndex &index) const override {
        QStyledItemDelegate::initStyleOption(option, index);
        option->displayAlignment = Qt::AlignCenter;
    }
};

#endif // ARMCONTROLWIDGET_H
