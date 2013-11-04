#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "gamescreen.h"
#include "infoscreen.h"
#include "sounds.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_gameButton_clicked();

    void on_infoButton_clicked();

private:
    Ui::MainWindow *ui;
    GameScreen *gameScreen;
    InfoScreen *infoScreen;
};

#endif // MAINWINDOW_H
