#include "gamescreen.h"
#include "ui_gamescreen.h"
#include <QKeyEvent>
#include <QTimer>

GameScreen::GameScreen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameScreen)
{

    ui->setupUi(this);

    w = new World();

    QTimer* timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(loop()));
    timer->start(20);
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
    Character *player = w->getPlayer();
    Block* currentblock;
    int size = w->getBlocksize();
    /*
    for(i = 0; i < 20; i++){
        for(j = 0; j < 20; j++){
            if(i == 0 || j == 0 || i == 19 || j == 19){
               currentblock = w->getBlock(i,j);
               currentblock.draw(&p,size);
            }
        }
    }
    */
    for(i = 0; i < 20; i++){
        for(j = 0; j < 20; j++){
            currentblock = w->getTestBlock(i,j);
            currentblock->draw(&p,size);
        }
    }

    player->draw(&p);

    p.end();
}

void GameScreen::keyPressEvent(QKeyEvent *event)
{
    //std::cout << event->key() << std::endl;
    w->keyHandler(event->key());
}

void GameScreen::keyReleaseEvent(QKeyEvent *event)
{
    //std::cout << event->key() << std::endl;
}


