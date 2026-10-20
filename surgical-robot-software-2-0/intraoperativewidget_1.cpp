#include "intraoperativewidget.h"
#include "ui_intraoperativewidget.h"
#include "GlobalVTKDataManager.h"
#include "ballrenderer.h"
#include <QDebug>
#include <QVBoxLayout>
#include <vtkNIFTIImageReader.h>
#include <QRandomGenerator>
#include <vtkRenderer.h>
#include <vtkRendererCollection.h>
#include <vtkSphereSource.h>
#include <vtkCylinderSource.h>   // ★ 新增：圆柱体源
#include <vtkPolyDataMapper.h>
#include <vtkActor.h>
#include <vtkProperty.h>
#include <vtkTransform.h>
#include <QPushButton>
#include <vtkPoints.h>
#include <vtkCellArray.h>
#include <vtkPolyData.h>
#include <vtkPolyDataMapper2D.h>
#include <vtkActor2D.h>
#include <vtkCoordinate.h>
#include <vtkProperty2D.h>
#include <vtkOutlineFilter.h>
#include <vtkCubeSource.h>
#include <vtkCubeAxesActor.h>    // ★ 新增：带刻度的坐标轴框
#include <vtkTextProperty.h>     // ★ 新增：文字属性
#include <vtkCamera.h>           // ★ 新增：相机

QVTKOpenGLNativeWidget *vtkWidget;

IntraoperativeWidget::IntraoperativeWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::IntraoperativeWidget)
{
    ui->setupUi(this);

    initCamera();

    // 在构造函数中添加如下代码：
    vtkWidget = new QVTKOpenGLNativeWidget(ui->widget_4);
    QVBoxLayout *layout = new QVBoxLayout(ui->widget_4);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->addWidget(vtkWidget);

    // 绑定 showButton -> 在CT中随机选点并画球
    connect(ui->showButton, &QPushButton::clicked,
            this, &IntraoperativeWidget::addRandomSphereInCT);
}

IntraoperativeWidget::~IntraoperativeWidget()
{
    delete ui;
}

void IntraoperativeWidget::initImage(){
    if(GlobalVTKDataManager::instance().isLoaded()){
        imageData = GlobalVTKDataManager::instance().getImage();
        int extent[6];
        double spacing[3];
        double origin[3];
        double center[3];

        imageData->GetExtent(extent);
        qDebug()<<extent[1]<<extent[2];
        imageData->GetSpacing(spacing);
        imageData->GetOrigin(origin);

        ui->transverseSlider->setMinimum(origin[2] + spacing[2]*extent[4]);
        ui->transverseSlider->setMaximum(origin[2] + spacing[2]*extent[5]);
        connect(ui->transverseSlider,&QSlider::valueChanged,this,&IntraoperativeWidget::on_transverseSlider_valueChanged);
        ui->transverseSlider->setValue(origin[2] + spacing[2] * 0.5 * (extent[4] + extent[5]));

        ui->coronalSlider->setMinimum(origin[1] + spacing[1]*extent[2]);
        ui->coronalSlider->setMaximum(origin[1] + spacing[1]*extent[3]);
        connect(ui->coronalSlider,&QSlider::valueChanged,this,&IntraoperativeWidget::on_coronalSlider_valueChanged);
        ui->coronalSlider->setValue(origin[1] + spacing[1] * 0.5 * (extent[2] + extent[3]));

        ui->sagittalSlider->setMinimum(origin[0] + spacing[0]*extent[0]);
        ui->sagittalSlider->setMaximum(origin[0] + spacing[0]*extent[1]);
        connect(ui->sagittalSlider,&QSlider::valueChanged,this,&IntraoperativeWidget::on_sagittalSlider_valueChanged);
        ui->sagittalSlider->setValue( origin[0] + spacing[0] * 0.5 * (extent[0] + extent[1]));

    }
}

