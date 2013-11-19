#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "gamescreen.h"
#include "infoscreen.h"
#include <QMediaPlayer>
#include <QMediaPlaylist>

namespace Ui {
class MainWindow;
}
class QMediaPlayer;
class QMediaPlaylist;


class MainWindow : public QMainWindow
{
    Q_OBJECT
    QMediaPlayer *backgroundMusicMain;
    QMediaPlaylist *mainList;

public:
    explicit MainWindow(QWidget *parent = 0);
    void playAgain();
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
