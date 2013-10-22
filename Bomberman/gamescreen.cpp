#include "gamescreen.h"
#include "ui_gamescreen.h"
#include <QKeyEvent>
#include <QTimer>

GameScreen::GameScreen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameScreen)
{

    ui->setupUi(this);

    w = new World;

    QTimer* timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(loop()));
    timer->start(60);
}

void GameScreen::loop(){
    repaint();
}

GameScreen::~GameScreen()
{
    delete ui;
}

void GameScreen::paintEvent(QPaintEvent *event)
{
    QPainter p;
    p.begin(this);
    w->drawWorld(&p);

    //w->player->draw(&p);
    p.end();
}
