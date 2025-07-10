#include "imagedisplaywidget.h"
#include "ui_imagedisplaywidget.h"
#include "GlobalVTKDataManager.h"
#include <vtkNIFTIImageReader.h>

ImageDisplayWidget::ImageDisplayWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ImageDisplayWidget)
{
    ui->setupUi(this);

    // average_widget = new AverageWidget();
    // enlarged_widget = new EnlargedWidget();
    // enlargedmodel3D_widget = new EnlargedModel3DWidget();

    // ui->visualizationWidget->addWidget(average_widget);
    // ui->visualizationWidget->addWidget(enlarged_widget);
    // ui->visualizationWidget->addWidget(enlargedmodel3D_widget);

    // connect(average_widget, &AverageWidget::enlargeButton_pressed,[=](){
    //     ui->visualizationWidget->setCurrentWidget(enlarged_widget);
    // });

    // connect(enlarged_widget, &EnlargedWidget::reduceButton_pressed,[=](){
    //     ui->visualizationWidget->setCurrentWidget(average_widget);
    // });

    // connect(average_widget, &AverageWidget::enlarge3DModelButton_pressed,[=](){
    //     ui->visualizationWidget->setCurrentWidget(enlargedmodel3D_widget);
    // });

    // connect(enlargedmodel3D_widget, &EnlargedModel3DWidget::reduce3DModelButton_pressed,[=](){
    //     ui->visualizationWidget->setCurrentWidget(average_widget);
    // });

    segmentation_widget = new SegmentationWidget();
    registration_widget = new RegistrationWidget();
    routeplan1_widget = new RoutePlan1Widget();
    routeplan2_widget = new RoutePlan2Widget();
    execute_widget = new ExecuteWidget();

    ui->stackedWidget->addWidget(segmentation_widget);
    ui->stackedWidget->addWidget(registration_widget);
    ui->stackedWidget->addWidget(routeplan1_widget);
    ui->stackedWidget->addWidget(routeplan2_widget);
    ui->stackedWidget->addWidget(execute_widget);

    // 这里涉及到三个级别的界面两道信号的传递
    connect(segmentation_widget,
            &SegmentationWidget::imageInputButton_pressed,
            this,
            &ImageDisplayWidget::onReceivedSignalFromSegmentation);

    connect(routeplan1_widget, &RoutePlan1Widget::back_to_registrationWidget,[=](){
        ui->stackedWidget->setCurrentWidget(registration_widget);
        emit currentWidgetChanged("registration");
    });

    connect(registration_widget, &RegistrationWidget::nextButton_pressed,[=](){
        ui->stackedWidget->setCurrentWidget(routeplan1_widget);
        emit currentWidgetChanged("routeplan");
    });

    connect(registration_widget, &RegistrationWidget::backButton_pressed,[=](){
        ui->stackedWidget->setCurrentWidget(segmentation_widget);
        emit currentWidgetChanged("segmentation");
    });

    connect(routeplan1_widget, &RoutePlan1Widget::nextButton_pressed,[=](){
        ui->stackedWidget->setCurrentWidget(routeplan2_widget);
    });

    connect(routeplan2_widget, &RoutePlan2Widget::back_to_routePlan1Widget,[=](){
        ui->stackedWidget->setCurrentWidget(routeplan1_widget);
    });

    connect(routeplan2_widget, &RoutePlan2Widget::nextButton_pressed,[=](){
        ui->stackedWidget->setCurrentWidget(execute_widget);
        emit currentWidgetChanged("execute");
    });

    connect(execute_widget, &ExecuteWidget::back_to_routePlan2Widget,[=](){
        ui->stackedWidget->setCurrentWidget(routeplan2_widget);
        emit currentWidgetChanged("routeplan");
    });

    connect(execute_widget, &ExecuteWidget::executeButton_pressed,[=](){
        emit executeWidget_nextButton_pressed();
    });

    // 这里涉及到三个级别的界面两道信号的传递
    connect(execute_widget,
            &ExecuteWidget::simulationButton_pressed,
            this,
            &ImageDisplayWidget::onReceivedSignalFromExecute);

    // 如果从 RoutePlan1Widget 添加入路，添加后将 ImageDisplayWidget 的 stackedWidget 更换为 RoutePlan2Widget
    connect(routeplan1_widget, &RoutePlan1Widget::vertebraSelected,
            this, &ImageDisplayWidget::setStackedWidgetAsRoutePlan2);

    image_input_widget = new ImageInputWidget();

    // 连接DICOM数据加载信号
    // connect(image_input_widget, &ImageInputWidget::dicomDataLoaded,
    //         average_widget, &AverageWidget::onDicomDataReceived);
}


