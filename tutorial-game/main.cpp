#include "mainwindow.h"
#include <QApplication>
#include <QtDebug>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    qDebug() << "Hello World";

    return a.exec();
}
