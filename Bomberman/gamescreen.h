#ifndef GAMESCREEN_H
#define GAMESCREEN_H

#include <QMainWindow>
#include "world.h"
//#include "mainwindow.h"
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QCloseEvent>
#include <QTextBrowser>

namespace Ui {
class GameScreen;
}

class QMediaPlayer;
class QMediaPlaylist;

/*! \brief The Gamescreen class
 *         of Bombster used to create a new game.
 *
 *  Inherits QMainWindow from Qt
 */
class GameScreen : public QMainWindow
{

    Q_OBJECT
    QMediaPlayer *backgroundMusicGame;
    QMediaPlaylist *gameList;

public slots:
    void checkDeaths();
    void gameStart();

public:
    explicit GameScreen(QWidget *parent = 0);
    ~GameScreen();
    void paintEvent(QPaintEvent *event);
    void closeEvent(QCloseEvent *);
    QGraphicsScene *scene;
    void setVol(int vol);
    void gameEnd();

private:
    Ui::GameScreen *ui;
    World *w;
    int p1Points;
    int p2Points;
    QString *s;
    QString *s2;
    QTimer* timer;
    void keyPressEvent(QKeyEvent *k);
    void keyReleaseEvent(QKeyEvent *k);
};

#endif // GAMESCREEN_H
