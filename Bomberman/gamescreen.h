#ifndef GAMESCREEN_H
#define GAMESCREEN_H

#include <QMainWindow>

namespace Ui {
class GameScreen;
}

class GameScreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameScreen(QWidget *parent = 0);
    ~GameScreen();

private:
    Ui::GameScreen *ui;
};

#endif // GAMESCREEN_H
