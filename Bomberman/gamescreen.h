#ifndef GAMESCREEN_H
#define GAMESCREEN_H

#include <QMainWindow>
#include "world.h"
namespace Ui {
class GameScreen;
}

class GameScreen : public QMainWindow
{

    Q_OBJECT
public slots:
    void loop();


public:
    explicit GameScreen(QWidget *parent = 0);
    ~GameScreen();
    void paintEvent(QPaintEvent *event);


private:
    Ui::GameScreen *ui;
    World *w;
};

#endif // GAMESCREEN_H
