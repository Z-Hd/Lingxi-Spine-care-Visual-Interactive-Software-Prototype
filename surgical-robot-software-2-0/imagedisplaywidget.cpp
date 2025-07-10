#include "imagedisplaywidget.h"
#include "ui_imagedisplaywidget.h"
#include "GlobalVTKDataManager.h"
#include <vtkNIFTIImageReader.h>

#include <QTimer>
#include <QGuiApplication>
#include <QScreen>
#include <QMouseEvent>
#include <QDebug>
#include <QtMath>

ImageDisplayWidget::ImageDisplayWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ImageDisplayWidget)
{
    ui->setupUi(this);

    // 启用鼠标跟踪，以便接收鼠标悬停事件
    setMouseTracking(true);
    setAttribute(Qt::WA_Hover);

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



    // 设置方向标签位置
    QTimer::singleShot(500, this, [this]() {
        // 获取transversePlate的尺寸
        int width = ui->transversePlate->width();
        int height = ui->transversePlate->height();
        qDebug()<<"width: "<<width;
        qDebug()<<"height: "<<height;

        // // 设置P标签位置（上方居中）
        // ui->labelP->setGeometry(width/2 - 10, 10, 20, 20);
        // // 设置A标签位置（下方居中）
        // ui->labelA->setGeometry(width/2 - 10, height - 30, 20, 20);
        // // 设置L标签位置（左侧居中）
        // ui->labelL->setGeometry(10, height/2 - 10, 20, 20);
        // // 设置R标签位置（右侧居中）
        // ui->labelR->setGeometry(width - 30, height/2 - 10, 20, 20);
    });

    ui->enlargeTransverseButton->hide();
    ui->rotateButton->hide();
    ui->MPRButton->hide();
    ui->clockWiseButton->hide();
    ui->angleMeasureButton->hide();
    ui->antiClockWiseButton->hide();
    ui->distanceMeasureButton->hide();
    ui->upButton->hide();
    ui->eraseButton->hide();
    ui->downButton->hide();
    ui->brightButton->hide();
    ui->leftButton->hide();
    ui->targetButton->hide();
    ui->rightButton->hide();

    ui->enlargeSagittalButton->hide();
    ui->rotateButton_2->hide();
    ui->MPRButton_2->hide();
    ui->clockWiseButton_2->hide();
    ui->angleMeasureButton_2->hide();
    ui->antiClockWiseButton_2->hide();
    ui->distanceMeasureButton_2->hide();
    ui->upButton_2->hide();
    ui->eraseButton_2->hide();
    ui->downButton_2->hide();
    ui->brightButton_2->hide();
    ui->leftButton_2->hide();
    ui->targetButton_2->hide();
    ui->rightButton_2->hide();

    ui->enlargeCoronalButton->hide();
    ui->rotateButton_3->hide();
    ui->MPRButton_3->hide();
    ui->clockWiseButton_3->hide();
    ui->angleMeasureButton_3->hide();
    ui->antiClockWiseButton_3->hide();
    ui->distanceMeasureButton_3->hide();
    ui->upButton_3->hide();
    ui->eraseButton_3->hide();
    ui->downButton_3->hide();
    ui->brightButton_3->hide();
    ui->leftButton_3->hide();
    ui->targetButton_3->hide();
    ui->rightButton_3->hide();

    ui->enlarge3DModelButton->hide();
    ui->eyeButton->hide();
    ui->cubeButton->hide();
    ui->CButton->hide();
    ui->TButton->hide();
    ui->SButton->hide();
    ui->brightButton_4->hide();



    // 初始状态：隐藏几条交互参考线
    ui->coronalLine_1->hide();
    ui->coronalLine_2->hide();
    ui->sagittalLine_1->hide();
    ui->sagittalLine_2->hide();
    ui->transverseLine_1->hide();
    ui->transverseLine_2->hide();



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

// void ImageDisplayWidget::show3DModel()
// {
//     QString str = QDir::cleanPath(QCoreApplication::applicationDirPath() + QDir::separator() + QString("file/segment/spine_007.nii.gz"));
//     vtkSmartPointer<vtkNIFTIImageReader> reader = vtkSmartPointer<vtkNIFTIImageReader>::New();
//     reader->SetFileName(str.toStdString().c_str());
//     reader->Update();
//     imageSegment = reader->GetOutput();
//     GlobalVTKDataManager::instance().setSegment(imageSegment);

//     vtkSmartPointer<vtkRenderWindow> threeDimensiona1Render = ui->model3DPlate->renderWindow();
//     visualizeTool.show3D(threeDimensiona1Render,imageSegment,true);
// }

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
    }
}


void ImageDisplayWidget::on_sagittalSlider_valueChanged(int value)
{
    if(imageData!=nullptr){
        vtkSmartPointer<vtkRenderWindow> sagittalRenderWindow = ui->sagittalPlate->renderWindow();
        visualizeTool.showReslice(imageData,sagittalRenderWindow,VisualizeTool::Sagittal,value,false);
    }
}


void ImageDisplayWidget::on_transverseSlider_valueChanged(int value)
{
    if(imageData!=nullptr){
        vtkSmartPointer<vtkRenderWindow> transverseRenderWindow = ui->transversePlate->renderWindow();
        visualizeTool.showReslice(imageData,transverseRenderWindow,VisualizeTool::Axial,value,false);
    }
}

