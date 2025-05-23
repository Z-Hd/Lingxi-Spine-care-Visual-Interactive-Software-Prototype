#ifndef INTRAOPERATIVEWIDGET_H
#define INTRAOPERATIVEWIDGET_H

#include <QWidget>

#include <QtMultimedia>

namespace Ui {
class IntraoperativeWidget;
}

class IntraoperativeWidget : public QWidget
{
    Q_OBJECT

public:
    explicit IntraoperativeWidget(QWidget *parent = nullptr);
    ~IntraoperativeWidget();

private slots:
    void on_backButton_clicked();

signals:
    void back_to_imagedisPlayWidget();

private:
    Ui::IntraoperativeWidget *ui;

    QMediaCaptureSession  *session;      //抓取管理器
    QCamera     *camera;                //摄像头

    void    initCamera();//初始化
};

#endif // INTRAOPERATIVEWIDGET_H
