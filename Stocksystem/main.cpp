
#include "widget.h"

#include <QApplication>

#include <QMainWindow>
#include <QMenuBar>
#include <QMenu>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