void ImageDisplayWidget::showEvent(QShowEvent *event) {
    QWidget::showEvent(event);

    // 窗口显示后获取尺寸
    QTimer::singleShot(0, this, [this]() {
        int transverseWidth = ui->transversePlate->width();
        int transverseHeight = ui->transversePlate->height();
        qDebug()<<"After show width: "<<transverseWidth;
        qDebug()<<"After show height: "<<transverseHeight;

        // 设置transversePlate标签位置
        ui->labelP->setGeometry(transverseWidth/2 - 10, 10, 20, 20);
        ui->labelA->setGeometry(transverseWidth/2 - 10, transverseHeight - 30, 20, 20);
        ui->labelL->setGeometry(10, transverseHeight/2 - 10, 20, 20);
        ui->labelR->setGeometry(transverseWidth - 30, transverseHeight/2 - 10, 20, 20);

        // 设置线条位置
        ui->coronalLine_1->setGeometry(0, transverseHeight / 2, transverseWidth, 2);
        ui->sagittalLine_1->setGeometry(transverseWidth / 2, 0, 2, transverseHeight);

        // 设置sagittalPlate标签位置
        int sagittalWidth = ui->sagittalPlate->width();
        int sagittalHeight = ui->sagittalPlate->height();

        // 设置S标签位置（上边左右居中）
        ui->labelS->setGeometry(sagittalWidth/2 - 10, 10, 20, 20);
        // 设置I标签位置（下边左右居中）
        ui->labelI->setGeometry(sagittalWidth/2 - 10, sagittalHeight - 30, 20, 20);
        // 设置P_2标签位置（左侧上下居中）
        ui->labelP_2->setGeometry(10, sagittalHeight/2 - 10, 20, 20);
        // 设置A_2标签位置（右侧上下居中）
        ui->labelA_2->setGeometry(sagittalWidth - 30, sagittalHeight/2 - 10, 20, 20);

        // 设置线条位置
        ui->coronalLine_2->setGeometry(sagittalWidth / 2, 0, 2, sagittalHeight);
        ui->transverseLine_1->setGeometry(0, sagittalHeight / 2, sagittalWidth, 2);

        // 设置coronalPlate标签位置
        int coronalWidth = ui->coronalPlate->width();
        int coronalHeight = ui->coronalPlate->height();

        // 设置S_2标签位置（上边左右居中）
        ui->labelS_2->setGeometry(coronalWidth/2 - 10, 10, 20, 20);
        // 设置I_2标签位置（下边左右居中）
        ui->labelI_2->setGeometry(coronalWidth/2 - 10, coronalHeight - 30, 20, 20);
        // 设置L_2标签位置（左侧上下居中）
        ui->labelL_2->setGeometry(10, coronalHeight/2 - 10, 20, 20);
        // 设置R_2标签位置（右侧上下居中）
        ui->labelR_2->setGeometry(coronalWidth - 30, coronalHeight/2 - 10, 20, 20);

        // 设置线条位置
        ui->sagittalLine_2->setGeometry(coronalWidth / 2, 0, 2, coronalHeight);
        ui->transverseLine_2->setGeometry(0, coronalHeight / 2, coronalWidth, 2);
    });
}

void ImageDisplayWidget::resizeEvent(QResizeEvent *event) {
    QWidget::resizeEvent(event);

    // 每次大小变化时更新标签位置
    int transverseWidth = ui->transversePlate->width();
    int transverseHeight = ui->transversePlate->height();

    ui->labelP->setGeometry(transverseWidth/2 - 10, 10, 20, 20);
    ui->labelA->setGeometry(transverseWidth/2 - 10, transverseHeight - 30, 20, 20);
    ui->labelL->setGeometry(10, transverseHeight/2 - 10, 20, 20);
    ui->labelR->setGeometry(transverseWidth - 30, transverseHeight/2 - 10, 20, 20);

    // 更新蓝线位置
    ui->coronalLine_1->setGeometry(0, ui->coronalLine_1->y(), transverseWidth, 2);
    ui->sagittalLine_1->setGeometry(ui->sagittalLine_1->x(), 0, 2, transverseHeight);

    // 更新sagittalPlate标签位置
    int sagittalWidth = ui->sagittalPlate->width();
    int sagittalHeight = ui->sagittalPlate->height();

    // 设置S标签位置（上边左右居中）
    ui->labelS->setGeometry(sagittalWidth/2 - 10, 10, 20, 20);
    // 设置I标签位置（下边左右居中）
    ui->labelI->setGeometry(sagittalWidth/2 - 10, sagittalHeight - 30, 20, 20);
    // 设置P_2标签位置（左侧上下居中）
    ui->labelP_2->setGeometry(10, sagittalHeight/2 - 10, 20, 20);
    // 设置A_2标签位置（右侧上下居中）
    ui->labelA_2->setGeometry(sagittalWidth - 30, sagittalHeight/2 - 10, 20, 20);

    // 更新蓝线位置
    ui->coronalLine_2->setGeometry(ui->coronalLine_2->x(), 0, 2, sagittalHeight);
    ui->transverseLine_1->setGeometry(0, ui->transverseLine_1->y(), sagittalWidth, 2);

    // 更新coronalPlate标签位置
    int coronalWidth = ui->coronalPlate->width();
    int coronalHeight = ui->coronalPlate->height();

    // 设置S_2标签位置（上边左右居中）
    ui->labelS_2->setGeometry(coronalWidth/2 - 10, 10, 20, 20);
    // 设置I_2标签位置（下边左右居中）
    ui->labelI_2->setGeometry(coronalWidth/2 - 10, coronalHeight - 30, 20, 20);
    // 设置L_2标签位置（左侧上下居中）
    ui->labelL_2->setGeometry(10, coronalHeight/2 - 10, 20, 20);
    // 设置R_2标签位置（右侧上下居中）
    ui->labelR_2->setGeometry(coronalWidth - 30, coronalHeight/2 - 10, 20, 20);

    // 更新蓝线位置
    ui->sagittalLine_2->setGeometry(ui->sagittalLine_2->x(), 0, 2, coronalHeight);
    ui->transverseLine_2->setGeometry(0, ui->transverseLine_2->y(), coronalWidth, 2);
}



