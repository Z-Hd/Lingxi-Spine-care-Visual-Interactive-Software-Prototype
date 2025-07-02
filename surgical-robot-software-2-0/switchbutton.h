#ifndef SWITCHBUTTON_H
#define SWITCHBUTTON_H

#include <QPushButton>
#include <QPainter>
#include <QColor>
#include <QPropertyAnimation>
#include <QMouseEvent>
#include <QDebug>

class SwitchButton : public QPushButton
{
    Q_OBJECT
    Q_PROPERTY(int sliderX READ getSliderX WRITE setSliderX)

public:
    explicit SwitchButton(QWidget *parent = nullptr);

    // 设置选中状态
    void setChecked(bool checked);
    bool isChecked() const { return m_checked; }

    // 设置背景颜色
    void setBackgroundColor(const QColor &color);
    // 设置选中颜色
    void setCheckedColor(const QColor &color);
    // 设置未选中颜色
    void setUncheckedColor(const QColor &color);
    // 设置滑块颜色
    void setSliderColor(const QColor &color);
    // 设置文字颜色
    void setTextColor(const QColor &color);
    // 设置"开"状态文本
    void setTextOn(const QString &text);
    // 设置"关"状态文本
    void setTextOff(const QString &text);
    // 设置固定高度
    void setButtonHeight(int height);

signals:
    void toggled(bool checked);

protected:
    void paintEvent(QPaintEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void resizeEvent(QResizeEvent *event) override;

private slots:
    void onAnimationValueChanged(const QVariant &value);

private:
    int getSliderX() const { return m_sliderX; }
    void setSliderX(int x) { m_sliderX = x; update(); }

    bool m_checked;         // 是否选中
    QColor m_bgColor;       // 背景色
    QColor m_onColor;       // 选中颜色 (开状态)
    QColor m_offColor;      // 未选中颜色 (关状态)
    QColor m_sliderColor;   // 滑块颜色
    QColor m_textColor;     // 文字颜色

    QString m_textOn;       // "开"状态文字
    QString m_textOff;      // "关"状态文字

    int m_sliderX;          // 滑块X坐标
    int m_sliderRadius;     // 滑块半径
    int m_padding;          // 内边距
    int m_textPadding;      // 文字与滑块/边缘的间距
    int m_buttonHeight;     // 按钮的固定高度

    QPropertyAnimation *m_animation; // 动画
};

#endif // SWITCHBUTTON_H
