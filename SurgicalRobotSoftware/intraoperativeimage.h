#ifndef INTRAOPERATIVEIMAGE_H
#define INTRAOPERATIVEIMAGE_H

#include <QWidget>

namespace Ui {
class IntraoperativeImage;
}

class IntraoperativeImage : public QWidget
{
    Q_OBJECT

public:
    explicit IntraoperativeImage(QWidget *parent = nullptr);
    ~IntraoperativeImage();

private:
    Ui::IntraoperativeImage *ui;
};

#endif // INTRAOPERATIVEIMAGE_H