void ImageDisplayWidget::on_unfoldButton_clicked()
{
    // 切换unfoldButton状态
    unfoldButtonState = (unfoldButtonState == 0) ? 1 : 0;

    // 根据状态更新按钮文本
    if (unfoldButtonState == 0) {
        ui->unfoldButton->setText("展开");

        ui->enlargeTransverseButton->hide();
        ui->rotateButton->hide();
        ui->MPRButton->hide();
        ui->clockWiseButton->hide();
        ui->angleMeasureButton->hide();
        ui->antiClockWiseButton->hide();
        ui->distanceMeasureButton->hide();
        ui->upButton->hide();
        ui->eraseButton->hide();
        ui->downButton->hide();
        ui->brightButton->hide();
        ui->leftButton->hide();
        ui->targetButton->hide();
        ui->rightButton->hide();
    } else {
        ui->unfoldButton->setText("收起");

        ui->enlargeTransverseButton->show();
        ui->rotateButton->show();
        ui->MPRButton->show();
        ui->clockWiseButton->show();
        ui->angleMeasureButton->show();
        ui->antiClockWiseButton->show();
        ui->distanceMeasureButton->show();
        ui->upButton->show();
        ui->eraseButton->show();
        ui->downButton->show();
        ui->brightButton->show();
        ui->leftButton->show();
        ui->targetButton->show();
        ui->rightButton->show();
    }

    // 输出当前状态到控制台（调试用）
    qDebug() << "unfoldButton state: " << unfoldButtonState;
}

void ImageDisplayWidget::on_unfoldButton_2_clicked()
{
    // 切换unfoldButton_2状态
    unfoldButton2State = (unfoldButton2State == 0) ? 1 : 0;

    // 根据状态更新按钮文本
    if (unfoldButton2State == 0) {
        ui->unfoldButton_2->setText("展开");

        ui->enlargeSagittalButton->hide();
        ui->rotateButton_2->hide();
        ui->MPRButton_2->hide();
        ui->clockWiseButton_2->hide();
        ui->angleMeasureButton_2->hide();
        ui->antiClockWiseButton_2->hide();
        ui->distanceMeasureButton_2->hide();
        ui->upButton_2->hide();
        ui->eraseButton_2->hide();
        ui->downButton_2->hide();
        ui->brightButton_2->hide();
        ui->leftButton_2->hide();
        ui->targetButton_2->hide();
        ui->rightButton_2->hide();
    } else {
        ui->unfoldButton_2->setText("收起");

        ui->enlargeSagittalButton->show();
        ui->rotateButton_2->show();
        ui->MPRButton_2->show();
        ui->clockWiseButton_2->show();
        ui->angleMeasureButton_2->show();
        ui->antiClockWiseButton_2->show();
        ui->distanceMeasureButton_2->show();
        ui->upButton_2->show();
        ui->eraseButton_2->show();
        ui->downButton_2->show();
        ui->brightButton_2->show();
        ui->leftButton_2->show();
        ui->targetButton_2->show();
        ui->rightButton_2->show();
    }

    // 输出当前状态到控制台（调试用）
    qDebug() << "unfoldButton_2 state: " << unfoldButton2State;
}

void ImageDisplayWidget::on_unfoldButton_3_clicked()
{
    // 切换unfoldButton_3状态
    unfoldButton3State = (unfoldButton3State == 0) ? 1 : 0;

    // 根据状态更新按钮文本
    if (unfoldButton3State == 0) {
        ui->unfoldButton_3->setText("展开");

        ui->enlargeCoronalButton->hide();
        ui->rotateButton_3->hide();
        ui->MPRButton_3->hide();
        ui->clockWiseButton_3->hide();
        ui->angleMeasureButton_3->hide();
        ui->antiClockWiseButton_3->hide();
        ui->distanceMeasureButton_3->hide();
        ui->upButton_3->hide();
        ui->eraseButton_3->hide();
        ui->downButton_3->hide();
        ui->brightButton_3->hide();
        ui->leftButton_3->hide();
        ui->targetButton_3->hide();
        ui->rightButton_3->hide();
    } else {
        ui->unfoldButton_3->setText("收起");

        ui->enlargeCoronalButton->show();
        ui->rotateButton_3->show();
        ui->MPRButton_3->show();
        ui->clockWiseButton_3->show();
        ui->angleMeasureButton_3->show();
        ui->antiClockWiseButton_3->show();
        ui->distanceMeasureButton_3->show();
        ui->upButton_3->show();
        ui->eraseButton_3->show();
        ui->downButton_3->show();
        ui->brightButton_3->show();
        ui->leftButton_3->show();
        ui->targetButton_3->show();
        ui->rightButton_3->show();
    }

    // 输出当前状态到控制台（调试用）
    qDebug() << "unfoldButton_3 state: " << unfoldButton3State;
}

void ImageDisplayWidget::on_unfoldButton_4_clicked()
{
    // 切换unfoldButton_4状态
    unfoldButton4State = (unfoldButton4State == 0) ? 1 : 0;

    // 根据状态更新按钮文本
    if (unfoldButton4State == 0) {
        ui->unfoldButton_4->setText("展开");

        ui->enlarge3DModelButton->hide();
        ui->eyeButton->hide();
        ui->cubeButton->hide();
        ui->CButton->hide();
        ui->TButton->hide();
        ui->SButton->hide();
        ui->brightButton_4->hide();
    } else {
        ui->unfoldButton_4->setText("收起");

        ui->enlarge3DModelButton->show();
        ui->eyeButton->show();
        ui->cubeButton->show();
        ui->CButton->show();
        ui->TButton->show();
        ui->SButton->show();
        ui->brightButton_4->show();
    }

    // 输出当前状态到控制台（调试用）
    qDebug() << "unfoldButton_4 state: " << unfoldButton4State;
}