void IntraoperativeWidget::show3DModel()
{
    QString str = QDir::cleanPath(QCoreApplication::applicationDirPath() + QDir::separator() + QString("file/segment/spine_007.nii.gz"));
    vtkSmartPointer<vtkNIFTIImageReader> reader = vtkSmartPointer<vtkNIFTIImageReader>::New();
    reader->SetFileName(str.toStdString().c_str());
    reader->Update();
    imageSegment = reader->GetOutput();
    GlobalVTKDataManager::instance().setSegment(imageSegment);

    vtkSmartPointer<vtkRenderWindow> threeDimensiona1Render = vtkWidget->renderWindow();
    visualizeTool.show3D(threeDimensiona1Render,imageSegment,true,true);

    // QString stl_fileName = QFileDialog::getOpenFileName(this, QString::fromLocal8Bit("请选择文件路径..."), "*.STL");
    // Ballrenderer::createItemFromSTL(vtkWidget, stl_fileName);
}

void IntraoperativeWidget::initCamera(){
    //1. 发现摄像头,若没有默认摄像头,就无法进行本示例的操作
    QCameraDevice defaultCameraDevice= QMediaDevices::defaultVideoInput();

    if (defaultCameraDevice.isNull())
    {
        return;
    }
    QByteArray defaultCameraID=defaultCameraDevice.id();
    //ui->actStartCamera->setEnabled(true);

    //2. 创建抓取管理器session和各个设备
    session = new QMediaCaptureSession(this);       //抓取管理器
    session->setVideoOutput(ui->endoscopyWidget);      //设置视频输出组件，用于视频预览

    //2.2 创建QCamera对象,用于控制摄像头
    camera = new QCamera(this);        //摄像头
    camera->setCameraDevice(defaultCameraDevice);   //
    session->setCamera(camera);        //为session设置摄像头

    camera->start();// 启动摄像头
}

void IntraoperativeWidget::on_backButton_clicked()
{
    emit back_to_imagedisPlayWidget();
}

void IntraoperativeWidget::on_coronalSlider_valueChanged(int value)
{
    if(imageData!=nullptr){
        // 改为原始指针，避免重载歧义
        vtkRenderWindow* coronalRenderWindow = ui->coronalWidget->renderWindow();
        visualizeTool.showReslice(imageData, coronalRenderWindow, VisualizeTool::Coronal, value, false);
    }
}

void IntraoperativeWidget::on_sagittalSlider_valueChanged(int value)
{
    if(imageData!=nullptr){
        // 改为原始指针
        vtkRenderWindow* sagittalRenderWindow = ui->sagittalWidget->renderWindow();
        visualizeTool.showReslice(imageData, sagittalRenderWindow, VisualizeTool::Sagittal, value, false);
    }
}

void IntraoperativeWidget::on_transverseSlider_valueChanged(int value)
{
    if(imageData!=nullptr){
        // 改为原始指针
        vtkRenderWindow* transverseRenderWindow = ui->transverseWidget->renderWindow();
        visualizeTool.showReslice(imageData, transverseRenderWindow, VisualizeTool::Axial, value, false);
    }
}

// Helper: 将体素索引 (i,j,k) -> world 坐标，优先使用 imageData->GetPoint
static bool voxelIndexToWorld(vtkImageData* img, int i, int j, int k, double outWorld[3])
{
    if (!img) return false;
    int ext[6];
    img->GetExtent(ext);
    if (i < ext[0] || i > ext[1] || j < ext[2] || j > ext[3] || k < ext[4] || k > ext[5]) return false;

    const int dimX = ext[1] - ext[0] + 1;
    const int dimY = ext[3] - ext[2] + 1;
    vtkIdType ptId = static_cast<vtkIdType>((i - ext[0]) + (j - ext[2]) * dimX + (k - ext[4]) * dimX * dimY);

    double p[3] = {0.0,0.0,0.0};
    img->GetPoint(ptId, p);

    bool ok = !(p[0]==0.0 && p[1]==0.0 && p[2]==0.0 && (i!=0 || j!=0 || k!=0));
    if (ok) {
        outWorld[0]=p[0]; outWorld[1]=p[1]; outWorld[2]=p[2];
        return true;
    }

    double sp[3], org[3];
    img->GetSpacing(sp);
    img->GetOrigin(org);
    outWorld[0] = org[0] + (i - ext[0] + 0.5) * sp[0];
    outWorld[1] = org[1] + (j - ext[2] + 0.5) * sp[1];
    outWorld[2] = org[2] + (k - ext[4] + 0.5) * sp[2];
    return true;
}