void ImageDisplayWidget::initImage(){
    qDebug()<<"test0 ";
    if(GlobalVTKDataManager::instance().isLoaded()){
        qDebug()<<"test1 ";
        imageData = GlobalVTKDataManager::instance().getImage();
        qDebug()<<"test1 ";
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
        connect(ui->transverseSlider,&QSlider::valueChanged,this,&ImageDisplayWidget::on_transverseSlider_valueChanged);
        ui->transverseSlider->setValue(origin[2] + spacing[2] * 0.5 * (extent[4] + extent[5]));

        ui->coronalSlider->setMinimum(origin[1] + spacing[1]*extent[2]);
        ui->coronalSlider->setMaximum(origin[1] + spacing[1]*extent[3]);
        connect(ui->coronalSlider,&QSlider::valueChanged,this,&ImageDisplayWidget::on_coronalSlider_valueChanged);
        ui->coronalSlider->setValue(origin[1] + spacing[1] * 0.5 * (extent[2] + extent[3]));

        ui->sagittalSlider->setMinimum(origin[0] + spacing[0]*extent[0]);
        ui->sagittalSlider->setMaximum(origin[0] + spacing[0]*extent[1]);
        connect(ui->sagittalSlider,&QSlider::valueChanged,this,&ImageDisplayWidget::on_sagittalSlider_valueChanged);
        ui->sagittalSlider->setValue( origin[0] + spacing[0] * 0.5 * (extent[0] + extent[1]));

        show3DModel();
    }
}

void ImageDisplayWidget::show3DModel()
{
    QString str = QDir::cleanPath(QCoreApplication::applicationDirPath() + QDir::separator() + QString("file/segment/spine_007.nii.gz"));
    vtkSmartPointer<vtkNIFTIImageReader> reader = vtkSmartPointer<vtkNIFTIImageReader>::New();
    reader->SetFileName(str.toStdString().c_str());
    reader->Update();
    imageSegment = reader->GetOutput();
    GlobalVTKDataManager::instance().setSegment(imageSegment);

    vtkSmartPointer<vtkRenderWindow> threeDimensiona1Render = ui->model3DPlate->renderWindow();
    visualizeTool.show3D(threeDimensiona1Render,imageSegment,true);
}

ImageDisplayWidget::~ImageDisplayWidget()
{
    delete ui;
}

// 这里涉及到三个级别的界面两道信号的传递
void ImageDisplayWidget::onReceivedSignalFromSegmentation() {//小括号里可以放待处理数据
    // 处理数据
    emit imageInputButton_received();  // 发出新信号并传递处理后的数据
}

// 这里涉及到三个级别的界面两道信号的传递
void ImageDisplayWidget::onReceivedSignalFromExecute() {//小括号里可以放待处理数据
    // 处理数据
    emit simulationButton_received();  // 发出新信号并传递处理后的数据
}

void* ImageDisplayWidget::setStackedWidgetAsRegistration() {
    ui->stackedWidget->setCurrentWidget(registration_widget);
    emit currentWidgetChanged("registration"); // 发送信号
    return 0;
}

void* ImageDisplayWidget::setStackedWidgetAsSegmentation() {
    ui->stackedWidget->setCurrentWidget(segmentation_widget);
    emit currentWidgetChanged("segmentation"); // 发送信号
    return 0;
}

// void* ImageDisplayWidget::setVisualizationWidgetAsAverage() const {
//     ui->visualizationWidget->setCurrentWidget(average_widget);
//     return 0;
// }

void ImageDisplayWidget::setStackedWidgetAsRoutePlan2(const QString &vertebra)
{
    // 切换到RoutePlan2Widget
    if (ui->stackedWidget && routeplan2_widget) {
        ui->stackedWidget->setCurrentWidget(routeplan2_widget);

        // 检查是否为有效的椎骨选择（不是"请选择椎骨"这样的提示信息）
        if (vertebra != "请选择椎骨" && !vertebra.isEmpty()) {

        }

        // 设置椎骨标签
        routeplan2_widget->setVertebraLabel(vertebra);
    }
}

void ImageDisplayWidget::on_coronalSlider_valueChanged(int value)
{
    if(imageData!=nullptr){
        vtkSmartPointer<vtkRenderWindow> coronalRenderWindow = ui->coronalPlate->renderWindow();
        visualizeTool.showReslice(imageData,coronalRenderWindow,VisualizeTool::Coronal,value,false);
        visualizeTool.zoom(coronalRenderWindow,2);
    }
}


void ImageDisplayWidget::on_sagittalSlider_valueChanged(int value)
{

    if(imageData!=nullptr){
        vtkSmartPointer<vtkRenderWindow> sagittalRenderWindow = ui->sagittalPlate->renderWindow();
        visualizeTool.showReslice(imageData,sagittalRenderWindow,VisualizeTool::Sagittal,value,false);
        visualizeTool.zoom(sagittalRenderWindow,2);
    }
}


void ImageDisplayWidget::on_transverseSlider_valueChanged(int value)
{

    if(imageData!=nullptr){
        vtkSmartPointer<vtkRenderWindow> transverseRenderWindow = ui->transversePlate->renderWindow();
        visualizeTool.showReslice(imageData,transverseRenderWindow,VisualizeTool::Axial,value,false);
        visualizeTool.zoom(transverseRenderWindow,2);
    }
}

