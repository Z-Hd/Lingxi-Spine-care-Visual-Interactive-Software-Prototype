#include "roboticArmThread.h"
#include <QElapsedTimer>
#include <QDebug>
#include <QThread>

LocationMonitor::LocationMonitor(QObject *parent) : QObject(parent)
{

}

void LocationMonitor::begin(int num)
{
    qDebug() <<" 线程1："<< num<<" || "<<QThread::currentThread();
    QElapsedTimer time;
    time.start();
    qDebug() <<"[Scott Debug] 读入器械末端位置信息";
    for(int i = 0; i < num; i++){
        qDebug() <<i;
        QThread::msleep(100); // 处理任务
        emit working(i);
    }
    qDebug() <<"线程1，共耗时： "<<time.elapsed() <<" ms。";
    emit finish(QString::number(time.elapsed()));
}
