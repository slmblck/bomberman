#include "gamescreen.h"
#include "ui_gamescreen.h"
#include <QKeyEvent>
#include <QTimer>
#include <QGraphicsScene>

GameScreen::GameScreen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameScreen)
{

    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    int i = 0;
    int j =0;
    w = new World();

<<<<<<< HEAD
    //Character *player = w->getPlayer();
    Block* currentblock;
    int size = w->getBlocksize();
    int wSize = w->getWorldsize();
    for(i = 0; i < wSize; i++){
        for(j = 0; j < wSize; j++){
            currentblock = w->getTestBlock(i,j);
            //currentblock->draw(&p,size);
            scene->addItem(currentblock);

        }
    }

    //scene->addItem(player);

=======
    gameList= new QMediaPlaylist;
    gameList->addMedia(QUrl::fromLocalFile("C:\\Users\\D\\Documents\\GitHub\\bomberman\\Bomberman\\Lindstrom.mp3"));
    gameList->setPlaybackMode(QMediaPlaylist::Loop);
    backgroundMusicGame = new QMediaPlayer(this);
    backgroundMusicGame->setPlaylist(gameList);
    backgroundMusicGame->play();

    scene->addItem(w);
    Character *player = w->getPlayer();
    scene->addItem(player);
    /*
>>>>>>> 06bb81a4ed4733f2b5a3f6f08783ddf261b52269
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
    delete gameList;
    delete backgroundMusicGame;
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
<<<<<<< HEAD
            currentblock->draw(&p,size);

=======
            currentblock->paint(&p,NULL,this);
>>>>>>> 06bb81a4ed4733f2b5a3f6f08783ddf261b52269
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
