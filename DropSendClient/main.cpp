#include <QtGui/QApplication>
#include "mainwindow.h"

#include "user.h"
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
