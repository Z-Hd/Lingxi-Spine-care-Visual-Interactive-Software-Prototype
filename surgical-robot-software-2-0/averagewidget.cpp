#include "averagewidget.h"
#include "ui_averagewidget.h"
#include <QDir>
#include <QPixmap>
#include <QLabel>
#include <QPainter>
#include <QVBoxLayout>
#include <QFileInfo>
#include <QMessageBox>
#include <QDebug>

AverageWidget::AverageWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AverageWidget)
    , currentTransverseSlice(0)
    , currentCoronalSlice(0)
    , currentSagittalSlice(0)
{
    ui->setupUi(this);

    // 初始化VTK部件
    initializeVTKWidgets();

    // 设置滚动条初始值
    ui->transverseSlider->setValue(0);
    ui->coronalSlider->setValue(0);
    ui->sagittalSlider->setValue(0);

    // 连接滚动条信号
    connect(ui->transverseSlider, &QSlider::valueChanged, this, &AverageWidget::on_transverseSlider_valueChanged);
    connect(ui->coronalSlider, &QSlider::valueChanged, this, &AverageWidget::on_coronalSlider_valueChanged);
    connect(ui->sagittalSlider, &QSlider::valueChanged, this, &AverageWidget::on_sagittalSlider_valueChanged);
}

AverageWidget::~AverageWidget()
{
    delete ui;
}

void AverageWidget::initializeVTKWidgets()
{
    // 初始化横断面（Transverse/Axial）视图
    transverseRenderer = vtkSmartPointer<vtkRenderer>::New();
    transverseRenderer->SetBackground(0.0, 0.0, 0.0);
    transverseRenderWindow = vtkSmartPointer<vtkGenericOpenGLRenderWindow>::New();
    transverseRenderWindow->AddRenderer(transverseRenderer);
    ui->transversePlate->setRenderWindow(transverseRenderWindow);

    // 初始化冠状面（Coronal）视图
    coronalRenderer = vtkSmartPointer<vtkRenderer>::New();
    coronalRenderer->SetBackground(0.0, 0.0, 0.0);
    coronalRenderWindow = vtkSmartPointer<vtkGenericOpenGLRenderWindow>::New();
    coronalRenderWindow->AddRenderer(coronalRenderer);
    ui->coronalPlate->setRenderWindow(coronalRenderWindow);

    // 初始化矢状面（Sagittal）视图
    sagittalRenderer = vtkSmartPointer<vtkRenderer>::New();
    sagittalRenderer->SetBackground(0.0, 0.0, 0.0);
    sagittalRenderWindow = vtkSmartPointer<vtkGenericOpenGLRenderWindow>::New();
    sagittalRenderWindow->AddRenderer(sagittalRenderer);
    ui->sagittalPlate->setRenderWindow(sagittalRenderWindow);

    // 初始化3D模型视图
    model3DRenderer = vtkSmartPointer<vtkRenderer>::New();
    model3DRenderer->SetBackground(0.0, 0.0, 0.0);
    model3DRenderWindow = vtkSmartPointer<vtkGenericOpenGLRenderWindow>::New();
    model3DRenderWindow->AddRenderer(model3DRenderer);
    ui->model3DPlate->setRenderWindow(model3DRenderWindow);
}

void AverageWidget::on_enlargeButton_clicked()
{
    emit enlargeButton_pressed();
}

void AverageWidget::on_enlarge3DModelButton_clicked()
{
    emit enlarge3DModelButton_pressed();
}

void AverageWidget::onDicomDataReceived(const QString &folderPath)
{
    loadDicomImages(folderPath);
}

