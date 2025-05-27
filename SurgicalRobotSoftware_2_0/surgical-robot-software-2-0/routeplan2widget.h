#ifndef ROUTEPLAN2WIDGET_H
#define ROUTEPLAN2WIDGET_H

#include <QWidget>
#include "vertebraselectionwidget.h"

namespace Ui {
class RoutePlan2Widget;
}

class RoutePlan2Widget : public QWidget
{
    Q_OBJECT

public:
    explicit RoutePlan2Widget(QWidget *parent = nullptr);
    ~RoutePlan2Widget();

    // 设置标签内容的方法
    void setVertebraLabel(const QString &text);

private slots:
    void on_addRouteButton_clicked();

    void handleVertebraSelected(const QString &vertebra);
    void handleSelectionCanceled();

    void on_nextButton_clicked();

signals:
    void back_to_vertebraSelectionWidget();
    void nextButton_pressed();

private:
    Ui::RoutePlan2Widget *ui;
    VertebraSelectionWidget *vertebraSelectionWidget;
};

#endif // ROUTEPLAN2WIDGET_H
