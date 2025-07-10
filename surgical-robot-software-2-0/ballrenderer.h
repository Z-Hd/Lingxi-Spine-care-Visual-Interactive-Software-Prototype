#ifndef BALLRENDERER_H
#define BALLRENDERER_H

#include <QVTKOpenGLNativeWidget.h>
#include "sharedrenderer.h"

#include <vtkSTLReader.h>
#include <QFileDialog.h>
#include <QMessageBox>

#include <vtkImageData.h>
#include "visualizeTool.h"
#include <vtkSmartPointer.h>
#include <vtkRenderWindow.h>
#include <vtkRenderer.h>
#include <vtkNamedColors.h>
#include <vtkSphereSource.h>
#include <vtkPolyDataMapper.h>
#include <vtkActor.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkInteractorStyleTrackballActor.h>
#include <vtkPropPicker.h>
#include <vtkCallbackCommand.h>
#include <vtkRenderWindowInteractor.h>

class Ballrenderer
{
public:
    Ballrenderer();
    static void createItemFromSTL(QVTKOpenGLNativeWidget* vtkWidget, QString stl_fileName);
    static void renderBall(QVTKOpenGLNativeWidget* vtkWidget);

private:
    VisualizeTool visualizeTool;
};

#endif // BALLRENDERER_H