void AverageWidget::loadDicomImages(const QString &folderPath)
{
    qDebug() << "Loading DICOM images from:" << folderPath;
    qDebug() << "Directory exists:" << QDir(folderPath).exists();

    // 列出文件夹内容
    QDir dir(folderPath);
    QStringList entries = dir.entryList(QDir::AllEntries | QDir::NoDotAndDotDot);
    qDebug() << "Directory contents (first 10 entries):";
    for (int i = 0; i < qMin(10, entries.size()); ++i) {
        qDebug() << "  " << entries[i];
    }
    if (entries.size() > 10) {
        qDebug() << "  ... and" << (entries.size() - 10) << "more files";
    }

    // 创建DICOM读取器
    dicomReader = vtkSmartPointer<vtkDICOMImageReader>::New();
    dicomReader->SetDirectoryName(folderPath.toStdString().c_str());

    // 设置读取器参数
    dicomReader->FileLowerLeftOn(); // 尝试修正图像方向

    try {
        // 更新读取器，读取DICOM数据
        dicomReader->Update();

        // 检查是否成功读取数据
        if (!dicomReader->GetOutput()) {
            qDebug() << "Failed to read DICOM data!";
            return;
        }

        // 获取图像数据
        imageData = dicomReader->GetOutput();

        // 检查图像数据是否有效
        if (!imageData) {
            qDebug() << "Invalid image data!";
            return;
        }

        // 获取图像尺寸
        imageData->GetDimensions(imageDimensions);
        imageData->GetSpacing(imageSpacing);
        imageData->GetOrigin(imageOrigin);

        qDebug() << "DICOM dimensions:" << imageDimensions[0] << "x" << imageDimensions[1] << "x" << imageDimensions[2];
        qDebug() << "DICOM spacing:" << imageSpacing[0] << "x" << imageSpacing[1] << "x" << imageSpacing[2];
        qDebug() << "DICOM origin:" << imageOrigin[0] << "x" << imageOrigin[1] << "x" << imageOrigin[2];

        // 计算窗宽窗位
        double range[2];
        imageData->GetScalarRange(range);
        windowWidth = range[1] - range[0];
        windowLevel = (range[1] + range[0]) / 2;

        qDebug() << "DICOM scalar range:" << range[0] << "-" << range[1];
        qDebug() << "Window Width:" << windowWidth << ", Window Level:" << windowLevel;

        // 设置滚动条范围
        ui->transverseSlider->setRange(0, imageDimensions[2] - 1);
        ui->coronalSlider->setRange(0, imageDimensions[1] - 1);
        ui->sagittalSlider->setRange(0, imageDimensions[0] - 1);

        // 设置初始切片位置
        currentTransverseSlice = imageDimensions[2] / 2;
        currentCoronalSlice = imageDimensions[1] / 2;
        currentSagittalSlice = imageDimensions[0] / 2;

        ui->transverseSlider->setValue(currentTransverseSlice);
        ui->coronalSlider->setValue(currentCoronalSlice);
        ui->sagittalSlider->setValue(currentSagittalSlice);

        // 设置各个视图
        setupTransverseView();
        setupCoronalView();
        setupSagittalView();
        setupModel3DView();

        // 更新视图
        updateTransverseView(currentTransverseSlice);
        updateCoronalView(currentCoronalSlice);
        updateSagittalView(currentSagittalSlice);

        // 刷新渲染窗口
        transverseRenderWindow->Render();
        coronalRenderWindow->Render();
        sagittalRenderWindow->Render();
        model3DRenderWindow->Render();

        qDebug() << "DICOM images loaded and rendered successfully!";
    } catch (std::exception &e) {
        qDebug() << "Error loading DICOM images:" << e.what();
        QMessageBox::critical(this, "错误", QString("加载DICOM图像时出错: %1").arg(e.what()));
    }
}

