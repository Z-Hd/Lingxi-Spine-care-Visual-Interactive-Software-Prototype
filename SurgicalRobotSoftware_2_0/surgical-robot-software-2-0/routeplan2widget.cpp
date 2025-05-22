#include "routeplan2widget.h"
#include "ui_routeplan2widget.h"
#include "imagedisplaywidget.h"

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

    // 将弹窗移动到合适的位置（居中显示并向右偏移）
    QRect parentGeometry = this->geometry();
    QRect dialogGeometry = vertebraSelectionWidget->geometry();

    // 计算居中位置
    int x = parentGeometry.x() + (parentGeometry.width() - dialogGeometry.width()) / 2;
    int y = parentGeometry.y() + (parentGeometry.height() - dialogGeometry.height()) / 2;

    // 向右偏移500像素
    x += 500;

    vertebraSelectionWidget->move(x, y);
}

void RoutePlan2Widget::handleVertebraSelected(const QString &vertebra)
{
    // 处理选中的椎骨
    qDebug("已选择椎骨: %s", qPrintable(vertebra));

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