// Helper: world 坐标 -> 体素索引 (i,j,k)，假设没有方向矩阵（identity direction）
// 简单按 origin/spacing 反推再 clamp 到 extent 内
static bool worldToVoxelIndex(vtkImageData* img, double x, double y, double z,
                              int &i, int &j, int &k)
{
    if (!img) return false;

    int ext[6];
    img->GetExtent(ext);
    double sp[3], org[3];
    img->GetSpacing(sp);
    img->GetOrigin(org);

    if (sp[0] == 0.0 || sp[1] == 0.0 || sp[2] == 0.0)
        return false;

    // 按体素中心公式反推：(world - origin)/spacing + ext[0] - 0.5
    double fi = (x - org[0]) / sp[0] + ext[0] - 0.5;
    double fj = (y - org[1]) / sp[1] + ext[2] - 0.5;
    double fk = (z - org[2]) / sp[2] + ext[4] - 0.5;

    i = static_cast<int>(std::floor(fi + 0.5));
    j = static_cast<int>(std::floor(fj + 0.5));
    k = static_cast<int>(std::floor(fk + 0.5));

    // clamp 到有效范围
    if (i < ext[0]) i = ext[0];
    if (i > ext[1]) i = ext[1];
    if (j < ext[2]) j = ext[2];
    if (j > ext[3]) j = ext[3];
    if (k < ext[4]) k = ext[4];
    if (k > ext[5]) k = ext[5];

    return true;
}

// Helper: 在显示坐标系下创建一个十字的 Actor2D
static vtkSmartPointer<vtkActor2D> createCrossActor2D(double dispX, double dispY,
                                                      double sizePx = 8.0,
                                                      const double color[3] = nullptr)
{
    auto points = vtkSmartPointer<vtkPoints>::New();
    // 注意：这里的坐标直接就是显示坐标 (Display coordinates)
    vtkIdType p0 = points->InsertNextPoint(dispX - sizePx, dispY, 0.0);
    vtkIdType p1 = points->InsertNextPoint(dispX + sizePx, dispY, 0.0);
    vtkIdType p2 = points->InsertNextPoint(dispX, dispY - sizePx, 0.0);
    vtkIdType p3 = points->InsertNextPoint(dispX, dispY + sizePx, 0.0);

    auto lines = vtkSmartPointer<vtkCellArray>::New();
    lines->InsertNextCell(2); lines->InsertCellPoint(p0); lines->InsertCellPoint(p1);
    lines->InsertNextCell(2); lines->InsertCellPoint(p2); lines->InsertCellPoint(p3);

    auto poly = vtkSmartPointer<vtkPolyData>::New();
    poly->SetPoints(points);
    poly->SetLines(lines);

    auto mapper2d = vtkSmartPointer<vtkPolyDataMapper2D>::New();
    mapper2d->SetInputData(poly);
    // 关键：不用 vtkCoordinate，不设置 TransformCoordinate，
    // 让 mapper 按 points 中的坐标当作显示坐标使用

    auto actor2d = vtkSmartPointer<vtkActor2D>::New();
    actor2d->SetMapper(mapper2d);
    if (color) actor2d->GetProperty()->SetColor(color[0], color[1], color[2]);
    else       actor2d->GetProperty()->SetColor(1.0, 0.0, 0.0);
    actor2d->GetProperty()->SetLineWidth(2.0);
    return actor2d;
}

