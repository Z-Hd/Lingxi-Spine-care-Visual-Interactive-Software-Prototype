#ifndef AVERAGEWIDGET_H
#define AVERAGEWIDGET_H

#include <QWidget>
#include <QPixmap>
#include <QLabel>

// VTK头文件
#include <vtkSmartPointer.h>
#include <vtkRenderer.h>
#include <vtkRenderWindow.h>
#include <vtkImageData.h>
#include <vtkDICOMImageReader.h>
#include <vtkImageViewer2.h>
#include <vtkImageReslice.h>
#include <vtkImageActor.h>
#include <vtkInteractorStyleImage.h>
#include <QVTKOpenGLNativeWidget.h>
#include <vtkGenericOpenGLRenderWindow.h>
#include <vtkImageFlip.h>
#include <vtkMatrix4x4.h>
#include <vtkImageResliceMapper.h>
#include <vtkImageSlice.h>
#include <vtkImageProperty.h>
#include <vtkImageStack.h>
#include <vtkLookupTable.h>
#include <vtkScalarBarActor.h>
#include <vtkTextProperty.h>
#include <vtkPlane.h>

namespace Ui {
class AverageWidget;
}

class AverageWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AverageWidget(QWidget *parent = nullptr);
    ~AverageWidget();

    void loadDicomImages(const QString &folderPath);

signals:
    void enlargeButton_pressed();
    void enlarge3DModelButton_pressed();

public slots:
    void onDicomDataReceived(const QString &folderPath);

private slots:
    void on_enlargeButton_clicked();

    void on_enlarge3DModelButton_clicked();

    void on_transverseSlider_valueChanged(int value);
    void on_coronalSlider_valueChanged(int value);
    void on_sagittalSlider_valueChanged(int value);

private:
    Ui::AverageWidget *ui;

    // VTK渲染相关成员变量
    vtkSmartPointer<vtkDICOMImageReader> dicomReader;
    vtkSmartPointer<vtkImageData> imageData;

    // 横断面（Transverse/Axial）
    vtkSmartPointer<vtkRenderer> transverseRenderer;
    vtkSmartPointer<vtkGenericOpenGLRenderWindow> transverseRenderWindow;
    vtkSmartPointer<vtkImageResliceMapper> transverseMapper;
    vtkSmartPointer<vtkImageSlice> transverseSlice;

    // 冠状面（Coronal）
    vtkSmartPointer<vtkRenderer> coronalRenderer;
    vtkSmartPointer<vtkGenericOpenGLRenderWindow> coronalRenderWindow;
    vtkSmartPointer<vtkImageResliceMapper> coronalMapper;
    vtkSmartPointer<vtkImageSlice> coronalSlice;

    // 矢状面（Sagittal）
    vtkSmartPointer<vtkRenderer> sagittalRenderer;
    vtkSmartPointer<vtkGenericOpenGLRenderWindow> sagittalRenderWindow;
    vtkSmartPointer<vtkImageResliceMapper> sagittalMapper;
    vtkSmartPointer<vtkImageSlice> sagittalSlice;

    // 3D模型
    vtkSmartPointer<vtkRenderer> model3DRenderer;
    vtkSmartPointer<vtkGenericOpenGLRenderWindow> model3DRenderWindow;

    // 当前切片位置
    int currentTransverseSlice;
    int currentCoronalSlice;
    int currentSagittalSlice;

    // 图像尺寸
    int imageDimensions[3];
    double imageSpacing[3];
    double imageOrigin[3];

    void initializeVTKWidgets();
    void setupTransverseView();
    void setupCoronalView();
    void setupSagittalView();
    void setupModel3DView();
    void updateTransverseView(int sliceNumber);
    void updateCoronalView(int sliceNumber);
    void updateSagittalView(int sliceNumber);

    // 添加窗宽窗位成员变量
    double windowWidth;
    double windowLevel;

    QStringList loadDicomFilesFromFolder(const QString &folderPath);
};

#endif // AVERAGEWIDGET_H
