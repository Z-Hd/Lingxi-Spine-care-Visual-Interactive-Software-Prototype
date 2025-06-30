#include "imagedisplaywidget.h"
#include "ui_imagedisplaywidget.h"
#include "GlobalVTKDataManager.h"
#include <QTimer>

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
    // 切换unfoldButton状态
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
    // 切换unfoldButton状态
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