void IntraoperativeWidget::showRuler()
{
    if (!imageData) {
        qWarning() << "imageData is null. Call initImage() first.";
        return;
    }

    vtkRenderWindow* rw3d = vtkWidget->renderWindow();
    if (!rw3d) {
        qWarning() << "vtkWidget renderWindow is null.";
        return;
    }

    vtkRenderer* renderer = nullptr;
    if (rw3d->GetRenderers()->GetNumberOfItems() == 0) {
        renderer = vtkRenderer::New();
        rw3d->AddRenderer(renderer);
        renderer->Delete();
    } else {
        renderer = rw3d->GetRenderers()->GetFirstRenderer();
    }

    // 如果标尺已存在，切换可见性
    if (cubeAxesActor) {
        rulerVisible = !rulerVisible;
        cubeAxesActor->SetVisibility(rulerVisible ? 1 : 0);
        rw3d->Render();
        qDebug() << "Ruler visibility:" << rulerVisible;
        return;
    }

    // 首次创建标尺
    int extent[6];
    double spacing[3];
    double origin[3];
    imageData->GetExtent(extent);
    imageData->GetSpacing(spacing);
    imageData->GetOrigin(origin);

    double bounds[6];
    bounds[0] = origin[0];
    bounds[1] = origin[0] + (extent[1] - extent[0]) * spacing[0];
    bounds[2] = origin[1];
    bounds[3] = origin[1] + (extent[3] - extent[2]) * spacing[1];
    bounds[4] = origin[2];
    bounds[5] = origin[2] + (extent[5] - extent[4]) * spacing[2];

    cubeAxesActor = vtkSmartPointer<vtkCubeAxesActor>::New();
    cubeAxesActor->SetBounds(bounds);
    cubeAxesActor->SetCamera(renderer->GetActiveCamera());
    cubeAxesActor->SetXAxisRange(bounds[0], bounds[1]);
    cubeAxesActor->SetYAxisRange(bounds[2], bounds[3]);
    cubeAxesActor->SetZAxisRange(bounds[4], bounds[5]);
    cubeAxesActor->SetXTitle("X (mm)");
    cubeAxesActor->SetYTitle("Y (mm)");
    cubeAxesActor->SetZTitle("Z (mm)");
    cubeAxesActor->GetXAxesLinesProperty()->SetColor(1.0, 0.0, 0.0);
    cubeAxesActor->GetYAxesLinesProperty()->SetColor(0.0, 1.0, 0.0);
    cubeAxesActor->GetZAxesLinesProperty()->SetColor(0.0, 0.0, 1.0);
    cubeAxesActor->SetDrawXGridlines(0);
    cubeAxesActor->SetDrawYGridlines(0);
    cubeAxesActor->SetDrawZGridlines(0);
    cubeAxesActor->SetFlyModeToStaticTriad();
    cubeAxesActor->SetTickLocationToOutside();

    renderer->AddActor(cubeAxesActor);
    rulerVisible = true;

    renderer->ResetCameraClippingRange();
    rw3d->Render();

    qDebug() << "Ruler created. Bounds: X[" << bounds[0] << "," << bounds[1] << "]"
             << " Y[" << bounds[2] << "," << bounds[3] << "]"
             << " Z[" << bounds[4] << "," << bounds[5] << "]";
}

void IntraoperativeWidget::addRandomSphereInCT()
{
    if (!imageData) {
        qWarning() << "imageData is null. Call initImage() after CT is loaded.";
        return;
    }

    int extent[6];
    double spacing[3];
    double origin[3];
    imageData->GetExtent(extent);
    imageData->GetSpacing(spacing);
    imageData->GetOrigin(origin);

    // 1）中心体素索引 -> P1 世界坐标（固定点）
    const int centerI = (extent[0] + extent[1]) / 2;
    const int centerJ = (extent[2] + extent[3]) / 2;
    const int centerK = (extent[4] + extent[5]) / 2;

    p1[0] = origin[0] + (centerI - extent[0] + 0.5) * spacing[0];
    p1[1] = origin[1] + (centerJ - extent[2] + 0.5) * spacing[1];
    p1[2] = origin[2] + (centerK - extent[4] + 0.5) * spacing[2];

    // 2）初始 P2 坐标
    double radius = 100.0;  // 圆柱长度
    p2[0] = p1[0] + radius;
    p2[1] = p1[1];
    p2[2] = p1[2];

    // 3）在 3D 窗口渲染圆柱体
    vtkRenderWindow* rw3d = vtkWidget->renderWindow();
    if (!rw3d) {
        qWarning() << "vtkWidget renderWindow is null.";
        return;
    }

    vtkRenderer* renderer = nullptr;
    if (rw3d->GetRenderers()->GetNumberOfItems() == 0) {
        renderer = vtkRenderer::New();
        rw3d->AddRenderer(renderer);
        renderer->Delete();
    } else {
        renderer = rw3d->GetRenderers()->GetFirstRenderer();
    }

    // 创建圆柱（初始沿 Y 轴）
    auto cylinder = vtkSmartPointer<vtkCylinderSource>::New();
    cylinder->SetRadius(4.0);
    cylinder->SetHeight(radius);
    cylinder->SetResolution(32);
    cylinder->CappingOn();
    cylinder->Update();

    auto mapper = vtkSmartPointer<vtkPolyDataMapper>::New();
    mapper->SetInputConnection(cylinder->GetOutputPort());

    // 保存 actor 为成员变量，以便后续更新
    cylinderActor = vtkSmartPointer<vtkActor>::New();
    cylinderActor->SetMapper(mapper);
    cylinderActor->GetProperty()->SetColor(1.0, 0.0, 0.0);
    cylinderActor->GetProperty()->SetOpacity(0.9);

    renderer->AddActor(cylinderActor);

    // 4）显示标尺（调用抽象后的函数）
    showRuler();

    renderer->ResetCamera();
    renderer->ResetCameraClippingRange();

    // 5）启动动画定时器
    if (!animationTimer) {
        animationTimer = new QTimer(this);
        connect(animationTimer, &QTimer::timeout, this, &IntraoperativeWidget::updateCylinderPosition);
    }
    animationAngle = 0.0;
    animationTimer->start(50);  // 每 50ms 更新一次

    rw3d->Render();

    qDebug() << "Animation started. P1:" << p1[0] << p1[1] << p1[2];
}

