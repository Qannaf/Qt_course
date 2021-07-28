# Qt Course Examples and Tutorials

<p align="center">
  <img width="197" height="197" src="images/qt.png">
</p>

## Table of Contents
1. [Hello, World!](#1)
1. [GUI-Hello, World!](#2)
1. [GUI-Programming](#3)
1. [SignalAndSlots ](#4)
1. [DisplayingWindows](#5)
1. [Layout-Tabs-Buddies](#6)
1. [BasicApp-HTMLAwareWidgets](#7)
1. [HorizontalAndVerticalLayouts](#8)
1. [QGridLayout](#9)
1. [Splitters](#10)
1. [QDir](#11)
1. [QFile](#12)
1. [ResourceFiles](#13)
1. [QLabelAndQtDesigner](#14)
1. [QPushButton](#15)
1. [QLineText](#16)
1. [QCheckBox](#17)
1. [QRadioButton](#18)
1. [QComboBox](#19)
1. [QListWidget](#20)
1. [QTreeWidget](#21)
1. [QActions](#23)
1. [QSliderAndQProgressBar](#24)
1. [QStatusBar](#25)
1. [QMessageBox](#26)
1. [QTimer](#27)
1. [QThread](#28)
1. [QThread Priority](#29)
1. [QThread QMutex](#30)
1. [GUI-Thread](#31)
1. [GUI-Thread](#32)
1. [ThreadsDoneRight](#35)
1. [QList](#36)
1. [37-QListAgain](#37)
1. [QLinkedList](#39)
1. [QMap](#40)
1. [QHash](#41)
1. [QStringList](#42)
1. [SortAlgorithm](#43)
1. [CopyAlgorithm](#44)
1. [FillAlgorithm](#45)
1. [FindAlgorithm](#46)
1. [IntroModelView](#47)
1. [QDirModel-QTreeView](#48)
1. [QFileSystemModel](#49)
1. [50: QItemDelegate](#50)
1. [Tips](#51)

<a name="1"></a>
## 01: Hello, World!  
![alt text](images/01.PNG?raw=true "sortie de code")

<a name="2"></a>
## 02: GUI-Hello, World!  
![alt text](images/02.PNG?raw=true "sortie de code")

<a name="3"></a>
## 03: GUI-Programming  
![alt text](images/03.PNG?raw=true "sortie de code")

<a name="4"></a>
## 04: SignalAndSlots  
![alt text](images/04.PNG?raw=true "sortie de code")

<a name="5"></a>
## 05: DisplayingWindows 
![alt text](images/05.PNG?raw=true "sortie de code")

<a name="6"></a>
## 06: Layout-Tabs-Buddies 
![alt text](images/06.PNG?raw=true "sortie de code")

<a name="7"></a>
## 07: BasicApp-HTMLAwareWidgets 
![alt text](images/07.PNG?raw=true "sortie de code")

<a name="8"></a>
## 08: HorizontalAndVerticalLayouts 
![alt text](images/08.PNG?raw=true "sortie de code")

<a name="9"></a>
## 09: QGridLayout 
![alt text](images/09.PNG?raw=true "sortie de code")

<a name="10"></a>
## 10: Splitters 
![alt text](images/10.PNG?raw=true "sortie de code")

<a name="11"></a>
## 11: QDir
![alt text](images/11.PNG?raw=true "sortie de code")

<a name="12"></a>
## 12: QFile
![alt text](images/12.PNG?raw=true "sortie de code")

<a name="13"></a>
## 13: ResourceFiles
![alt text](images/13.PNG?raw=true "sortie de code")

<a name="14"></a>
## 14: QLabelAndQtDesigner
![alt text](images/14.PNG?raw=true "sortie de code")

<a name="15"></a>
## 15: QPushButton
![alt text](images/15.PNG?raw=true "sortie de code")

<a name="16"></a>
## 16: QLineText
![alt text](images/16.PNG?raw=true "sortie de code")

<a name="17"></a>
## 17: QCheckBox
![alt text](images/17.PNG?raw=true "sortie de code")

<a name="18"></a>
## 18: QRadioButton
![alt text](images/18.PNG?raw=true "sortie de code")

<a name="19"></a>
## 19: QComboBox
![alt text](images/19.PNG?raw=true "sortie de code")

<a name="20"></a>
## 20: QListWidget
![alt text](images/20a.PNG?raw=true "sortie de code")
![alt text](images/20.PNG?raw=true "sortie de code")

<a name="21"></a>
## 21-22: QTreeWidget
![alt text](images/21.PNG?raw=true "sortie de code")

<a name="23"></a>
## 23: QActions
![alt text](images/23.PNG?raw=true "sortie de code")

<a name="24"></a>
## 24: QSliderAndQProgressBar
![alt text](images/24.PNG?raw=true "sortie de code")

<a name="25"></a>
## 25: QStatusBar
![alt text](images/25.PNG?raw=true "sortie de code")

<a name="26"></a>
## 26: QMessageBox
![alt text](images/26.PNG?raw=true "sortie de code")
![alt text](images/26a.PNG?raw=true "sortie de code")
![alt text](images/26b.PNG?raw=true "sortie de code")

<a name="27"></a>
## 27: QTimer
![alt text](images/27.PNG?raw=true "sortie de code")

<a name="28"></a>
## 28: QThread
![alt text](images/28.PNG?raw=true "sortie de code")

<a name="29"></a>
## 29: QThread "HighestPriority, NormalPriority and LowestPriority"
![alt text](images/29.PNG?raw=true "sortie de code")

<a name="30"></a>
## 30: QThread with QMutex
![alt text](images/30.PNG?raw=true "sortie de code")

<a name="31"></a>
## 31: GUI-Thread
![alt text](images/31.PNG?raw=true "sortie de code")

<a name="32"></a>
## 32-33-34: GUI-Thread
![alt text](images/32.PNG?raw=true "sortie de code")

<a name="35"></a>
## 35: ThreadsDoneRight
![alt text](images/35.PNG?raw=true "sortie de code")

<a name="36"></a>
## 36: QList
```CPP
#include <QCoreApplication>
#include <QList>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> List;

    for (int var = 0; var < 10; ++var)
        List.append(var);


    List.removeOne(5);
    List.removeLast();

    foreach (int nNumber, List)
        qDebug() << nNumber;


    return a.exec();
}
```
![alt text](images/36.PNG?raw=true "sortie de code")

<a name="37"></a>
## 37-38: QListAgain
```CPP
#include <QCoreApplication>
#include <QList>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> List;

    for (int var = 1; var <= 20; ++var)
    {
        List.append(var);
    }

    /*QListIterator<int> Iter(List);

    while(Iter.hasNext())
        qDebug() << Iter.next();

    Iter.toBack();
    while(Iter.hasPrevious())
    {
        qDebug() << Iter.previous();
        if( Iter.hasPrevious() )
            qDebug() << "next..." << Iter.peekPrevious();
    }*/

    QMutableListIterator<int> Iter(List);

    while (Iter.hasNext())
    {
        int i = Iter.next();
        if( i == 5 )
            Iter.remove();
    }

    Iter.toFront();

    while (Iter.hasNext()) 
        qDebug() << Iter.next();

    return a.exec();
}

}
```
![alt text](images/37.PNG?raw=true "sortie de code")
![alt text](images/38.PNG?raw=true "sortie de code")

<a name="39"></a>
## 39: QLinkedList
```CPP
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
```
![alt text](images/39.PNG?raw=true "sortie de code")

<a name="40"></a>
## 40: QMap
```CPP
#include <QCoreApplication>
#include <QMap>
#include <QDebug>
#include <QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QMap<int, QString> Employees;

    Employees.insert(1, "Bob");
    Employees.insert(2, "Chad");
    Employees.insert(3, "Mary");
    //Employees.insertMulti(1, "Amy");

    foreach (int i, Employees.keys())
        qDebug() << Employees[i];


    QMapIterator<int, QString> Iter(Employees);

    while (Iter.hasNext())
    {
        Iter.next();
        qDebug() << Iter.key() << "=" << Iter.value();
    }

    return a.exec();
}
```
![alt text](images/40.PNG?raw=true "sortie de code")

<a name="41"></a>
## 41: QHash
```CPP
#include <QCoreApplication>
#include <QHash>
#include <QDebug>
#include <QHashIterator>

/*
 * Like a QMap, but, QMap is orderly by the key and QHash is orderly by a hash.
*/

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QHash<int, QString> Employees;

    Employees.insert(1, "Bob");
    Employees.insert(2, "Amy");
    Employees.insert(3, "Chad");

    qDebug() << "3 = " << Employees.value(3);

    foreach(int i, Employees.keys())
        qDebug() << Employees[i];


    QHashIterator<int, QString> Iter(Employees);
    while(Iter.hasNext())
    {
        Iter.next();
        qDebug() << Iter.key() << " = " << Iter.value();
    }

    return a.exec();
}
```
![alt text](images/41.PNG?raw=true "sortie de code")

<a name="42"></a>
## 42: QStringList
```CPP
#include <QCoreApplication>
#include <QStringList>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QStringList List;
    List.append("Hello");

    QString line = "a,b,c,d,e,f,g";
    List = line.split(",");
    List.replaceInStrings("b", "batman");

    QString after = List.join(",");

    qDebug() << after;

    foreach (QString itm, List)
        qDebug() << itm;

    return a.exec();
}
```
![alt text](images/42.PNG?raw=true "sortie de code")

<a name="43"></a>
## 43: SortAlgorithm
```CPP
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
```
![alt text](images/43.PNG?raw=true "sortie de code")

<a name="44"></a>
## 44: CopyAlgorithm
```CPP
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
```
![alt text](images/44.PNG?raw=true "sortie de code")

<a name="45"></a>
## 45: FillAlgorithm
```CPP
#include <QCoreApplication>
#include <QDebug>
#include <QVector>
#include <QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QVector<QString> Vect(5);
    std::fill(Vect.begin()+1, Vect.end()-2, "LOL");

    foreach (QString itm, Vect)
        qDebug() << itm;

    return a.exec();
}
```
![alt text](images/45.PNG?raw=true "sortie de code")


<a name="46"></a>
## 46: FindAlgorithm
```CPP
#include <QCoreApplication>
#include <QDebug>
#include <QList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> List;
    List << 1 << 5 << 15 << 33;

    QList<int>::const_iterator Iter = std::find(List.begin(), List.end(), 15);

    if( Iter != List.end() )    qDebug() << "Found: " << *Iter;

    else                        qDebug() << "Not found!";


    return a.exec();
}
```
![alt text](images/46.PNG?raw=true "sortie de code")


<a name="47"></a>
## 47: IntroModelView
![alt text](images/47.PNG?raw=true "sortie de code")


<a name="48"></a>
## 48: QDirModel-QTreeView
![alt text](images/48.PNG?raw=true "sortie de code")


<a name="49"></a>
## 49: QFileSystemModel
![alt text](images/49.PNG?raw=true "sortie de code")


<a name="50"></a>
## 50: QItemDelegate
![alt text](images/50.PNG?raw=true "sortie de code")



<a name="51"></a>
## Tips
![alt text](images/calculator.PNG?raw=true "sortie de code")