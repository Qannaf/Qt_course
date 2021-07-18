#include "mythread.h"
#include <QtCore>
#include <QDebug>
#include <QMutex>

MyThread::MyThread()
{

}

void MyThread::run()
{
    qDebug() << this->name << "running!";

    QMutex mutex;
    for (int var = 0; var < 1000; ++var)
    {
        mutex.lock();

        if( this->Stop ){mutex.unlock(); break;}

        mutex.unlock();
        qDebug() << this->name << var;
    }
}
