#include "ballrenderer.h"
#include <vtkSmartPointer.h>
#include <vtkSphereSource.h>
#include <vtkPolyDataMapper.h>
#include <vtkActor.h>
#include <vtkRenderer.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkInteractorStyleTrackballCamera.h>
#include <vtkProperty.h>

vtkSmartPointer<vtkActor> sphereActor;  //TODO：设置在头文件中


Ballrenderer::Ballrenderer() {}

void Ballrenderer::renderBall(QVTKOpenGLNativeWidget* vtkWidget)
{
    if (!sharedRenderer) return;

    auto sphere1 = vtkSmartPointer<vtkSphereSource>::New();
    sphere1->SetCenter(0.0, 0.0, 0.0);
    sphere1->SetRadius(50.0);

    auto mapper1 = vtkSmartPointer<vtkPolyDataMapper>::New();
    mapper1->SetInputConnection(sphere1->GetOutputPort());

    auto actor1 = vtkSmartPointer<vtkActor>::New();
    actor1->SetMapper(mapper1);
    actor1->GetProperty()->SetColor(1.0, 0.0, 0.0);  // 红色
    actor1->GetProperty()->SetOpacity(0.3);          // 半透明

    auto renderer = vtkSmartPointer<vtkRenderer>::New();
    sharedRenderer->AddActor(actor1);
    sharedRenderer->SetBackground(0.1, 0.1, 0.1);

    vtkWidget->renderWindow()->AddRenderer(sharedRenderer);
    vtkWidget->renderWindow()->Render();
}

void Ballrenderer::createItemFromSTL(QVTKOpenGLNativeWidget* vtkWidget, QString stl_fileName){

    // if (stl_fileName.isEmpty())
    // {
    //     QMessageBox::warning(this, "Warning!", "Failed to open the file!");
    //     return;
    // }

    // 创建STL读取器
    vtkSmartPointer<vtkSTLReader> reader = vtkSmartPointer<vtkSTLReader>::New();
    reader->SetFileName(stl_fileName.toStdString().c_str());
    reader->Update();

    vtkSmartPointer<vtkPolyDataMapper> mapper = vtkSmartPointer<vtkPolyDataMapper>::New();
    mapper->SetInputData(reader->GetOutput());

    sphereActor = vtkSmartPointer<vtkActor>::New();
    sphereActor->SetMapper(mapper);
    sphereActor->SetPosition(-10, 0, 10);

    sharedRenderer->AddActor(sphereActor);
    sharedRenderer->SetBackground(0.1, 0.1, 0.1);

    vtkWidget->renderWindow()->AddRenderer(sharedRenderer);
    vtkWidget->renderWindow()->Render();

    //setModelRelativeSize(existingActor, sphereActor, 0.5);
}
