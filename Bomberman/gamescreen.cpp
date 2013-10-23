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

    int i;
    int j;

    w->drawWorld(&p);
    Character *player = w->getPlayer(w);
    player->draw(&p);
    Blocks currentblock;

    for(i = 0; i < 20; i++){
        for(j = 0; j < 20; j++){
            if(i == 0 || j == 0 || i == 19 || j == 19){
               currentblock = w->getBlock(w,i,j);
               currentblock.draw(i*10,j*10, &p);
            }
        }
    }
    //currentblock.draw(0,0, &p);

    p.end();
}
