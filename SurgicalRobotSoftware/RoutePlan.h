#ifndef ROUTEPLAN_H
#define ROUTEPLAN_H

#include <QWidget>
#include <vtkImageData.h>
#include "visualizeTool.h"

namespace Ui {
class RoutePlan;
}

class RoutePlan : public QWidget
{
    Q_OBJECT

public:
    explicit RoutePlan(QWidget *parent = nullptr);
    ~RoutePlan();
    void initImage();
    void setImageData(vtkImageData* imageData, vtkImageData* imageSegment){
        this->imageData=imageData;
        this->imageSegment = imageSegment;
    }

private slots:
    void on_Refresh_2_clicked();
    void on_Next_2_clicked();
    void on_Previous_2_clicked();
    void on_Segment_2_clicked();
    void TransverseSliderChange(int value);
    void CoronalSliderChange(int value);
    void SagittalSliderChange(int value);

signals:
    void preButton_pressed();
    void nextButton_pressed();

private:
    Ui::RoutePlan *ui;
    vtkImageData* imageData;
    VisualizeTool visualizeTool;
    vtkImageData* imageSegment;
    bool isSegment=false;
};

#endif // ROUTEPLAN_H
