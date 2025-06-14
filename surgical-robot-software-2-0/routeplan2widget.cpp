#include "routeplan2widget.h"
#include "ui_routeplan2widget.h"
#include "imagedisplaywidget.h"

#include <QGuiApplication>
#include <QScreen>

RoutePlan2Widget::RoutePlan2Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RoutePlan2Widget)
    , vertebraSelectionWidget(nullptr)
{
    ui->setupUi(this);
}

RoutePlan2Widget::~RoutePlan2Widget()
{
    delete ui;
    if (vertebraSelectionWidget) {
        delete vertebraSelectionWidget;
    }
}

void RoutePlan2Widget::on_addRouteButton_clicked()
{
    // 创建椎骨选择弹窗
    if (!vertebraSelectionWidget) {
        vertebraSelectionWidget = new VertebraSelectionWidget(this);

        // 连接信号和槽
        connect(vertebraSelectionWidget, &VertebraSelectionWidget::confirmButton_pressed,
                this, &RoutePlan2Widget::handleVertebraSelected);
        connect(vertebraSelectionWidget, &VertebraSelectionWidget::cancelButton_pressed,
                this, &RoutePlan2Widget::handleSelectionCanceled);

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

void RoutePlan2Widget::handleVertebraSelected(const QString &vertebra)
{
    // 处理选中的椎骨
    qDebug("已选择椎骨: %s", qPrintable(vertebra));

    // 检查是否为有效的椎骨选择（不是"请选择椎骨"这样的提示信息）
    if (vertebra != "请选择椎骨" && !vertebra.isEmpty()) {

    }

    // 更新标签内容
    setVertebraLabel(vertebra);
}

void RoutePlan2Widget::handleSelectionCanceled()
{
    // 处理取消选择
    qDebug("取消选择椎骨");
}

void RoutePlan2Widget::setVertebraLabel(const QString &text)
{
    // 设置标签内容
    if (ui->label) {
        ui->label->setText(text);
    }
}

void RoutePlan2Widget::on_nextButton_clicked()
{
    emit nextButton_pressed();
}

void RoutePlan2Widget::on_backButton_clicked()
{
    emit back_to_routePlan1Widget();
}