void ImageDisplayWidget::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        // 检查是否在coronalLine_1的区域内（使用全局坐标）
        QRect globalCoronalLine1Rect(ui->coronalLine_1->mapToGlobal(QPoint(0, 0)),
                              ui->coronalLine_1->size());
        if (globalCoronalLine1Rect.contains(event->globalPos())) {
            coronalLine1Moving = true;
            lastMousePos = event->pos();
            event->accept();
            return;
        }

        // 检查是否在coronalLine_2的区域内（使用全局坐标）
        QRect globalCoronalLine2Rect(ui->coronalLine_2->mapToGlobal(QPoint(0, 0)),
                              ui->coronalLine_2->size());
        if (globalCoronalLine2Rect.contains(event->globalPos())) {
            coronalLine2Moving = true;
            lastMousePos = event->pos();
            event->accept();
            return;
        }

        // 检查是否在sagittalLine_1的区域内（使用全局坐标）
        QRect globalSagittalLine1Rect(ui->sagittalLine_1->mapToGlobal(QPoint(0, 0)),
                              ui->sagittalLine_1->size());
        if (globalSagittalLine1Rect.contains(event->globalPos())) {
            sagittalLine1Moving = true;
            lastMousePos = event->pos();
            event->accept();
            return;
        }

        // 检查是否在sagittalLine_2的区域内（使用全局坐标）
        QRect globalSagittalLine2Rect(ui->sagittalLine_2->mapToGlobal(QPoint(0, 0)),
                              ui->sagittalLine_2->size());
        if (globalSagittalLine2Rect.contains(event->globalPos())) {
            sagittalLine2Moving = true;
            lastMousePos = event->pos();
            event->accept();
            return;
        }

        // 检查是否在transverseLine_1的区域内（使用全局坐标）
        QRect globalTransverseLine1Rect(ui->transverseLine_1->mapToGlobal(QPoint(0, 0)),
                                      ui->transverseLine_1->size());
        if (globalTransverseLine1Rect.contains(event->globalPos())) {
            transverseLine1Moving = true;
            lastMousePos = event->pos();
            event->accept();
            return;
        }

        // 检查是否在transverseLine_2的区域内（使用全局坐标）
        QRect globalTransverseLine2Rect(ui->transverseLine_2->mapToGlobal(QPoint(0, 0)),
                                      ui->transverseLine_2->size());
        if (globalTransverseLine2Rect.contains(event->globalPos())) {
            transverseLine2Moving = true;
            lastMousePos = event->pos();
            event->accept();
            return;
        }
    }

    // 如果不在线上，则调用父类的事件处理
    QWidget::mousePressEvent(event);
}

