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
#include <vtkSTLReader.h>
#include <vtkMath.h>
#include <vtkTransform.h>

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
    sphereActor->SetPosition(0, 0, 0);

    sharedRenderer->AddActor(sphereActor);
    sharedRenderer->SetBackground(0.1, 0.1, 0.1);

    vtkWidget->renderWindow()->AddRenderer(sharedRenderer);
    vtkWidget->renderWindow()->Render();

    //setModelRelativeSize(existingActor, sphereActor, 0.5);
}

// 新增实现：在指定位置创建并返回 actor
vtkSmartPointer<vtkActor> Ballrenderer::createItemFromSTLAt(QVTKOpenGLNativeWidget* vtkWidget, const QString &stl_fileName,
                                                           double x, double y, double z)
{
    if (stl_fileName.isEmpty() || !vtkWidget) return nullptr;

    auto reader = vtkSmartPointer<vtkSTLReader>::New();
    reader->SetFileName(stl_fileName.toStdString().c_str());
    reader->Update();

    auto poly = reader->GetOutput();
    if (!poly) return nullptr;

    // 计算几何中心（质心）并找到“端点”：与质心距离最大的顶点
    vtkPoints* points = poly->GetPoints();
    if (!points || points->GetNumberOfPoints() == 0) return nullptr;

    double cx = 0.0, cy = 0.0, cz = 0.0;
    vtkIdType n = points->GetNumberOfPoints();
    for (vtkIdType i = 0; i < n; ++i) {
        double p[3];
        points->GetPoint(i, p);
        cx += p[0]; cy += p[1]; cz += p[2];
    }
    cx /= static_cast<double>(n);
    cy /= static_cast<double>(n);
    cz /= static_cast<double>(n);

    double maxDist2 = -1.0;
    double endPt[3] = { cx, cy, cz };
    for (vtkIdType i = 0; i < n; ++i) {
        double p[3];
        points->GetPoint(i, p);
        double dx = p[0] - cx;
        double dy = p[1] - cy;
        double dz = p[2] - cz;
        double d2 = dx*dx + dy*dy + dz*dz;
        if (d2 > maxDist2) {
            maxDist2 = d2;
            endPt[0] = p[0];
            endPt[1] = p[1];
            endPt[2] = p[2];
        }
    }

    // 找到与 endPt 最远的点作为另一端
    double otherPt[3] = { endPt[0], endPt[1], endPt[2] };
    double maxDist2ToEnd = -1.0;
    for (vtkIdType ii = 0; ii < n; ++ii) {
        double p[3];
        points->GetPoint(ii, p);
        double dx = p[0] - endPt[0];
        double dy = p[1] - endPt[1];
        double dz = p[2] - endPt[2];
        double d2 = dx*dx + dy*dy + dz*dz;
        if (d2 > maxDist2ToEnd) {
            maxDist2ToEnd = d2;
            otherPt[0] = p[0];
            otherPt[1] = p[1];
            otherPt[2] = p[2];
        }
    }

    // 建立 mapper & actor
    auto mapper = vtkSmartPointer<vtkPolyDataMapper>::New();
    mapper->SetInputData(poly);

    auto actor = vtkSmartPointer<vtkActor>::New();
    actor->SetMapper(mapper);

    // 计算模型轴向向量（从端点到另一端）
    double axis[3] = { otherPt[0] - endPt[0], otherPt[1] - endPt[1], otherPt[2] - endPt[2] };
    double axisLen = vtkMath::Norm(axis);
    if (axisLen > 1e-8) {
        vtkMath::Normalize(axis);
    } else {
        axis[0] = 1.0; axis[1] = 0.0; axis[2] = 0.0; // fallback
    }

    // 目标水平方向（选择 X 轴 1,0,0），若想对齐 Y 轴改为 {0,1,0}
    const double target[3] = {1.0, 0.0, 0.0};

    double dot = vtkMath::Dot(axis, target);
    if (dot > 1.0) dot = 1.0;
    if (dot < -1.0) dot = -1.0;

    auto transform = vtkSmartPointer<vtkTransform>::New();

    // 平移，使端点位于原点（以端点为旋转中心）
    transform->Translate(-endPt[0], -endPt[1], -endPt[2]);

    // 计算并应用旋转，使轴向与 target 对齐
    if (fabs(dot - 1.0) < 1e-6) {
        // 已经对齐，无需旋转
    } else if (fabs(dot + 1.0) < 1e-6) {
        // 完全相反，绕任意垂直轴旋转180度
        double orth[3] = {0.0, 0.0, 1.0};
        // 若 axis 与 orth 共线，换用另一个轴
        double tmpDot = fabs(vtkMath::Dot(axis, orth));
        if (tmpDot > 0.999) orth[0] = 0.0, orth[1] = 1.0, orth[2] = 0.0;
        transform->RotateWXYZ(180.0, orth);
    } else {
        double rotAxis[3];
        vtkMath::Cross(axis, target, rotAxis);
        double rotAxisLen = vtkMath::Norm(rotAxis);
        if (rotAxisLen > 1e-8) {
            vtkMath::Normalize(rotAxis);
            double angleDeg = vtkMath::DegreesFromRadians(acos(dot));
            transform->RotateWXYZ(angleDeg, rotAxis);
        }
    }

    // 最后把端点移动到目标世界坐标 (x,y,z)
    transform->Translate(x, y, z);

    actor->SetUserTransform(transform);
    // 不再使用 SetPosition(...)，变换已包含旋转和平移

    // 添加到 renderer（使用 sharedRenderer 或临时 renderer）
    if (sharedRenderer) {
        sharedRenderer->AddActor(actor);
        sharedRenderer->SetBackground(0.1, 0.1, 0.1);
        vtkWidget->renderWindow()->AddRenderer(sharedRenderer);
        vtkWidget->renderWindow()->Render();
    } else {
        auto renderer = vtkSmartPointer<vtkRenderer>::New();
        renderer->AddActor(actor);
        renderer->SetBackground(0.1, 0.1, 0.1);
        vtkWidget->renderWindow()->AddRenderer(renderer);
        vtkWidget->renderWindow()->Render();
    }

    return actor;
}