void AverageWidget::setupTransverseView()
{
    // 创建横断面（Axial）视图
    vtkSmartPointer<vtkMatrix4x4> matrix = vtkSmartPointer<vtkMatrix4x4>::New();
    matrix->Identity();

    transverseMapper = vtkSmartPointer<vtkImageResliceMapper>::New();
    transverseMapper->SetInputData(imageData);
    transverseMapper->SliceFacesCameraOn();
    transverseMapper->SliceAtFocalPointOn();
    transverseMapper->SetImageSampleFactor(1.0);

    // 设置切片方向为XY平面（Z轴）
    vtkSmartPointer<vtkPlane> plane = vtkSmartPointer<vtkPlane>::New();
    plane->SetOrigin(imageOrigin); // 使用图像原点
    plane->SetNormal(0, 0, 1); // Z轴方向
    transverseMapper->SetSlicePlane(plane);

    transverseSlice = vtkSmartPointer<vtkImageSlice>::New();
    transverseSlice->SetMapper(transverseMapper);

    // 设置窗宽窗位（Window/Level）
    vtkSmartPointer<vtkImageProperty> property = transverseSlice->GetProperty();
    property->SetColorWindow(windowWidth); // 使用计算的窗宽
    property->SetColorLevel(windowLevel);  // 使用计算的窗位
    property->SetInterpolationTypeToLinear();

    transverseRenderer->AddViewProp(transverseSlice);
    transverseRenderer->ResetCamera();
}

void AverageWidget::setupCoronalView()
{
    // 创建冠状面（Coronal）视图
    vtkSmartPointer<vtkMatrix4x4> matrix = vtkSmartPointer<vtkMatrix4x4>::New();
    matrix->Identity();

    coronalMapper = vtkSmartPointer<vtkImageResliceMapper>::New();
    coronalMapper->SetInputData(imageData);
    coronalMapper->SliceFacesCameraOn();
    coronalMapper->SliceAtFocalPointOn();
    coronalMapper->SetImageSampleFactor(1.0);

    // 设置切片方向为XZ平面（Y轴）
    vtkSmartPointer<vtkPlane> plane = vtkSmartPointer<vtkPlane>::New();
    plane->SetOrigin(imageOrigin); // 使用图像原点
    plane->SetNormal(0, 1, 0); // Y轴方向
    coronalMapper->SetSlicePlane(plane);

    coronalSlice = vtkSmartPointer<vtkImageSlice>::New();
    coronalSlice->SetMapper(coronalMapper);

    // 设置窗宽窗位
    vtkSmartPointer<vtkImageProperty> property = coronalSlice->GetProperty();
    property->SetColorWindow(windowWidth); // 使用计算的窗宽
    property->SetColorLevel(windowLevel);  // 使用计算的窗位
    property->SetInterpolationTypeToLinear();

    coronalRenderer->AddViewProp(coronalSlice);
    coronalRenderer->ResetCamera();
}

void AverageWidget::setupSagittalView()
{
    // 创建矢状面（Sagittal）视图
    vtkSmartPointer<vtkMatrix4x4> matrix = vtkSmartPointer<vtkMatrix4x4>::New();
    matrix->Identity();

    sagittalMapper = vtkSmartPointer<vtkImageResliceMapper>::New();
    sagittalMapper->SetInputData(imageData);
    sagittalMapper->SliceFacesCameraOn();
    sagittalMapper->SliceAtFocalPointOn();
    sagittalMapper->SetImageSampleFactor(1.0);

    // 设置切片方向为YZ平面（X轴）
    vtkSmartPointer<vtkPlane> plane = vtkSmartPointer<vtkPlane>::New();
    plane->SetOrigin(imageOrigin); // 使用图像原点
    plane->SetNormal(1, 0, 0); // X轴方向
    sagittalMapper->SetSlicePlane(plane);

    sagittalSlice = vtkSmartPointer<vtkImageSlice>::New();
    sagittalSlice->SetMapper(sagittalMapper);

    // 设置窗宽窗位
    vtkSmartPointer<vtkImageProperty> property = sagittalSlice->GetProperty();
    property->SetColorWindow(windowWidth); // 使用计算的窗宽
    property->SetColorLevel(windowLevel);  // 使用计算的窗位
    property->SetInterpolationTypeToLinear();

    sagittalRenderer->AddViewProp(sagittalSlice);
    sagittalRenderer->ResetCamera();
}

void AverageWidget::setupModel3DView()
{
    // 这里可以添加3D体渲染的代码
    // 例如使用vtkVolume和vtkVolumeMapper
    // 由于复杂度较高，此处暂不实现
}

