#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include "patientinfowidget.h"
#include "simulationwidget.h"
#include "armcontrolwidget.h"
#include "equipinfowidget.h"
#include "imagedisplaywidget.h"
#include "imageinputwidget.h"
#include "ndiwidget.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWidget;
}
QT_END_NAMESPACE

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    MainWidget(QWidget *parent = nullptr);
    ~MainWidget();

private:
    Ui::MainWidget *ui;

    PatientInfoWidget *patient_info_widget;
    EquipInfoWidget *equip_info_widget;
    ImageDisplayWidget *image_display_widget;
    ImageInputWidget *image_input_widget;
    SimulationWidget *simulation_widget;
    ArmControlWidget *arm_control_widget;
    NDIWidget *ndi_widget;

};
#endif // MAINWIDGET_H
