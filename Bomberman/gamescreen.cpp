#include "gamescreen.h"
#include "mainwindow.h"
#include "ui_gamescreen.h"
#include <QKeyEvent>
#include <QTimer>
#include <QGraphicsScene>

/*! \brief A Gamescreen Object
 * This class creates the game UI and sets up background music  
 * \bug Tester needs to put in full file path of Lindstrom.mp3 into class due to QT's limitations */
GameScreen::GameScreen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameScreen){

    ui->setupUi(this);

    scene = new QGraphicsScene(0, 0, 570, 570, this);
    scene->setSceneRect(0,0,570,570);
    ui->graphicsView->setScene(scene);

    //QPixmap *background = new QPixmap(":/Floor_Small.png");
    scene->setBackgroundBrush(Qt::gray);
    setWindowTitle(tr("Bombster"));
    gameStart();
    p1Points = 0;
    p2Points = 0;
    s = new QString();
    s2 = new QString();
    s->setNum(p1Points);
    s2->setNum(p2Points);
    ui->player1points->setText(*s);
    ui->player2points->setText(*s2);

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(checkDeaths()));
    timer->start(60);
}

/*! \brief Closing window event
 *  \param Takes in a QCloseEvent AKA window close;
 * Closes the current Game and stops music from playing */
void GameScreen::closeEvent(QCloseEvent *bar)
{
    timer->stop();
    gameEnd();
    ((MainWindow*)this->parent())->playAgain();
    bar->accept();

}

/*! \brief A Gamescreen Destructor
 * Destroys the UI and Removes the music player and music list for the game. */
GameScreen::~GameScreen()
{
    delete ui;
}

/// \brief Overrides paintEvent
void GameScreen::paintEvent(QPaintEvent *event)
{
    QPainter p;
    p.begin(this);

    p.end();
}

/// \brief death checker to see score and winner
void GameScreen::checkDeaths()
{
    Character *player1 = w->getPlayer1();
    Character *player2 = w->getPlayer2();

    if(player1->isAlive() == false)
    {
        this->p2Points +=1;
        s2->setNum(p2Points);
        ui->player2points->setText(*s2);
        player1->setAlive(true);

        ui->graphicsView->hide();
        gameEnd();
        timer->stop();
        //QTimer::singleShot(1000,this,SLOT(gameStart()));
        gameStart();
        timer->start(60);

    }
    if(player2->isAlive() == false)
    {
        this->p1Points +=1;
        s->setNum(p1Points);
        ui->player1points->setText(*s);
        player2->setAlive(true);

        ui->graphicsView->hide();
        gameEnd();
        timer->stop();
        //QTimer::singleShot(1000,this,SLOT(gameStart()));
        gameStart();
        timer->start(60);
    }

}

/// \brief creates players and starts game and sets up background music
void GameScreen::gameStart()
{
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

    gameList= new QMediaPlaylist;
    if((p2Points > 3)||(p1Points > 3)){
        gameList->addMedia(QUrl::fromLocalFile("C:\\Users\\R\\Documents\\GitHub\\bomberman\\Bomberman\\GuileTheme.mp3"));
    }
    else{
        gameList->addMedia(QUrl::fromLocalFile("C:\\Users\\R\\Documents\\GitHub\\bomberman\\Bomberman\\Lindstrom.mp3"));
    }
    gameList->setPlaybackMode(QMediaPlaylist::Loop);
    backgroundMusicGame = new QMediaPlayer(this);
    backgroundMusicGame->setPlaylist(gameList);
    backgroundMusicGame->play();

    scene->addItem(player1);
    scene->addItem(player2);
    player1->grabKeyboard();
    player2->grabKeyboard();

    ui->graphicsView->show();
}

/// \brief ends a game and stops music from playing
void GameScreen::gameEnd()
{
    Character *player1 = w->getPlayer1();
    Character *player2 = w->getPlayer2();
    Block* currentblock;
    int wSize = w->getWorldsize();
    for(int i = 0; i < wSize; i++){
        for(int j = 0; j < wSize; j++){
            currentblock = w->getTestBlock(i,j);
            if(currentblock)
            {
                scene->removeItem(currentblock);
            }
        }
    }

    scene->removeItem(player1);
    scene->removeItem(player2);
    player1->ungrabKeyboard();
    player2->ungrabKeyboard();
    backgroundMusicGame->stop();
    delete gameList;
    delete backgroundMusicGame;
    delete w;
}

/// deteriorated code
void GameScreen::keyPressEvent(QKeyEvent *event)
{
    //std::cout << event->key() << std::endl;
    //w->keyHandler(event->key());
}

/*! \brief Keyhandler
 *  \param Takes in a keystroke
 * Uses the keyHandler to interpret what should happen in the UI  */
void GameScreen::keyReleaseEvent(QKeyEvent *event)
{
    std::cout << event->key() << std::endl;
    w->keyHandler(event->key());
}

/*! \brief Sets the volume in Game
 *  \param int volume*/
void GameScreen::setVol(int vol)
{
    backgroundMusicGame->setVolume(vol);
}