void AverageWidget::updateTransverseView(int sliceNumber)
{
    if (!imageData) return;

    // 更新横断面切片位置
    double origin[3];
    imageData->GetOrigin(origin);
    double spacing[3];
    imageData->GetSpacing(spacing);

    // 计算切片位置
    double position = origin[2] + sliceNumber * spacing[2];

    // 更新切片平面 - 使用vtkPlane对象
    vtkSmartPointer<vtkPlane> plane = vtkSmartPointer<vtkPlane>::New();
    plane->SetOrigin(0, 0, position);
    plane->SetNormal(0, 0, 1); // Z轴方向
    transverseMapper->SetSlicePlane(plane);

    // 刷新渲染
    transverseRenderWindow->Render();
}

void AverageWidget::updateCoronalView(int sliceNumber)
{
    if (!imageData) return;

    // 更新冠状面切片位置
    double origin[3];
    imageData->GetOrigin(origin);
    double spacing[3];
    imageData->GetSpacing(spacing);

    // 计算切片位置
    double position = origin[1] + sliceNumber * spacing[1];

    // 更新切片平面 - 使用vtkPlane对象
    vtkSmartPointer<vtkPlane> plane = vtkSmartPointer<vtkPlane>::New();
    plane->SetOrigin(0, position, 0);
    plane->SetNormal(0, 1, 0); // Y轴方向
    coronalMapper->SetSlicePlane(plane);

    // 刷新渲染
    coronalRenderWindow->Render();
}

void AverageWidget::updateSagittalView(int sliceNumber)
{
    if (!imageData) return;

    // 更新矢状面切片位置
    double origin[3];
    imageData->GetOrigin(origin);
    double spacing[3];
    imageData->GetSpacing(spacing);

    // 计算切片位置
    double position = origin[0] + sliceNumber * spacing[0];

    // 更新切片平面 - 使用vtkPlane对象
    vtkSmartPointer<vtkPlane> plane = vtkSmartPointer<vtkPlane>::New();
    plane->SetOrigin(position, 0, 0);
    plane->SetNormal(1, 0, 0); // X轴方向
    sagittalMapper->SetSlicePlane(plane);

    // 刷新渲染
    sagittalRenderWindow->Render();
}

void AverageWidget::on_transverseSlider_valueChanged(int value)
{
    currentTransverseSlice = value;
    updateTransverseView(currentTransverseSlice);
}

void AverageWidget::on_coronalSlider_valueChanged(int value)
{
    currentCoronalSlice = value;
    updateCoronalView(currentCoronalSlice);
}

void AverageWidget::on_sagittalSlider_valueChanged(int value)
{
    currentSagittalSlice = value;
    updateSagittalView(currentSagittalSlice);
}

QStringList AverageWidget::loadDicomFilesFromFolder(const QString &folderPath)
{
    QDir dir(folderPath);
    QStringList filters;
    filters << "*.dcm" << "*.DCM" << "*.dicom" << "*.DICOM";

    QStringList dicomFiles = dir.entryList(filters, QDir::Files, QDir::Name);

    // 如果没有找到标准DICOM文件，尝试查找特定格式的文件
    if (dicomFiles.isEmpty()) {
        QStringList allFiles = dir.entryList(QDir::Files, QDir::Name);
        for (const QString &file : allFiles) {
            // 检查无扩展名的文件
            if (!file.contains('.')) {
                dicomFiles.append(file);
            }
            // 检查以CT开头的文件（适应特定的DICOM文件格式）
            else if (file.startsWith("CT.", Qt::CaseInsensitive)) {
                dicomFiles.append(file);
            }
            // 检查包含DICOM UID模式的文件
            else if (file.contains("1.2.840") || file.contains("1.3.12")) {
                dicomFiles.append(file);
            }
        }
    }

    // 转换为完整路径
    QStringList fullPaths;
    for (const QString &file : dicomFiles) {
        fullPaths.append(dir.absoluteFilePath(file));
    }

    return fullPaths;
}