void ImageDisplayWidget::mouseMoveEvent(QMouseEvent *event)
{
    if (coronalLine1Moving) {
        int dy = event->pos().y() - lastMousePos.y();
        int newY = ui->coronalLine_1->y() + dy;

        // 限制在transversePlate内
        if (newY >= 0 && newY <= ui->transversePlate->height() - ui->coronalLine_1->height()) {
            ui->coronalLine_1->move(ui->coronalLine_1->x(), newY);

            // 同步移动 coronalLine_2
            double ratio = static_cast<double>(newY) / ui->transversePlate->height();
            int newSagittalX = static_cast<int>(ratio * ui->sagittalPlate->width());
            ui->coronalLine_2->move(newSagittalX, ui->coronalLine_2->y());

            // 根据coronalLine_1的位置计算coronalSlider的值
            if (imageData != nullptr) {
                int extent[6];
                double spacing[3];
                double origin[3];
                imageData->GetExtent(extent);
                imageData->GetSpacing(spacing);
                imageData->GetOrigin(origin);

                // 计算coronalSlider的值范围
                double minValue = origin[1] + spacing[1] * extent[2];
                double maxValue = origin[1] + spacing[1] * extent[3];

                // 根据coronalLine_1的位置比例计算coronalSlider的值
                double sliderValue = minValue + ratio * (maxValue - minValue);

                // 设置coronalSlider的值，这会触发on_coronalSlider_valueChanged
                ui->coronalSlider->setValue(static_cast<int>(sliderValue));
            }

            lastMousePos = event->pos();
            event->accept();
        }
        return; // 阻止事件传递给VTK交互器
    } else if (coronalLine2Moving) {
        int dx = event->pos().x() - lastMousePos.x();
        int newX = ui->coronalLine_2->x() + dx;

        // 限制在sagittalPlate内
        if (newX >= 0 && newX <= ui->sagittalPlate->width() - ui->coronalLine_2->width()) {
            ui->coronalLine_2->move(newX, ui->coronalLine_2->y());

            // 同步移动 coronalLine_1
            double ratio = static_cast<double>(newX) / ui->sagittalPlate->width();
            int newTransverseY = static_cast<int>(ratio * ui->transversePlate->height());
            ui->coronalLine_1->move(ui->coronalLine_1->x(), newTransverseY);

            // 根据coronalLine_2的位置计算sagittalSlider的值
            if (imageData != nullptr) {
                int extent[6];
                double spacing[3];
                double origin[3];
                imageData->GetExtent(extent);
                imageData->GetSpacing(spacing);
                imageData->GetOrigin(origin);

                // 计算sagittalSlider的值范围
                double minValue = origin[0] + spacing[0] * extent[0];
                double maxValue = origin[0] + spacing[0] * extent[1];

                // 根据coronalLine_2的位置比例计算sagittalSlider的值
                double sliderValue = minValue + ratio * (maxValue - minValue);

                // 设置sagittalSlider的值，这会触发on_sagittalSlider_valueChanged
                ui->coronalSlider->setValue(static_cast<int>(sliderValue));
            }

            lastMousePos = event->pos();
            event->accept();
        }
        return; // 阻止事件传递给VTK交互器
    } else if (sagittalLine1Moving) {
        int dx = event->pos().x() - lastMousePos.x();
        int newX = ui->sagittalLine_1->x() + dx;

        // 限制在transversePlate内
        if (newX >= 0 && newX <= ui->transversePlate->width() - ui->sagittalLine_1->width()) {
            ui->sagittalLine_1->move(newX, ui->sagittalLine_1->y());

            // 同步移动 sagittalLine_2
            double ratio = static_cast<double>(newX) / ui->transversePlate->width();
            int newCoronalX = static_cast<int>(ratio * ui->coronalPlate->width());
            ui->sagittalLine_2->move(newCoronalX, ui->sagittalLine_2->y());

            // 根据sagittalLine_1的位置计算sagittalSlider的值
            if (imageData != nullptr) {
                int extent[6];
                double spacing[3];
                double origin[3];
                imageData->GetExtent(extent);
                imageData->GetSpacing(spacing);
                imageData->GetOrigin(origin);

                // 计算sagittalSlider的值范围
                double minValue = origin[0] + spacing[0] * extent[0];
                double maxValue = origin[0] + spacing[0] * extent[1];

                // 根据sagittalLine_1的位置比例计算sagittalSlider的值
                double sliderValue = minValue + ratio * (maxValue - minValue);

                // 设置sagittalSlider的值，这会触发on_sagittalSlider_valueChanged
                ui->sagittalSlider->setValue(static_cast<int>(sliderValue));
            }

            lastMousePos = event->pos();
            event->accept();
        }
        return; // 阻止事件传递给VTK交互器
    } else if (sagittalLine2Moving) {
        int dx = event->pos().x() - lastMousePos.x();
        int newX = ui->sagittalLine_2->x() + dx;

        // 限制在coronalPlate内
        if (newX >= 0 && newX <= ui->coronalPlate->width() - ui->sagittalLine_2->width()) {
            ui->sagittalLine_2->move(newX, ui->sagittalLine_2->y());

            // 同步移动 sagittalLine_1
            double ratio = static_cast<double>(newX) / ui->coronalPlate->width();
            int newTransverseX = static_cast<int>(ratio * ui->transversePlate->width());
            ui->sagittalLine_1->move(newTransverseX, ui->sagittalLine_1->y());

            // 根据sagittalLine_2的位置计算sagittalSlider的值
            if (imageData != nullptr) {
                int extent[6];
                double spacing[3];
                double origin[3];
                imageData->GetExtent(extent);
                imageData->GetSpacing(spacing);
                imageData->GetOrigin(origin);

                // 计算sagittalSlider的值范围
                double minValue = origin[0] + spacing[0] * extent[0];
                double maxValue = origin[0] + spacing[0] * extent[1];

                // 根据sagittalLine_2的位置比例计算sagittalSlider的值
                double sliderValue = minValue + ratio * (maxValue - minValue);

                // 设置sagittalSlider的值，这会触发on_sagittalSlider_valueChanged
                ui->sagittalSlider->setValue(static_cast<int>(sliderValue));
            }

            lastMousePos = event->pos();
            event->accept();
        }
        return; // 阻止事件传递给VTK交互器
    } else if (transverseLine1Moving) {
        int dy = event->pos().y() - lastMousePos.y();
        int newY = ui->transverseLine_1->y() + dy;

        // 限制在sagittalPlate内
        if (newY >= 0 && newY <= ui->sagittalPlate->height() - ui->transverseLine_1->height()) {
            ui->transverseLine_1->move(ui->transverseLine_1->x(), newY);

            // 同步移动 transverseLine_2
            double ratio = static_cast<double>(newY) / ui->sagittalPlate->height();
            int newCoronalY = static_cast<int>(ratio * ui->coronalPlate->height());
            ui->transverseLine_2->move(ui->transverseLine_2->x(), newCoronalY);

            // 根据transverseLine_1的位置计算transverseSlider的值
            if (imageData != nullptr) {
                int extent[6];
                double spacing[3];
                double origin[3];
                imageData->GetExtent(extent);
                imageData->GetSpacing(spacing);
                imageData->GetOrigin(origin);

                // 计算transverseSlider的值范围
                double minValue = origin[1] + spacing[1] * extent[2];
                double maxValue = origin[1] + spacing[1] * extent[3];

                // 根据transverseLine_1的位置比例计算transverseSlider的值
                double sliderValue = minValue + ratio * (maxValue - minValue);

                // 设置transverseSlider的值，这会触发on_transverseSlider_valueChanged
                ui->transverseSlider->setValue(static_cast<int>(sliderValue));
            }

            lastMousePos = event->pos();
            event->accept();
        }
        return; // 阻止事件传递给VTK交互器
    } else if (transverseLine2Moving) {
        int dy = event->pos().y() - lastMousePos.y();
        int newY = ui->transverseLine_2->y() + dy;

        // 限制在coronalPlate内
        if (newY >= 0 && newY <= ui->coronalPlate->height() - ui->transverseLine_2->height()) {
            ui->transverseLine_2->move(ui->transverseLine_2->x(), newY);

            // 同步移动 transverseLine_1
            double ratio = static_cast<double>(newY) / ui->coronalPlate->height();
            int newSagittalY = static_cast<int>(ratio * ui->sagittalPlate->height());
            ui->transverseLine_1->move(ui->transverseLine_1->x(), newSagittalY);

            // 根据transverseLine_2的位置计算transverseSlider的值
            if (imageData != nullptr) {
                int extent[6];
                double spacing[3];
                double origin[3];
                imageData->GetExtent(extent);
                imageData->GetSpacing(spacing);
                imageData->GetOrigin(origin);

                // 计算transverseSlider的值范围
                double minValue = origin[1] + spacing[1] * extent[2];
                double maxValue = origin[1] + spacing[1] * extent[3];

                // 根据transverseLine_2的位置比例计算transverseSlider的值
                double sliderValue = minValue + ratio * (maxValue - minValue);

                // 设置transverseSlider的值，这会触发on_transverseSlider_valueChanged
                ui->transverseSlider->setValue(static_cast<int>(sliderValue));
            }

            lastMousePos = event->pos();
            event->accept();
        }
        return; // 阻止事件传递给VTK交互器
    }

    // 如果不在拖动线，则调用父类的事件处理
    QWidget::mouseMoveEvent(event);
}

