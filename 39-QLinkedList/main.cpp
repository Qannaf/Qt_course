#include <QCoreApplication>
#include <QDebug>
#include <QList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> List;

    List << 1 << 3 << 5 << 6;
    List.append(8);

    foreach (int i, List)
        qDebug() << i;

    return a.exec();
}
