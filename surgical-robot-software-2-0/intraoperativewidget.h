#ifndef INTRAOPERATIVEWIDGET_H
#define INTRAOPERATIVEWIDGET_H

#include <QWidget>

#include <QtMultimedia>
#include <vtkImageData.h>
#include "visualizetool.h"

namespace Ui {
class IntraoperativeWidget;
}

class IntraoperativeWidget : public QWidget
{
    Q_OBJECT

public:
    explicit IntraoperativeWidget(QWidget *parent = nullptr);
    ~IntraoperativeWidget();
    void initImage();

private slots:
    void on_backButton_clicked();

    void on_coronalSlider_valueChanged(int value);

    void on_sagittalSlider_valueChanged(int value);

    void on_transverseSlider_valueChanged(int value);

signals:
    void back_to_imagedisPlayWidget();

private:
    Ui::IntraoperativeWidget *ui;

    QMediaCaptureSession  *session;      //抓取管理器
    QCamera     *camera;                //摄像头
    VisualizeTool visualizeTool;
    vtkImageData* imageData;

    void    initCamera();//初始化
};

#endif // INTRAOPERATIVEWIDGET_H
