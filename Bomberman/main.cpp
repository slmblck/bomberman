#include "mainwindow.h"
#include <QApplication>

/*! \brief Creates a Main Menu
 * This begins the program and creates a MainWindow object */
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
