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

    // 新增：在指定世界坐标处加载并渲染 STL，返回创建的 actor（空表示失败）
    static vtkSmartPointer<vtkActor> createItemFromSTLAt(QVTKOpenGLNativeWidget* vtkWidget, const QString &stl_fileName,
                                                         double x, double y, double z);

private:
    VisualizeTool visualizeTool;
};

#endif // BALLRENDERER_H


