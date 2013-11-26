#include "gamescreen.h"
#include "mainwindow.h"
#include "ui_gamescreen.h"
#include <QKeyEvent>
#include <QTimer>
#include <QGraphicsScene>

/*! \brief A Gamescreen Object
 * This class creates the game UI and sets up background music */
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

    //QPixmap *background = new QPixmap(":/Floor_Small.png");
    scene->setBackgroundBrush(Qt::gray);
    //scene->setBackgroundBrush(background->);


    int i = 0;
    int j =0;
    w = new World();



    Character *player1 = w->getPlayer1();
    Character *player2 = w->getPlayer2();
    Block* currentblock;
    int wSize = w->getWorldsize();
    for(i = 0; i < wSize; i++){
        for(j = 0; j < wSize; j++){
            currentblock = w->getTestBlock(i,j);
            if(currentblock)
            {
                scene->addItem(currentblock);
            }
        }
    }

    scene->addItem(player1);
    scene->addItem(player2);
    player1->grabKeyboard();
    player2->grabKeyboard();
}

/*! \brief Closing window event
 *  \param Takes in a QCloseEvent AKA window close;
 *  \bug cannot restart main menu music
 * Closes the current Game and stops music from playing */
void GameScreen::closeEvent(QCloseEvent *bar)
{
    backgroundMusicGame->stop();
    ((MainWindow*)this->parent())->playAgain();
    bar->accept();
    delete gameList;
    delete backgroundMusicGame;
    delete w;
}

/*! \brief A Gamescreen Destructor
 * Destroys the UI and Removes the music player and music list for the game. */
GameScreen::~GameScreen()
{
    delete ui;
}


void GameScreen::paintEvent(QPaintEvent *event)
{
    QPainter p;
    p.begin(this);

    p.end();
}

/*! \brief Keyhandler
 *  \param Takes in a keystroke
 * Uses the keyHandler to interpret what should happen in the UI  */
void GameScreen::keyPressEvent(QKeyEvent *event)
{
    //std::cout << event->key() << std::endl;
    w->keyHandler(event->key());
}

void GameScreen::keyReleaseEvent(QKeyEvent *event)
{
    //std::cout << event->key() << std::endl;
}
