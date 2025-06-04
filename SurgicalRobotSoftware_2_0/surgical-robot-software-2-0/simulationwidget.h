#ifndef SIMULATIONWIDGET_H
#define SIMULATIONWIDGET_H

#include <QWidget>

namespace Ui {
class SimulationWidget;
}

class SimulationWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SimulationWidget(QWidget *parent = nullptr);
    ~SimulationWidget();

private slots:
    void on_backButton_clicked();

    void on_confirmButton_clicked();

signals:
    void back_to_imageDisplayWidget();

private:
    Ui::SimulationWidget *ui;

    void initDistanceWidget(int curValue);
    void initAngleWidget(int curValue);
};

#endif // SIMULATIONWIDGET_H
