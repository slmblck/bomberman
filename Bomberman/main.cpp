#include "mainwindow.h"
#include <QApplication>
#include "sounds.h"

int main(int argc, char *argv[])
{
    sounds s;
    s.playMusic();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
