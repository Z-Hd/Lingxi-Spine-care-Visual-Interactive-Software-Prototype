#include "mainwidget.h"
#include "./ui_mainwidget.h"
#include <QApplication>

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized); //窗口最大化显示
    this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    initToolBar();
    initButton();

    patient_info_widget = new PatientInfoWidget();
    equip_info_widget = new EquipInfoWidget();
    image_display_widget = new ImageDisplayWidget();
    image_input_widget = new ImageInputWidget();
    simulation_widget = new SimulationWidget();
    arm_control_widget = new ArmControlWidget();
    ndi_widget = new NDIWidget();
    intraoperative_widget = new IntraoperativeWidget();

    ui->centralWidget->addWidget(patient_info_widget);  //0
    ui->centralWidget->addWidget(equip_info_widget);    //1
    ui->centralWidget->addWidget(image_display_widget); //2
    ui->centralWidget->addWidget(image_input_widget);   //3
    ui->centralWidget->addWidget(simulation_widget);    //4
    ui->centralWidget->addWidget(arm_control_widget);   //5
    ui->centralWidget->addWidget(ndi_widget);           //6
    ui->centralWidget->addWidget(intraoperative_widget);//7

    ui->centralWidget->setCurrentIndex(0);     //setCurrentWidget(patient_info_widget);
    curIndex = 0;

    connect(patient_info_widget, &PatientInfoWidget::confirmButton_pressed,[&, this](){
        preIndex = curIndex;
        ui->centralWidget->setCurrentIndex(1);//setCurrentWidget(equip_info_widget);
        curIndex = 1;
    });
    connect(equip_info_widget, &EquipInfoWidget::confirmButton_pressed,[&, this](){
        preIndex = curIndex;
        ui->centralWidget->setCurrentIndex(2);//setCurrentWidget(image_display_widget);
        curIndex = 2;
        changeToolBar();
    });

    connect(equip_info_widget, &EquipInfoWidget::itemNameSelected, [this](const QString &name) {
        ui->label_2->setText(name);
        ui->label_2->show();
    });

    // 这里须要注意：从 SegmentationWidget 到 ImageDisplayWidget 再到 MainWidget 的三层信号传递
    connect(image_display_widget, &ImageDisplayWidget::imageInputButton_received,[&, this](){
        preIndex = curIndex;
        ui->centralWidget->setCurrentIndex(3);//setCurrentWidget(image_input_widget);
        curIndex = 3;
    });

    // 这里须要注意：先回到 ImageDisplayWidget 将右侧 StackedWidget 更换为 SegmentationWidget
    // 再在 MainWidget 把 centralWidget 更换为 ImageDisplayWidget
    connect(image_input_widget, &ImageInputWidget::back_to_imageDisplayWidget,[&, this](){
        void* set_image_display_widget_stacked_widget_as_segmentation = image_display_widget->setStackedWidgetAsSegmentation();
        preIndex = curIndex;
        ui->centralWidget->setCurrentIndex(2);//setCurrentWidget(image_display_widget);
        curIndex = 2;
    });

    // 这里须要注意：先回到 ImageDisplayWidget 将右侧 StackedWidget 更换为 RegistrationWidget
    // 将左侧 VisualizationWidget 更换为 AverageWidget
    // 再在 MainWidget 把 centralWidget 更换为 ImageDisplayWidget
    connect(image_input_widget, &ImageInputWidget::confirmButton_pressed,[&, this](){
        void* set_image_display_widget_stacked_widget_as_registration = image_display_widget->setStackedWidgetAsRegistration();
        // void* set_image_display_widget_visualization_widget_as_average = image_display_widget->setVisualizationWidgetAsAverage();
        preIndex = curIndex;
        ui->centralWidget->setCurrentIndex(2);//setCurrentWidget(image_display_widget);
        curIndex = 2;
    });

    connect(simulation_widget, &SimulationWidget::back_to_imageDisplayWidget,[&, this](){
        preIndex = curIndex;
        ui->centralWidget->setCurrentIndex(2);//setCurrentWidget(image_display_widget);
        curIndex = 2;
    });
    connect(this, &MainWidget::ndiPageButton_pressed,[&, this](){
        preIndex = curIndex;
        ui->centralWidget->setCurrentIndex(6);//setCurrentWidget(ndi_widget);
    });
    connect(this, &MainWidget::armPageButton_pressed,[&, this](){
        preIndex = curIndex;
        ui->centralWidget->setCurrentIndex(5);//setCurrentWidget(arm_control_widget);
    });

    // 这里须要注意：从 ExecuteWidget 到 ImageDisplayWidget 再到 MainWidget 的三层界面，两道信号传递
    connect(image_display_widget, &ImageDisplayWidget::simulationButton_received,[&, this](){
        preIndex = curIndex;
        ui->centralWidget->setCurrentIndex(4);//setCurrentWidget(simulation_widget);
        curIndex = 4;
    });

    connect(ndi_widget, &NDIWidget::back_to_prepage,[&, this](){
        ui->centralWidget->setCurrentIndex(preIndex);
        curIndex = preIndex;
    });

    connect(arm_control_widget, &ArmControlWidget::back_to_prepage,[&, this](){
        ui->centralWidget->setCurrentIndex(preIndex);
        curIndex = preIndex;
    });

    connect(image_display_widget, &ImageDisplayWidget::executeWidget_nextButton_pressed, [&, this](){
        preIndex = curIndex;
        ui->centralWidget->setCurrentIndex(7);
        curIndex = 7;
    });

    connect(intraoperative_widget, &IntraoperativeWidget::back_to_imagedisPlayWidget, [&, this](){
        preIndex = curIndex;
        ui->centralWidget->setCurrentIndex(2);
        curIndex = 2;
    });

    // 添加连接，监听ImageDisplayWidget的currentWidgetChanged信号
    // 用于 toolBar label 高亮
    connect(image_display_widget, &ImageDisplayWidget::currentWidgetChanged,
            this, &MainWidget::onCurrentWidgetChanged);

    connect(equip_info_widget, &EquipInfoWidget::currentWidgetChanged,
            this, &MainWidget::onCurrentWidgetChanged);

    connect(image_input_widget, &ImageInputWidget::currentWidgetChanged,
            this, &MainWidget::onCurrentWidgetChanged);

    connect(ui->exitButton, &QPushButton::clicked, qApp, &QApplication::quit);
}