void ImageDisplayWidget::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        if (coronalLine1Moving || coronalLine2Moving || sagittalLine1Moving || sagittalLine2Moving || transverseLine1Moving || transverseLine2Moving) {
            coronalLine1Moving = false;
            coronalLine2Moving = false;
            sagittalLine1Moving = false;
            sagittalLine2Moving = false;
            transverseLine1Moving = false;
            transverseLine2Moving = false;
            event->accept();
            return; // 阻止事件传递给VTK交互器
        }
    }

    // 如果不是释放拖动线，则调用父类的事件处理
    QWidget::mouseReleaseEvent(event);
}

// 添加event方法来处理鼠标悬停事件
bool ImageDisplayWidget::event(QEvent *event)
{
    if (event->type() == QEvent::HoverMove) {
        QHoverEvent *hoverEvent = static_cast<QHoverEvent*>(event);
        QPointF globalPosF = hoverEvent->globalPosition();
        QPoint globalPos = globalPosF.toPoint();

        QRect globalcoronalLine1Rect(ui->coronalLine_1->mapToGlobal(QPoint(0, 0)), ui->coronalLine_1->size());
        QRect globalcoronalLine2Rect(ui->coronalLine_2->mapToGlobal(QPoint(0, 0)), ui->coronalLine_2->size());
        QRect globalsagittalLine1Rect(ui->sagittalLine_1->mapToGlobal(QPoint(0, 0)), ui->sagittalLine_1->size());
        QRect globalsagittalLine2Rect(ui->sagittalLine_2->mapToGlobal(QPoint(0, 0)), ui->sagittalLine_2->size());
        QRect globaltransverseLine1Rect(ui->transverseLine_1->mapToGlobal(QPoint(0, 0)), ui->transverseLine_1->size());
        QRect globaltransverseLine2Rect(ui->transverseLine_2->mapToGlobal(QPoint(0, 0)), ui->transverseLine_2->size());

        // 检查鼠标是否在coronalLine_1上，并且在两端15%的区域内
        if (isMouseOverCoronalLine1Ends(globalPos)) {
            // 设置鼠标为手指形状t
            setCursor(Qt::PointingHandCursor);
        }
        // 检查鼠标是否在coronalLine_2上，并且在两端15%的区域内
        else if (isMouseOverCoronalLine2Ends(globalPos)) {
            // 设置鼠标为手指形状
            setCursor(Qt::PointingHandCursor);
        }
        else if (globalcoronalLine1Rect.contains(globalPos)) {
            // 如果在coronalLine_1上但不在两端，保持原来的上下箭头形状
            setCursor(Qt::SizeVerCursor);
        } else if (globalcoronalLine2Rect.contains(globalPos)) {
            // 如果在coronalLine_2上但不在两端，保持原来的左右箭头形状
            setCursor(Qt::SizeHorCursor);
        } else if (isMouseOverSagittalLine1Ends(globalPos)) {
            // 设置鼠标为手指形状
            setCursor(Qt::PointingHandCursor);
        } else if (isMouseOverSagittalLine2Ends(globalPos)) {
            // 设置鼠标为手指形状
            setCursor(Qt::PointingHandCursor);
        } else if (globalsagittalLine1Rect.contains(globalPos)) {
            // 如果在sagittalLine_1上但不在两端，保持原来的左右箭头形状
            setCursor(Qt::SizeHorCursor);
        } else if (globalsagittalLine2Rect.contains(globalPos)) {
            // 如果在sagittalLine_2上但不在两端，保持原来的左右箭头形状
            setCursor(Qt::SizeHorCursor);
        } else if (isMouseOverTransverseLine1Ends(globalPos)) {
            // 设置鼠标为手指形状
            setCursor(Qt::PointingHandCursor);
        } else if (isMouseOverTransverseLine2Ends(globalPos)) {
            // 设置鼠标为手指形状
            setCursor(Qt::PointingHandCursor);
        } else if (globaltransverseLine1Rect.contains(globalPos)) {
            // 如果在transverseLine_1上但不在两端，保持原来的左右箭头形状
            setCursor(Qt::SizeVerCursor);
        } else if (globaltransverseLine2Rect.contains(globalPos)) {
            // 如果在transverseLine_2上但不在两端，保持原来的左右箭头形状
            setCursor(Qt::SizeVerCursor);
        } else {
            // 恢复默认鼠标形状
            unsetCursor();
        }
    }

    // 调用基类的event处理
    return QWidget::event(event);
}

// 检查鼠标是否在coronalLine_1两端15%的区域内
bool ImageDisplayWidget::isMouseOverCoronalLine1Ends(const QPoint &globalPos) const
{
    QRect globalCoronalLine1Rect(ui->coronalLine_1->mapToGlobal(QPoint(0, 0)), ui->coronalLine_1->size());
    //qDebug() << "coronalLine_1 global geometry:" << globalCoronalLine1Rect;

    // 如果鼠标不在coronalLine_1上，直接返回false
    if (!globalCoronalLine1Rect.contains(globalPos)) {
        return false;
    }

    // 计算coronalLine_1两端15%的区域
    int lineWidth = globalCoronalLine1Rect.width();
    int endRegionWidth = lineWidth * 0.15; // 15%的长度

    // 检查鼠标是否在左端15%区域内
    bool inLeftEnd = (globalPos.x() >= globalCoronalLine1Rect.left() &&
                      globalPos.x() <= globalCoronalLine1Rect.left() + endRegionWidth);

    // 检查鼠标是否在右端15%区域内
    bool inRightEnd = (globalPos.x() >= globalCoronalLine1Rect.right() - endRegionWidth &&
                       globalPos.x() <= globalCoronalLine1Rect.right());

    return inLeftEnd || inRightEnd;
}

