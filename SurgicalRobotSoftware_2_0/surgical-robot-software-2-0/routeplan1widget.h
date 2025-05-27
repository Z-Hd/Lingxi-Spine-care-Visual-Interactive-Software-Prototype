#ifndef ROUTEPLAN1WIDGET_H
#define ROUTEPLAN1WIDGET_H

#include <QWidget>
#include "vertebraselectionwidget.h"

namespace Ui {
class RoutePlan1Widget;
}

class RoutePlan1Widget : public QWidget
{
    Q_OBJECT

public:
    explicit RoutePlan1Widget(QWidget *parent = nullptr);
    ~RoutePlan1Widget();

private slots:
    void on_addRouteButton_clicked();

    void on_backButton_clicked();

    void handleVertebraSelected(const QString &vertebra);
    void handleSelectionCanceled();

    void on_nextButton_clicked();

signals:
    void back_to_registrationWidget();
    void nextButton_pressed();

private:
    Ui::RoutePlan1Widget *ui;
    VertebraSelectionWidget *vertebraSelectionWidget;
};

#endif // ROUTEPLAN1WIDGET_H
