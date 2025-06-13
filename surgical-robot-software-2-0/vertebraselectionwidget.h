#ifndef VERTEBRASELECTIONWIDGET_H
#define VERTEBRASELECTIONWIDGET_H

#include <QWidget>

namespace Ui {
class VertebraSelectionWidget;
}

class VertebraSelectionWidget : public QWidget
{
    Q_OBJECT

public:
    explicit VertebraSelectionWidget(QWidget *parent = nullptr);
    ~VertebraSelectionWidget();

    // 添加重置按钮样式的方法
    void resetButtonStyles();

private slots:
    void on_confirmButton_clicked();

    void on_cancelButton_clicked();

    void on_l5LButton_clicked();

    void on_l5RButton_clicked();

signals:
    void confirmButton_pressed(const QString &vertebra);  // 带有变量处理的信号，变量是个字符串
    void cancelButton_pressed();

private:
    Ui::VertebraSelectionWidget *ui;
    QString selectedVertebra;
};

#endif // VERTEBRASELECTIONWIDGET_H
