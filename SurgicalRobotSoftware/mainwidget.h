#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <vtkImageData.h>

namespace Ui {
class mainWidget;
}

class mainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit mainWidget(QWidget *parent = nullptr);
    ~mainWidget();
    vtkImageData* imageData;
    vtkImageData* imageSegment;

private:
    Ui::mainWidget *ui;
};

#endif // MAINWIDGET_H
