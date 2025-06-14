#include "directionalpadwidget.h"
#include <QPainter>
#include <QMouseEvent>
#include <QKeyEvent>
#include <QtMath>
#include <QDebug>

DirectionalPadWidget::DirectionalPadWidget(QWidget *parent)
    : QWidget{parent}
{
    setMinimumSize(80, 80);
    setFocusPolicy(Qt::StrongFocus);
}

void DirectionalPadWidget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    const QPoint center = rect().center();
    const int R = qMin(width(), height()) / 2 - 5;
    QRectF rect(center.x() - R, center.y() - R, 2 * R, 2 * R);

    const QList<Region> drawOrder = { LH, RH, RT, LT };
    QMap<Region, QString> labelMap = {
        { RH, "RH" },
        { LH, "LH" },
        { RT, "RT" },
        { LT, "LT" }
    };

    for (int i = 0; i < 4; ++i) {
        Region region = drawOrder[i];

        QColor fillColor = (pressedRegion == region)
                               ? QColor(245, 245, 245)
                               : QColor(60, 60, 60);
        QColor textColor = (pressedRegion == region)
                               ? Qt::black : Qt::white;

        painter.setBrush(fillColor);
        painter.setPen(QPen(Qt::black, 1));
        painter.drawPie(rect, 90 * 16 * i, 90 * 16);

        // 标签绘制
        double angle = (i * 90 + 45) * M_PI / 180.0;
        int tx = center.x() + R * 0.6 * cos(angle);
        int ty = center.y() - R * 0.6 * sin(angle);

        int textWidth = R * 0.5;
        int textHeight = R * 0.2;
        painter.setPen(textColor);
        painter.setFont(QFont("Arial", qMax(6, static_cast<int>(R * 0.15))));
        painter.drawText(QRectF(tx - textWidth / 2, ty - textHeight / 2,
                                textWidth, textHeight),
                         Qt::AlignCenter, labelMap[region]);
    }

    // 中心圆（P）
    int r = R / 3;
    QColor centerColor = (pressedRegion == P) ? QColor(245, 245, 245) : QColor(80, 80, 80);
    QColor centerTextColor = (pressedRegion == P) ? Qt::black : Qt::white;

    painter.setBrush(centerColor);
    painter.setPen(Qt::black);
    painter.drawEllipse(center, r, r);

    painter.setPen(centerTextColor);
    painter.setFont(QFont("Arial", qMax(8, r)));
    painter.drawText(QRect(center.x() - r, center.y() - r / 2, 2 * r, r),
                     Qt::AlignCenter, "P");
}

void DirectionalPadWidget::mousePressEvent(QMouseEvent *event)
{
    pressedRegion = getClickedRegion(event->pos());
    update();
}

void DirectionalPadWidget::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    pressedRegion = None;
    update();
}

void DirectionalPadWidget::keyPressEvent(QKeyEvent *event)
{
    Region region = None;
    switch (event->key()) {
    case Qt::Key_7: region = RH; break;
    case Qt::Key_9: region = LH; break;
    case Qt::Key_1: region = RT; break;
    case Qt::Key_3: region = LT; break;
    case Qt::Key_5: region = P; break;
    default: break;
    }

    if (region != None) {
        pressedRegion = region;
        update();
    }
}

void DirectionalPadWidget::keyReleaseEvent(QKeyEvent *event)
{
    switch (event->key()) {
    case Qt::Key_7:
    case Qt::Key_9:
    case Qt::Key_1:
    case Qt::Key_3:
    case Qt::Key_5:
        pressedRegion = None;
        update();
        break;
    default: break;
    }
}

DirectionalPadWidget::Region DirectionalPadWidget::getClickedRegion(const QPoint &pos)
{
    QPoint center = rect().center();
    QPointF vec = pos - center;
    double angle = qAtan2(-vec.y(), vec.x()) * 180 / M_PI;
    if (angle < 0) angle += 360;

    double dist = QLineF(center, pos).length();
    if (dist < width() / 6) return P;
    if (dist > width() / 2) return None;

    if (angle >= 90 && angle < 180) return RH;  // 左上角
    if (angle >= 0  && angle < 90)  return LH;  // 右上角
    if (angle >= 180 && angle < 270) return RT; // 左下角
    if (angle >= 270 && angle < 360) return LT; // 右下角

    return None;
}
