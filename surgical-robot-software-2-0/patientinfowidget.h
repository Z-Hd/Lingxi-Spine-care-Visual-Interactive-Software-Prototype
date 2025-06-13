#ifndef PATIENTINFOWIDGET_H
#define PATIENTINFOWIDGET_H

#include <QWidget>

namespace Ui {
class PatientInfoWidget;
}

class PatientInfoWidget : public QWidget
{
    Q_OBJECT

public:
    explicit PatientInfoWidget(QWidget *parent = nullptr);
    ~PatientInfoWidget();

private slots:
    void on_confirmButton_clicked();

signals:
    void confirmButton_pressed();

private:
    Ui::PatientInfoWidget *ui;
};

#endif // PATIENTINFOWIDGET_H
