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

    gameList= new QMediaPlaylist;
    gameList->addMedia(QUrl::fromLocalFile("C:\\Users\\R\\Documents\\GitHub\\bomberman\\Bomberman\\Lindstrom.mp3"));
    gameList->setPlaybackMode(QMediaPlaylist::Loop);
    backgroundMusicGame = new QMediaPlayer(this);
    backgroundMusicGame->setPlaylist(gameList);
    backgroundMusicGame->play();

    scene = new QGraphicsScene(0, 0, 570, 570, this);
    scene->setSceneRect(0,0,570,570);
    ui->graphicsView->setScene(scene);

    QPixmap *background = new QPixmap(":/Floor_Small.png");
    scene->setBackgroundBrush(Qt::gray);
    //scene->setBackgroundBrush(background->);


    int i = 0;
    int j =0;
    w = new World();



    Character *player = w->getPlayer();
    Block* currentblock;
    int wSize = w->getWorldsize();
    for(i = 0; i < wSize; i++){
        for(j = 0; j < wSize; j++){
            currentblock = w->getTestBlock(i,j);
            scene->addItem(currentblock);

        }
    }

    scene->addItem(player);

    //QTimer* timer = new QTimer(this);
}

void GameScreen::closeEvent(QCloseEvent *bar)
{
    backgroundMusicGame->stop();
    //playAgain();
    bar->accept();
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
