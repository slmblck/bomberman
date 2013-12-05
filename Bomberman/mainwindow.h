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

/*! \brief The MainWindow class
 *         of Bombster used at the start of program as a menu.
 *
 *  Inherits QMainWindow from Qt
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT
    QMediaPlayer *backgroundMusicMain;
    QMediaPlaylist *mainList;
    int gameVol;

public:
    explicit MainWindow(QWidget *parent = 0);
    void playAgain();
    ~MainWindow();
    friend class GameScreen;

private slots:
    void on_gameButton_clicked();

    void on_infoButton_clicked();

    void on_actionMusic_triggered();

    void on_actionSFX_triggered();

    void on_quitButton_clicked();

private:
    Ui::MainWindow *ui;
    GameScreen *gameScreen;
    InfoScreen *infoScreen;
};

#endif // MAINWINDOW_H