// 检查鼠标是否在coronalLine_2上下两端15%的区域内
bool ImageDisplayWidget::isMouseOverCoronalLine2Ends(const QPoint &globalPos) const
{
    QRect globalCoronalLine2Rect(ui->coronalLine_2->mapToGlobal(QPoint(0, 0)), ui->coronalLine_2->size());
    //qDebug() << "coronalLine_2 global geometry:" << globalCoronalLine2Rect;

    // 如果鼠标不在coronalLine_2上，直接返回false
    if (!globalCoronalLine2Rect.contains(globalPos)) {
        return false;
    }

    // 计算coronalLine_2两端15%的区域
    int lineHeight = globalCoronalLine2Rect.height();
    int endRegionHeight = lineHeight * 0.15; // 15%的长度

    // 检查鼠标是否在上端15%区域内
    bool inTopEnd = (globalPos.y() >= globalCoronalLine2Rect.top() &&
                     globalPos.y() <= globalCoronalLine2Rect.top() + endRegionHeight);

    // 检查鼠标是否在下端15%区域内
    bool inBottomEnd = (globalPos.y() >= globalCoronalLine2Rect.bottom() - endRegionHeight &&
                        globalPos.y() <= globalCoronalLine2Rect.bottom());

    return inTopEnd || inBottomEnd;
}

bool ImageDisplayWidget::isMouseOverSagittalLine1Ends(const QPoint &globalPos) const
{
    QRect globalSagittalLine1Rect(ui->sagittalLine_1->mapToGlobal(QPoint(0, 0)), ui->sagittalLine_1->size());
    //qDebug() << "sagittalLine_1 global geometry:" << globalSagittalLine1Rect;

    // 如果鼠标不在sagittalLine_1上，直接返回false
    if (!globalSagittalLine1Rect.contains(globalPos)) {
        return false;
    }

    // 计算sagittalLine_1两端15%的区域
    int lineHeight = globalSagittalLine1Rect.height();
    int endRegionHeight = lineHeight * 0.15; // 15%的长度

    // 检查鼠标是否在上端15%区域内
    bool inTopEnd = (globalPos.y() >= globalSagittalLine1Rect.top() &&
                     globalPos.y() <= globalSagittalLine1Rect.top() + endRegionHeight);

    // 检查鼠标是否在下端15%区域内
    bool inBottomEnd = (globalPos.y() >= globalSagittalLine1Rect.bottom() - endRegionHeight &&
                        globalPos.y() <= globalSagittalLine1Rect.bottom());

    return inTopEnd || inBottomEnd;
}

bool ImageDisplayWidget::isMouseOverSagittalLine2Ends(const QPoint &globalPos) const
{
    QRect globalSagittalLine2Rect(ui->sagittalLine_2->mapToGlobal(QPoint(0, 0)), ui->sagittalLine_2->size());
    //qDebug() << "sagittalLine_2 global geometry:" << globalSagittalLine2Rect;

    // 如果鼠标不在sagittalLine_2上，直接返回false
    if (!globalSagittalLine2Rect.contains(globalPos)) {
        return false;
    }

    // 计算sagittalLine_2两端15%的区域
    int lineHeight = globalSagittalLine2Rect.height();
    int endRegionHeight = lineHeight * 0.15; // 15%的长度

    // 检查鼠标是否在上端15%区域内
    bool inTopEnd = (globalPos.y() >= globalSagittalLine2Rect.top() &&
                     globalPos.y() <= globalSagittalLine2Rect.top() + endRegionHeight);

    // 检查鼠标是否在下端15%区域内
    bool inBottomEnd = (globalPos.y() >= globalSagittalLine2Rect.bottom() - endRegionHeight &&
                        globalPos.y() <= globalSagittalLine2Rect.bottom());

    return inTopEnd || inBottomEnd;
}

// 检查鼠标是否在transverseLine_1两端15%的区域内
bool ImageDisplayWidget::isMouseOverTransverseLine1Ends(const QPoint &globalPos) const
{
    QRect globalTransverseLine1Rect(ui->transverseLine_1->mapToGlobal(QPoint(0, 0)), ui->transverseLine_1->size());
    //qDebug() << "transverseLine_1 global geometry:" << globalTransverseLine1Rect;

    // 如果鼠标不在transverseLine_1上，直接返回false
    if (!globalTransverseLine1Rect.contains(globalPos)) {
        return false;
    }

    // 计算transverseLine_1两端15%的区域
    int lineWidth = globalTransverseLine1Rect.width();
    int endRegionWidth = lineWidth * 0.15; // 15%的长度

    // 检查鼠标是否在左端15%区域内
    bool inLeftEnd = (globalPos.x() >= globalTransverseLine1Rect.left() &&
                      globalPos.x() <= globalTransverseLine1Rect.left() + endRegionWidth);

    // 检查鼠标是否在右端15%区域内
    bool inRightEnd = (globalPos.x() >= globalTransverseLine1Rect.right() - endRegionWidth &&
                       globalPos.x() <= globalTransverseLine1Rect.right());

    return inLeftEnd || inRightEnd;
}

// 检查鼠标是否在transverseLine_2两端15%的区域内
bool ImageDisplayWidget::isMouseOverTransverseLine2Ends(const QPoint &globalPos) const
{
    QRect globalTransverseLine2Rect(ui->transverseLine_2->mapToGlobal(QPoint(0, 0)), ui->transverseLine_2->size());
    //qDebug() << "transverseLine_2 global geometry:" << globalTransverseLine2Rect;

    // 如果鼠标不在transverseLine_2上，直接返回false
    if (!globalTransverseLine2Rect.contains(globalPos)) {
        return false;
    }

    // 计算transverseLine_2两端15%的区域
    int lineWidth = globalTransverseLine2Rect.width();
    int endRegionWidth = lineWidth * 0.15; // 15%的长度

    // 检查鼠标是否在左端15%区域内
    bool inLeftEnd = (globalPos.x() >= globalTransverseLine2Rect.left() &&
                      globalPos.x() <= globalTransverseLine2Rect.left() + endRegionWidth);

    // 检查鼠标是否在右端15%区域内
    bool inRightEnd = (globalPos.x() >= globalTransverseLine2Rect.right() - endRegionWidth &&
                       globalPos.x() <= globalTransverseLine2Rect.right());

    return inLeftEnd || inRightEnd;
}