MainWidget::~MainWidget()
{
    delete ui;
}

void MainWidget::on_ndiPageButton_clicked()
{
    emit ndiPageButton_pressed();
}

void MainWidget::on_armPageButton_clicked()
{
    emit armPageButton_pressed();
}


void MainWidget::initToolBar(){
    ui->label_2->hide();
    ui->stepWidget->hide();
    ui->infoInnerWidget->hide();
    ui->pushButton->hide();
    ui->ndiPageButton->hide();
    ui->armPageButton->setStyleSheet("QPushButton {width: 40px;height: 25px;border-radius: 10px; background-color: rgb(199, 76, 99);color: white;} ");
}

void MainWidget::changeToolBar(){
    ui->stepWidget->show();
    ui->infoInnerWidget->show();
    ui->pushButton->show();
    ui->ndiPageButton->show();
    ui->armPageButton->setStyleSheet("QPushButton {width: 40px;height: 25px;border-radius: 10px; background-color: rgb(0, 153, 139);color: white;}");
}

void MainWidget::initButton()
{
    struct ButtonIcon {
        QPushButton* button;
        QString iconPath;
    };

    QList<ButtonIcon> buttons = {
        { ui->pushButton,   ":/resource/image/pos.png"},
        { ui->pushButton_8,    ":/resource/image/snapshot.png" },
        { ui->pushButton_11,        ":/resource/image/setting.png" },
        { ui->pushButton_9,        ":/resource/image/blok.png" },
        { ui->exitButton,  ":/resource/image/ending.png" },
        { ui->pushButton_4,  ":/resource/image/arm_1.png" },
        { ui->pushButton_3,  ":/resource/image/person.png" },
        { ui->pushButton_2,  ":/resource/image/规则引擎.png" },
        //{ ui->ndiPageButton,  ":/resource/image/person.png" },
        { ui->armPageButton,  ":/resource/image/arm_2.png" },
        { ui->pushButton_7,  ":/resource/image/C.png" }
    };

    for (const ButtonIcon &b : buttons) {
        QPixmap pix(b.iconPath);
        QIcon icon(pix);
        b.button->setIcon(icon);
        QSize iconSize = QSize(b.button->width() * 0.7, b.button->height() * 0.7);
        b.button->setIconSize(iconSize);
        b.button->setFlat(true);  // 去除边框，选用可选
    }
}

