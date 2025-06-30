#include "switchbutton.h"

SwitchButton::SwitchButton(QWidget *parent)
    : QPushButton(parent),
    m_checked(false),
    m_bgColor(Qt::transparent), // 背景透明
    m_onColor(QColor(100, 180, 100)), // 调整为更淡的绿色 (原为 QColor(0, 150, 136))
    m_offColor(QColor(120, 120, 120)),
    m_sliderColor(QColor(255, 255, 255)),
    m_textColor(QColor(255, 255, 255)), // 默认文字颜色（用于“开”状态）
    m_textOn("开"),
    m_textOff("关"),
    m_sliderX(0),
    m_padding(3), // 内边距，可以调整这个值来影响滑轨和滑块的大小关系
    m_textPadding(5), // 文字与滑块/边缘的间距
    m_buttonHeight(40) // 默认按钮高度，可以根据需要调整
{
    setCheckable(true);
    setCursor(Qt::PointingHandCursor);
    setMinimumHeight(m_buttonHeight); // 设置最小高度
    setFixedHeight(m_buttonHeight); // 可以设置为固定高度

    m_sliderRadius = (m_buttonHeight - 2 * m_padding) / 2;
    m_sliderX = m_padding + m_sliderRadius; // 初始位置在左侧

    m_animation = new QPropertyAnimation(this, "sliderX");
    m_animation->setDuration(150); // 动画持续时间
    connect(m_animation, &QPropertyAnimation::valueChanged, this, &SwitchButton::onAnimationValueChanged);
}

void SwitchButton::setChecked(bool checked)
{
    if (m_checked == checked) return;
    m_checked = checked;
    QPushButton::setChecked(checked);

    int startX = m_sliderX;
    int endX;
    if (m_checked) {
        endX = width() - m_padding - m_sliderRadius;
    } else {
        endX = m_padding + m_sliderRadius;
    }

    m_animation->setStartValue(startX);
    m_animation->setEndValue(endX);
    m_animation->start();

    emit toggled(m_checked);
    update();
}

void SwitchButton::setBackgroundColor(const QColor &color)
{
    m_bgColor = color;
    update();
}

void SwitchButton::setCheckedColor(const QColor &color)
{
    m_onColor = color;
    update();
}

void SwitchButton::setUncheckedColor(const QColor &color)
{
    m_offColor = color;
    update();
}

void SwitchButton::setSliderColor(const QColor &color)
{
    m_sliderColor = color;
    update();
}

void SwitchButton::setTextColor(const QColor &color)
{
    m_textColor = color;
    update();
}

void SwitchButton::setTextOn(const QString &text)
{
    m_textOn = text;
    update();
}

void SwitchButton::setTextOff(const QString &text)
{
    m_textOff = text;
    update();
}

void SwitchButton::setButtonHeight(int height)
{
    m_buttonHeight = height;
    setMinimumHeight(m_buttonHeight);
    setFixedHeight(m_buttonHeight);
    // 需要重新计算滑块半径和初始位置
    m_sliderRadius = (m_buttonHeight - 2 * m_padding) / 2;
    if (!m_checked) {
        m_sliderX = m_padding + m_sliderRadius;
    } else {
        m_sliderX = width() - m_padding - m_sliderRadius;
    }
    update();
}

void SwitchButton::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true);

    // 1. 绘制背景（滑轨）
    painter.setPen(Qt::NoPen);
    QColor currentBgColor = m_checked ? m_onColor : m_offColor;
    painter.setBrush(currentBgColor);
    QRectF bgRect(0, 0, width(), m_buttonHeight);
    painter.drawRoundedRect(bgRect, m_buttonHeight / 2.0, m_buttonHeight / 2.0);

    // 2. 绘制滑块
    painter.setBrush(m_sliderColor);
    painter.drawEllipse(QPointF(m_sliderX, m_buttonHeight / 2.0), m_sliderRadius, m_sliderRadius);

    // 3. 绘制文字
    QFont font = painter.font();
    font.setPixelSize(qMax(14, m_buttonHeight / 3));
    font.setBold(true); // 设置字体加粗
    painter.setFont(font);

    QRect textRect = bgRect.toRect();
    textRect.setY((m_buttonHeight - painter.fontMetrics().height()) / 2);
    textRect.setHeight(painter.fontMetrics().height());

    if (m_checked) { // 开状态，文字在左边
        painter.setPen(m_textColor); // “开”状态使用默认m_textColor（白色）
        QRect onTextRect = textRect;
        onTextRect.setLeft(m_padding + m_textPadding);
        onTextRect.setRight(m_sliderX - m_sliderRadius - m_textPadding);
        if (onTextRect.width() > 0) {
            painter.drawText(onTextRect, Qt::AlignCenter, m_textOn);
        }
    } else { // 关状态，文字在右边
        painter.setPen(Qt::black); // “关”状态文字设置为黑色
        QRect offTextRect = textRect;
        offTextRect.setLeft(m_sliderX + m_sliderRadius + m_textPadding);
        offTextRect.setRight(width() - m_padding - m_textPadding);
        if (offTextRect.width() > 0) {
            painter.drawText(offTextRect, Qt::AlignCenter, m_textOff);
        }
    }
}

void SwitchButton::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        setChecked(!m_checked);
    }
    QPushButton::mousePressEvent(event);
}

void SwitchButton::resizeEvent(QResizeEvent *event)
{
    Q_UNUSED(event);
    // 当窗口大小改变时，如果按钮是选中状态，需要重新计算滑块的末端位置
    // 初始位置（未选中）总是在左边，由 m_padding 和 m_sliderRadius 决定
    m_sliderRadius = (m_buttonHeight - 2 * m_padding) / 2;
    if (m_checked) {
        m_sliderX = width() - m_padding - m_sliderRadius;
    } else {
        m_sliderX = m_padding + m_sliderRadius;
    }
    update();
}

void SwitchButton::onAnimationValueChanged(const QVariant &value)
{
    // 这个槽函数实际上不需要做什么，因为QPropertyAnimation直接更新了m_sliderX
    // 然后setSliderX会调用update()
    // 如果需要在这里做额外的处理，可以添加代码
    Q_UNUSED(value);
}
