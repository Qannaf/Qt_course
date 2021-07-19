#include <QCoreApplication>
#include <QStringList>
#include <QDebug>
#include <QVector>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    QStringList List;
    List << "a" << "b" << "c";

    QVector<QString> Vect;
    std::copy( List.begin(), List.end(), std::back_inserter( Vect ) );


    foreach (QString itm, Vect)
        qDebug() << itm;


    return a.exec();
}
