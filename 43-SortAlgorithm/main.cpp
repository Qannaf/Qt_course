#include <QCoreApplication>
#include <QDebug>
#include <QList>
#include <algorithm>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> List;

    List << 2 << 3 << 1 << 9 << 0 << 6 << 8;

    std::sort(List.begin(), List.end());

    foreach (int i, List)
        qDebug() << i;

    return a.exec();
}