void MainWidget::onCurrentWidgetChanged(const QString &widgetName)
{
    if (widgetName == "segmentation") {
        // 当显示SegmentationWidget时，修改"分割"文字样式
        ui->segmentationLabel->setStyleSheet("background-color: rgb(28, 29, 33);"
                                 "color:rgb(225, 225, 225);"
                                 "qproperty-alignment: AlignCenter;"
                                 "font-size:21px;");
        // RegistrationWidget 恢复默认样式
        ui->registrationLabel->setStyleSheet("background-color: rgb(28, 29, 33);"
                                             "color:rgb(111, 114, 121);"
                                             "qproperty-alignment: AlignCenter;"
                                             "font-size:17px;");
        // RoutePlanWidget 恢复默认样式
        ui->planLabel->setStyleSheet("background-color: rgb(28, 29, 33);"
                                             "color:rgb(111, 114, 121);"
                                             "qproperty-alignment: AlignCenter;"
                                             "font-size:17px;");
        // ExecuteWidget 恢复默认样式
        ui->executeLabel->setStyleSheet("background-color: rgb(28, 29, 33);"
                                     "color:rgb(111, 114, 121);"
                                     "qproperty-alignment: AlignCenter;"
                                     "font-size:17px;");
    } else if (widgetName == "registration") {
        // 当显示RegistrationWidget时，修改"配准"文字样式
        ui->registrationLabel->setStyleSheet("background-color: rgb(28, 29, 33);"
                                             "color:rgb(225, 225, 225);"
                                             "qproperty-alignment: AlignCenter;"
                                             "font-size:21px;");
        // SegmentationWidget 恢复默认样式
        ui->segmentationLabel->setStyleSheet("background-color: rgb(28, 29, 33);"
                                             "color:rgb(111, 114, 121);"
                                             "qproperty-alignment: AlignCenter;"
                                             "font-size:17px;");
        // RoutePlanWidget 恢复默认样式
        ui->planLabel->setStyleSheet("background-color: rgb(28, 29, 33);"
                                     "color:rgb(111, 114, 121);"
                                     "qproperty-alignment: AlignCenter;"
                                     "font-size:17px;");
        // ExecuteWidget 恢复默认样式
        ui->executeLabel->setStyleSheet("background-color: rgb(28, 29, 33);"
                                        "color:rgb(111, 114, 121);"
                                        "qproperty-alignment: AlignCenter;"
                                        "font-size:17px;");
    } else if (widgetName == "routeplan") {
        // 当显示RoutePlanWidget时，修改"规划"文字样式
        ui->planLabel->setStyleSheet("background-color: rgb(28, 29, 33);"
                                             "color:rgb(225, 225, 225);"
                                             "qproperty-alignment: AlignCenter;"
                                             "font-size:21px;");
        // SegmentationWidget 恢复默认样式
        ui->segmentationLabel->setStyleSheet("background-color: rgb(28, 29, 33);"
                                             "color:rgb(111, 114, 121);"
                                             "qproperty-alignment: AlignCenter;"
                                             "font-size:17px;");
        // RegistrationWidget 恢复默认样式
        ui->registrationLabel->setStyleSheet("background-color: rgb(28, 29, 33);"
                                             "color:rgb(111, 114, 121);"
                                             "qproperty-alignment: AlignCenter;"
                                             "font-size:17px;");
        // ExecuteWidget 恢复默认样式
        ui->executeLabel->setStyleSheet("background-color: rgb(28, 29, 33);"
                                        "color:rgb(111, 114, 121);"
                                        "qproperty-alignment: AlignCenter;"
                                        "font-size:17px;");
    } else if (widgetName == "execute") {
        // 当显示ExecuteWidget时，修改"执行"文字样式
        ui->executeLabel->setStyleSheet("background-color: rgb(28, 29, 33);"
                                     "color:rgb(225, 225, 225);"
                                     "qproperty-alignment: AlignCenter;"
                                     "font-size:21px;");
        // SegmentationWidget 恢复默认样式
        ui->segmentationLabel->setStyleSheet("background-color: rgb(28, 29, 33);"
                                             "color:rgb(111, 114, 121);"
                                             "qproperty-alignment: AlignCenter;"
                                             "font-size:17px;");
        // RegistrationWidget 恢复默认样式
        ui->registrationLabel->setStyleSheet("background-color: rgb(28, 29, 33);"
                                             "color:rgb(111, 114, 121);"
                                             "qproperty-alignment: AlignCenter;"
                                             "font-size:17px;");
        // RoutePlanWidget 恢复默认样式
        ui->planLabel->setStyleSheet("background-color: rgb(28, 29, 33);"
                                             "color:rgb(111, 114, 121);"
                                             "qproperty-alignment: AlignCenter;"
                                             "font-size:17px;");
    }
}
