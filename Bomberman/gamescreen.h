#ifndef GAMESCREEN_H
#define GAMESCREEN_H

#include <QMainWindow>
#include "world.h"
//#include "mainwindow.h"
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QCloseEvent>

namespace Ui {
class GameScreen;
}

class QMediaPlayer;
class QMediaPlaylist;

class GameScreen : public QMainWindow
{

    Q_OBJECT
    QMediaPlayer *backgroundMusicGame;
    QMediaPlaylist *gameList;

public slots:


public:
    explicit GameScreen(QWidget *parent = 0);
    ~GameScreen();
    void paintEvent(QPaintEvent *event);
    void closeEvent(QCloseEvent *);
    QGraphicsScene *scene;


private:
    Ui::GameScreen *ui;
    World *w;
    void keyPressEvent(QKeyEvent *k);
    void keyReleaseEvent(QKeyEvent *k);
};

#endif // GAMESCREEN_H
