#include "routeplan1widget.h"
#include "ui_routeplan1widget.h"
#include "imagedisplaywidget.h"

#include <QGuiApplication>
#include <QScreen>
#include <QWidget>
#include <QPainter>
#include <QMouseEvent>
#include <QWidget>

RoutePlan1Widget::RoutePlan1Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RoutePlan1Widget)
    , vertebraSelectionWidget(nullptr)
{
    ui->setupUi(this);
    setupSwitchButton();
}

RoutePlan1Widget::~RoutePlan1Widget()
{
    delete ui;
    if (vertebraSelectionWidget) {
        delete vertebraSelectionWidget;
    }
}

void RoutePlan1Widget::on_addRouteButton_clicked()
{
    // 创建椎骨选择弹窗
    if (!vertebraSelectionWidget) {
        vertebraSelectionWidget = new VertebraSelectionWidget(this);

        // 连接信号和槽
        connect(vertebraSelectionWidget, &VertebraSelectionWidget::confirmButton_pressed,
                this, &RoutePlan1Widget::handleVertebraSelected);
        connect(vertebraSelectionWidget, &VertebraSelectionWidget::cancelButton_pressed,
                this, &RoutePlan1Widget::handleSelectionCanceled);

        // 连接确认按钮信号到 ImageDisplayWidget 的槽
        // 获取父窗口中的 ImageDisplayWidget 实例
        QWidget* parent = this->parentWidget();
        if (parent && parent->inherits("ImageDisplayWidget")) {
            ImageDisplayWidget* imageDisplayWidget = qobject_cast<ImageDisplayWidget*>(parent);
            if (imageDisplayWidget) {
                connect(vertebraSelectionWidget, &VertebraSelectionWidget::confirmButton_pressed,
                        imageDisplayWidget, &ImageDisplayWidget::setStackedWidgetAsRoutePlan2);
            }
        }
    }

    // 重置按钮样式
    vertebraSelectionWidget->resetButtonStyles();

    // 显示弹窗
    vertebraSelectionWidget->show();

    // 将弹窗移动到屏幕中央
    QRect screenGeometry = QGuiApplication::primaryScreen()->geometry();
    QRect dialogGeometry = vertebraSelectionWidget->geometry();

    // 计算屏幕中央位置
    int x = (screenGeometry.width() - dialogGeometry.width()) / 2;
    int y = (screenGeometry.height() - dialogGeometry.height()) / 2;

    vertebraSelectionWidget->move(x, y);
}

void RoutePlan1Widget::on_backButton_clicked()
{
    emit back_to_registrationWidget();
}

void RoutePlan1Widget::handleVertebraSelected(const QString &vertebra)
{
    // 处理选中的椎骨
    qDebug("已选择椎骨: %s", qPrintable(vertebra));

    // 发送信号，通知 ImageDisplayWidget
    emit vertebraSelected(vertebra);
}

void RoutePlan1Widget::handleSelectionCanceled()
{
    // 处理取消选择
    qDebug("取消选择椎骨");
}

void RoutePlan1Widget::on_nextButton_clicked()
{
    emit nextButton_pressed();
}

void RoutePlan1Widget::setupSwitchButton()
{
    auto switchbutton = new SwitchButton(this);
    auto layout = new QVBoxLayout(ui->switchButton);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->addWidget(switchbutton);
}
