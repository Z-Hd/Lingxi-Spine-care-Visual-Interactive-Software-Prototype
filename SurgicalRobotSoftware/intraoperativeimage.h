#ifndef INTRAOPERATIVEIMAGE_H
#define INTRAOPERATIVEIMAGE_H

#include <QWidget>
#include <QtMultimedia>
#include <QLabel>
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
#include <vtkRenderWindowInteractor.h>  // Qt6 用 QVTKRenderWindowInteractor

namespace Ui {
class IntraoperativeImage;
}

struct Vector3D {
    double x, y, z;
};

class IntraoperativeImage : public QWidget
{
    Q_OBJECT

private:
    QMediaCaptureSession  *session;      //抓取管理器
    QCamera     *camera;                //摄像头

    QImageCapture   *imageCapture;      //抓图器
    QSoundEffect    *soundEffect;       //用于拍照时播放快门音效

    QMediaRecorder  *recorder;          //录像

    QLabel   *labDuration;  //用于状态栏显示信息
    QLabel   *labInfo;
    QLabel   *labFormatInfo;
    bool    m_isWorking=false;  //是否已开启摄像头

    vtkImageData* imageData;
    VisualizeTool visualizeTool;
    vtkImageData* imageSegment;
    bool isSegment=false;

    void    initCamera();//初始化
    //    void    iniImageCapture();//初始化静态画图
    //    void    iniVideoRecorder();//初始化视频录制

    void    showCameraDeviceInfo(QCameraDevice *device);
    void    showCameraSupportFeatures(QCamera *aCamera);
    //void    closeEvent(QCloseEvent *event);

public:
    explicit IntraoperativeImage(QWidget *parent = nullptr);
    ~IntraoperativeImage();
    void initImage();
    void createSphereForTest(Vector3D vec);
    void updateSpherePosition(Vector3D newVec);

private slots:
    //void do_camera_changed(int index);  //与摄像头下拉列表框的信号关联

    //与QCamera的信号关联
    //void do_camera_activeChanged(bool active);

    // //与QImageCapture的信号关联vector
    // void do_image_readyForCapture(bool ready);
    // void do_image_captured(int id, const QImage &preview);
    // void do_image_saved(int id, const QString &fileName);

    // //与QMediaRecorder的信号关联
    // void do_recorder_duration(qint64 duration);
    // void do_recorder_stateChanged(QMediaRecorder::RecorderState state);
    // void do_recorder_error(QMediaRecorder::Error error, const QString &errorString);

    // void on_actCapture_triggered();

    // void on_actVideoRecord_triggered();

    // void on_actVideoStop_triggered();

    // void on_btnVideoFile_clicked();

    void TransverseSliderChange(int value);
    void CoronalSliderChange(int value);
    void SagittalSliderChange(int value);

    //void on_Refresh_3_clicked();
    void on_Segment_3_clicked();

    void on_refresh_3_clicked();

    void on_actStartCamera_clicked();

    void on_actStopCamera_clicked();

    void on_updatePositionButton_clicked();

    void on_previousPage_clicked();

signals:
    void preButton_pressed();

private:
    Ui::IntraoperativeImage *ui;
};

#endif // INTRAOPERATIVEIMAGE_H
