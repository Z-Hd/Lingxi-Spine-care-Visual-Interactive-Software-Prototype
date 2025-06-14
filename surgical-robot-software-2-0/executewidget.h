#ifndef EXECUTEWIDGET_H
#define EXECUTEWIDGET_H

#include <QWidget>

namespace Ui {
class ExecuteWidget;
}

class ExecuteWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ExecuteWidget(QWidget *parent = nullptr);
    ~ExecuteWidget();

private slots:
    void on_backButton_clicked();
    void on_executeButton_clicked();
    void on_simulationButton_clicked();

signals:
    void back_to_routePlan2Widget();
    void simulationButton_pressed();
    void executeButton_pressed();

private:
    Ui::ExecuteWidget *ui;

    void initDistanceWidget(int curValue);
    void initAngleWidget(int curValue);
};

#endif // EXECUTEWIDGET_H
