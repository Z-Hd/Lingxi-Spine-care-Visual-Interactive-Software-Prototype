#ifndef ROBOTICARMTHREAD_H
#define ROBOTICARMTHREAD_H

#include <QObject>

class LocationMonitor : public QObject
{
    Q_OBJECT
public:
    explicit LocationMonitor(QObject *parent = nullptr);
    void begin(int num);
signals:
    void working(int num);
    void finish(QString elapsedTime);
};

#endif // ROBOTICARMTHREAD_H
