#ifndef SPINALIMAGE_H
#define SPINALIMAGE_H

#include <QWidget>
#include <vtkImageData.h>
#include "visualizeTool.h"

namespace Ui {
class SpinalImage;
}

class SpinalImage : public QWidget
{
    Q_OBJECT

public:
    explicit SpinalImage(QWidget *parent = nullptr);
    ~SpinalImage();
    void initImage();

private slots:
    void on_previousStep1_clicked();
    void on_nextStep1_clicked();
    void axialSliderChange(int value);
    void coronalSliderChange(int value);
    void sagittalSliderChange(int value);

    void on_loadImage_clicked();

    void on_segment_clicked();

signals:
    void nextButton_pressed();
    void preButton_pressed();

private:
    Ui::SpinalImage *ui;
    vtkImageData* imageData;
    vtkImageData* imageSegment;
    VisualizeTool visualizeTool;
    bool isSegment=false;
};

#endif // SPINALIMAGE_H
