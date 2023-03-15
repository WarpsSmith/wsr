#include "bubblesort.h"
#include <QCoreApplication>
#include <QVector>
#include <Qdebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
     QVector<int> vec(10);
     for(int i=0; i < 10; i++)
             vec [ i ] = rand() % 100;           //  使用随机函数赋值到数组中

         qDebug() << "原始数列："<< vec;

    BubbleSort(vec);
      qDebug() << "已排序数列："<< vec;
    return a.exec();
}