void ImageDisplayWidget::on_MPRButton_clicked()
{
    // 切换MPRButton状态
    MPRButtonState = (MPRButtonState == 0) ? 1 : 0;

    // 根据状态更新按钮文本
    if (MPRButtonState == 0) {
        ui->MPRButton->setStyleSheet("QPushButton {"
                                     "border-radius: 6px;"
                                     "background-color:rgb(37, 38, 43);"
                                     "color: white;"
                                     "padding: 3px;"
                                     "}"
                                     );
        ui->coronalLine_1->hide();
        ui->coronalLine_2->hide();
        ui->sagittalLine_1->hide();
        ui->sagittalLine_2->hide();
        ui->transverseLine_1->hide();
        ui->transverseLine_2->hide();
    } else {
        ui->MPRButton->setStyleSheet("QPushButton {"
                                     "border-radius: 6px;"
                                     "background-color:rgb(0, 200, 0);"
                                     "color: white;"
                                     "padding: 3px;"
                                     "}"
                                     );
        ui->coronalLine_1->show();
        ui->coronalLine_2->show();
        ui->sagittalLine_1->show();
        ui->sagittalLine_2->show();
        ui->transverseLine_1->show();
        ui->transverseLine_2->show();
    }

    // 输出当前状态到控制台（调试用）
    qDebug() << "MPRButton state: " << MPRButtonState;
}

void ImageDisplayWidget::on_MPRButton_2_clicked()
{
    // 切换MPRButton状态
    MPRButtonState = (MPRButtonState == 0) ? 1 : 0;

    // 根据状态更新按钮文本
    if (MPRButtonState == 0) {
        ui->MPRButton_2->setStyleSheet("QPushButton {"
                                     "border-radius: 6px;"
                                     "background-color:rgb(37, 38, 43);"
                                     "color: white;"
                                     "padding: 3px;"
                                     "}"
                                     );
        ui->coronalLine_1->hide();
        ui->coronalLine_2->hide();
        ui->sagittalLine_1->hide();
        ui->sagittalLine_2->hide();
        ui->transverseLine_1->hide();
        ui->transverseLine_2->hide();
    } else {
        ui->MPRButton_2->setStyleSheet("QPushButton {"
                                     "border-radius: 6px;"
                                     "background-color:rgb(0, 200, 0);"
                                     "color: white;"
                                     "padding: 3px;"
                                     "}"
                                     );
        ui->coronalLine_1->show();
        ui->coronalLine_2->show();
        ui->sagittalLine_1->show();
        ui->sagittalLine_2->show();
        ui->transverseLine_1->show();
        ui->transverseLine_2->show();
    }

    // 输出当前状态到控制台（调试用）
    qDebug() << "MPRButton state: " << MPRButtonState;
}

void ImageDisplayWidget::on_MPRButton_3_clicked()
{
    // 切换MPRButton状态
    MPRButtonState = (MPRButtonState == 0) ? 1 : 0;

    // 根据状态更新按钮文本
    if (MPRButtonState == 0) {
        ui->MPRButton_3->setStyleSheet("QPushButton {"
                                     "border-radius: 6px;"
                                     "background-color:rgb(37, 38, 43);"
                                     "color: white;"
                                     "padding: 3px;"
                                     "}"
                                     );
        ui->coronalLine_1->hide();
        ui->coronalLine_2->hide();
        ui->sagittalLine_1->hide();
        ui->sagittalLine_2->hide();
        ui->transverseLine_1->hide();
        ui->transverseLine_2->hide();
    } else {
        ui->MPRButton_3->setStyleSheet("QPushButton {"
                                     "border-radius: 6px;"
                                     "background-color:rgb(0, 200, 0);"
                                     "color: white;"
                                     "padding: 3px;"
                                     "}"
                                     );
        ui->coronalLine_1->show();
        ui->coronalLine_2->show();
        ui->sagittalLine_1->show();
        ui->sagittalLine_2->show();
        ui->transverseLine_1->show();
        ui->transverseLine_2->show();
    }

    // 输出当前状态到控制台（调试用）
    qDebug() << "MPRButton state: " << MPRButtonState;
}

void ImageDisplayWidget::on_rotateButton_clicked()
{
    // 切换rotateButton状态
    rotateButtonState = (rotateButtonState == 0) ? 1 : 0;

    if (rotateButtonState == 0 || MPRButtonState == 0) {
        ui->rotateButton->setStyleSheet("QPushButton {"
                                       "border-radius: 6px;"
                                       "background-color:rgb(37, 38, 43);"
                                       "color: white;"
                                       "padding: 3px;"
                                       "}"
                                       );


    } else if (rotateButtonState == 1 && MPRButtonState == 1) {
        ui->rotateButton->setStyleSheet("QPushButton {"
                                       "border-radius: 6px;"
                                       "background-color:rgb(0, 200, 0);"
                                       "color: white;"
                                       "padding: 3px;"
                                       "}"
                                       );


    }

    // 输出当前状态到控制台（调试用）
    qDebug() << "MPRButton state: " << MPRButtonState;
    qDebug() << "rotateButton state: " << rotateButtonState;
}

void ImageDisplayWidget::on_eyeButton_clicked()
{
    ui->eyeButton->setStyleSheet("QPushButton {"
                                   "border-radius: 6px;"
                                   "background-color:rgb(0, 200, 0);"
                                   "color: white;"
                                   "padding: 3px;"
                                   "}"
                                   );
    show3DModel();
}


