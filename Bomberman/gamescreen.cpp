#include "gamescreen.h"
#include "ui_gamescreen.h"
#include <QKeyEvent>
#include <QTimer>

GameScreen::GameScreen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameScreen)
{

    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    w = new World();
    scene->addItem(w);
    Character *player = w->getPlayer();
    scene->addItem(player);
    /*
    QTimer* timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(loop()));
    timer->start(20);
    */
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

    /*
    w->paint(&p,NULL,this);
    Character *player = w->getPlayer();
    Block* currentblock;
    int size = w->getblockSize();
    int blocks = w->getnumBlocks();

    for(i = 0; i < blocks; i++){
        for(j = 0; j < blocks; j++){
            currentblock = w->getTestBlock(i,j);
            currentblock->paint(&p,NULL,this);
        }
    }

    player->paint(&p,NULL,this);
    */

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
