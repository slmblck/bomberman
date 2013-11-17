#ifndef GAMESCREEN_H
#define GAMESCREEN_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QAbstractGraphicsShapeItem>
#include "world.h"
#include <QMediaPlayer>
#include <QMediaPlaylist>

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
    void loop();


public:
    explicit GameScreen(QWidget *parent = 0);
    ~GameScreen();
    void paintEvent(QPaintEvent *event);
    QGraphicsScene *scene;

private:
    Ui::GameScreen *ui;
    World *w;
    void keyPressEvent(QKeyEvent *k);
    void keyReleaseEvent(QKeyEvent *k);
    QGraphicsScene *scene;

};

#endif // GAMESCREEN_H
