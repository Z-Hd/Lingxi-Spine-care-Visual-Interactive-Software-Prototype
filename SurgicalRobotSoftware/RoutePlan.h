#ifndef ROUTEPLAN_H
#define ROUTEPLAN_H

#include <QWidget>

namespace Ui {
class RoutePlan;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();

private slots:
    void on_Refresh_2_clicked();

    void on_Next_2_clicked();

    void on_Previous_2_clicked();
signals:
    void preButton_pressed();
    void nextButton_pressed();

private:
    Ui::RoutePlan *ui;
};

#endif // ROUTEPLAN_H
