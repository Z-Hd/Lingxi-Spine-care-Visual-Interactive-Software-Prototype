#include "ballrenderer_2.h"
#include <vtkSmartPointer.h>
#include <vtkSphereSource.h>
#include <vtkPolyDataMapper.h>
#include <vtkActor.h>
#include <vtkRenderer.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkInteractorStyleTrackballCamera.h>
#include <vtkProperty.h>

Ballrenderer_2::Ballrenderer_2() {}

void Ballrenderer_2::renderBall(QVTKOpenGLNativeWidget* vtkWidget)
{
    if (!sharedRenderer) return;

    auto sphere2 = vtkSmartPointer<vtkSphereSource>::New();
    sphere2->SetCenter(0.0, 0.0, 0.0);
    sphere2->SetRadius(3.0);

    auto mapper2 = vtkSmartPointer<vtkPolyDataMapper>::New();
    mapper2->SetInputConnection(sphere2->GetOutputPort());

    auto actor2 = vtkSmartPointer<vtkActor>::New();
    actor2->SetMapper(mapper2);
    actor2->GetProperty()->SetColor(0.0, 1.0, 0.0);  // 绿色
    actor2->GetProperty()->SetOpacity(1.0);          // 不透明

    sharedRenderer->AddActor(actor2);
    vtkWidget->renderWindow()->Render();  // 重新刷新
}
