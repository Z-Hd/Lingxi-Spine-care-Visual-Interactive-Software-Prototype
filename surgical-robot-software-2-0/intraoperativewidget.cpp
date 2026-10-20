#include "intraoperativewidget.h"
#include "ui_intraoperativewidget.h"
#include "GlobalVTKDataManager.h"
#include <QDebug>
#include "ballrenderer.h"
#include <QVBoxLayout>
#include <vtkNIFTIImageReader.h>
#include <QRandomGenerator>
#include <vtkRenderer.h>
#include <vtkRendererCollection.h>
#include <vtkSphereSource.h>
#include <vtkPolyDataMapper.h>
#include <vtkActor.h>
#include <vtkProperty.h>
#include <QPushButton>  // 新增
#include <QFileDialog>
#include <vtkTransform.h>
#include <vtkSmartPointer.h>
#include <vtkPoints.h>
#include <vtkCellArray.h>
#include <vtkPolyData.h>
#include <vtkPolyDataMapper2D.h>
#include <vtkActor2D.h>
#include <vtkCoordinate.h>
#include <vtkProperty2D.h>

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
    visualizeTool.show3D(threeDimensiona1Render,imageSegment,true);

    QString stl_fileName = QFileDialog::getOpenFileName(this, QString::fromLocal8Bit("请选择文件路径..."), "*.STL");
    Ballrenderer::createItemFromSTL(vtkWidget, stl_fileName);
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
        vtkSmartPointer<vtkRenderWindow> coronalRenderWindow = ui->coronalWidget->renderWindow();
        visualizeTool.showReslice(imageData,coronalRenderWindow,VisualizeTool::Coronal,value,false);
    }
}


void IntraoperativeWidget::on_sagittalSlider_valueChanged(int value)
{
    if(imageData!=nullptr){
        vtkSmartPointer<vtkRenderWindow> sagittalRenderWindow = ui->sagittalWidget->renderWindow();
        visualizeTool.showReslice(imageData,sagittalRenderWindow,VisualizeTool::Sagittal,value,false);
    }
}


void IntraoperativeWidget::on_transverseSlider_valueChanged(int value)
{

    if(imageData!=nullptr){
        vtkSmartPointer<vtkRenderWindow> transverseRenderWindow = ui->transverseWidget->renderWindow();
        visualizeTool.showReslice(imageData,transverseRenderWindow,VisualizeTool::Axial,value,false);
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

    // 简单校验：如果 GetPoint 返回全0且索引不为(0,0,0)，退回 origin+spacing 计算
    bool ok = !(p[0]==0.0 && p[1]==0.0 && p[2]==0.0 && (i!=0 || j!=0 || k!=0));
    if (ok) {
        outWorld[0]=p[0]; outWorld[1]=p[1]; outWorld[2]=p[2];
        return true;
    }

    double sp[3], org[3];
    img->GetSpacing(sp);
    img->GetOrigin(org);
    // 使用体素中心（+0.5）作为 fallback
    outWorld[0] = org[0] + (i - ext[0] + 0.5) * sp[0];
    outWorld[1] = org[1] + (j - ext[2] + 0.5) * sp[1];
    outWorld[2] = org[2] + (k - ext[4] + 0.5) * sp[2];
    return true;
}

// Helper: 在显示坐标系下创建一个十字的 Actor2D
static vtkSmartPointer<vtkActor2D> createCrossActor2D(double dispX, double dispY, double sizePx = 8.0, const double color[3] = nullptr)
{
    auto points = vtkSmartPointer<vtkPoints>::New();
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
    // 将 mapper 的坐标系统设置为显示坐标
    auto coord = vtkSmartPointer<vtkCoordinate>::New();
    coord->SetCoordinateSystemToDisplay();
    mapper2d->SetInputData(poly);
    mapper2d->SetTransformCoordinate(coord);

    auto actor2d = vtkSmartPointer<vtkActor2D>::New();
    actor2d->SetMapper(mapper2d);
    if (color) actor2d->GetProperty()->SetColor(color[0], color[1], color[2]);
    else actor2d->GetProperty()->SetColor(1.0, 0.0, 0.0);
    actor2d->GetProperty()->SetLineWidth(2.0);
    return actor2d;
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

    // 使用影像体素索引中心（extent 中点）
    const int i = (extent[0] + extent[1]) / 2;
    const int j = (extent[2] + extent[3]) / 2;
    const int k = (extent[4] + extent[5]) / 2;

    double worldPt[3] = {0.0, 0.0, 0.0};
    if (!voxelIndexToWorld(imageData, i, j, k, worldPt)) {
        qWarning() << "Failed to convert voxel index to world coordinates.";
        return;
    }

    const double x = worldPt[0];
    const double y = worldPt[1];
    const double z = worldPt[2];

    // 在三向切片视图上叠加十字标记（world -> display -> Actor2D）
    QVTKOpenGLNativeWidget* sliceWidgets[3] = { ui->coronalWidget, ui->sagittalWidget, ui->transverseWidget };
    const double red[3] = {1.0, 0.0, 0.0};
    for (int idx = 0; idx < 3; ++idx) {
        QVTKOpenGLNativeWidget* w = sliceWidgets[idx];
        if (!w) continue;
        vtkRenderWindow* rw = w->renderWindow();
        if (!rw || rw->GetRenderers()->GetNumberOfItems() == 0) continue;
        vtkRenderer* ren = rw->GetRenderers()->GetFirstRenderer();
        if (!ren) continue;

        // world -> display
        ren->SetWorldPoint(x, y, z, 1.0);
        ren->WorldToDisplay();
        double disp[3]; ren->GetDisplayPoint(disp);

        // 创建十字并添加（不记录以保持修改最小）
        auto marker = createCrossActor2D(disp[0], disp[1], 8.0, red);
        ren->AddActor2D(marker);
        rw->Render();
    }

    // 在 3D 窗口渲染一个小球（位置使用来自 imageData 的 worldPt，体素中心为基准）
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

    double voxel = std::max({ std::abs(spacing[0]), std::abs(spacing[1]), std::abs(spacing[2]) });
    if (voxel <= 0) voxel = 1.0;
    const double radius = voxel * 3.0;

    auto sphere = vtkSmartPointer<vtkSphereSource>::New();
    sphere->SetCenter(x, y, z);
    sphere->SetRadius(radius);
    sphere->SetThetaResolution(32);
    sphere->SetPhiResolution(32);
    sphere->Update();

    auto mapper = vtkSmartPointer<vtkPolyDataMapper>::New();
    mapper->SetInputConnection(sphere->GetOutputPort());

    auto actor = vtkSmartPointer<vtkActor>::New();
    actor->SetMapper(mapper);
    actor->GetProperty()->SetColor(1.0, 0.0, 0.0);
    actor->GetProperty()->SetOpacity(0.9);

    renderer->AddActor(actor);

    // 保持已有相机中心，仅更新裁剪范围或在无相机时重置
    if (!renderer->GetActiveCamera()) {
        double bounds[6];
        actor->GetBounds(bounds);
        renderer->ResetCamera(bounds);
        renderer->ResetCameraClippingRange();
    } else {
        renderer->ResetCameraClippingRange();
    }

    rw3d->Render();

    qDebug() << "Marker/sphere placed at image voxel center (world):" << x << y << z << " (ijk:" << i << j << k << ")";
}