void IntraoperativeWidget::updateCylinderPosition()
{
    if (!cylinderActor || !imageData) return;

    vtkRenderWindow* rw3d = vtkWidget->renderWindow();
    if (!rw3d) return;

    // 更新动画角度（绕圆锥轴旋转）
    animationAngle += 2.0;  // 每次增加 2 度
    if (animationAngle >= 360.0) animationAngle -= 360.0;

    double phiRad = vtkMath::RadiansFromDegrees(animationAngle);  // 绕轴旋转角
    double thetaRad = vtkMath::RadiansFromDegrees(coneHalfAngle); // 圆锥半角

    // ★ 圆锥轴方向：沿 Y 轴负方向（朝下）
    // P2 在圆锥面上的位置（球坐标转换，Y 轴为极轴）：
    // x = r * sin(theta) * cos(phi)
    // z = r * sin(theta) * sin(phi)
    // y = -r * cos(theta)  （负号表示朝 Y 轴负方向）
    double r = cylinderLength;
    double dx = r * std::sin(thetaRad) * std::cos(phiRad);
    double dz = r * std::sin(thetaRad) * std::sin(phiRad);
    double dy = -r * std::cos(thetaRad);  // Y 轴负方向

    p2[0] = p1[0] + dx;
    p2[1] = p1[1] + dy;
    p2[2] = p1[2] + dz;

    // 重新计算圆柱变换
    double axis[3] = { p2[0] - p1[0], p2[1] - p1[1], p2[2] - p1[2] };
    double length = std::sqrt(axis[0]*axis[0] + axis[1]*axis[1] + axis[2]*axis[2]);

    auto transform = vtkSmartPointer<vtkTransform>::New();

    // 中点
    double mid[3] = {
        (p1[0] + p2[0]) * 0.5,
        (p1[1] + p2[1]) * 0.5,
        (p1[2] + p2[2]) * 0.5
    };

    transform->Translate(mid[0], mid[1], mid[2]);

    // 计算从 Y 轴到目标方向的旋转
    double yAxis[3] = {0.0, 1.0, 0.0};
    double dir[3] = { axis[0]/length, axis[1]/length, axis[2]/length };
    double rotAxis[3] = {0.0, 0.0, 0.0};
    vtkMath::Cross(yAxis, dir, rotAxis);
    double rotAxisNorm = vtkMath::Norm(rotAxis);

    if (rotAxisNorm > 1e-6) {
        vtkMath::Normalize(rotAxis);
        double dot = vtkMath::Dot(yAxis, dir);
        dot = std::clamp(dot, -1.0, 1.0);
        double angleDeg = vtkMath::DegreesFromRadians(std::acos(dot));
        transform->RotateWXYZ(angleDeg, rotAxis[0], rotAxis[1], rotAxis[2]);
    } else {
        double dot = vtkMath::Dot(yAxis, dir);
        if (dot < 0.0) {
            transform->RotateWXYZ(180.0, 1.0, 0.0, 0.0);
        }
    }

    cylinderActor->SetUserTransform(transform);

    rw3d->Render();
}
