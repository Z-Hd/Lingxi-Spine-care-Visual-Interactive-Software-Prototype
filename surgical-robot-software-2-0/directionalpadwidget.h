#ifndef DIRECTIONALPADWIDGET_H
#define DIRECTIONALPADWIDGET_H

#include <QWidget>

class DirectionalPadWidget : public QWidget
{
    Q_OBJECT
public:
    explicit DirectionalPadWidget(QWidget *parent = nullptr);
    QSize sizeHint() const override { return QSize(80, 80); }

protected:
    void paintEvent(QPaintEvent *) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void keyPressEvent(QKeyEvent *event) override;
    void keyReleaseEvent(QKeyEvent *event) override;

private:
    enum Region { None, RH, LH, RT, LT, P };
    Region getClickedRegion(const QPoint &pos);
    Region pressedRegion = None;


signals:
};

#endif // DIRECTIONALPADWIDGET_H
