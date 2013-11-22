#include "mainwindow.h"
#include "ui_mainwindow.h"

/*! \brief A MainWindow Object
 * This class creates the Menu UI and sets up background music */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mainList= new QMediaPlaylist;
    mainList->addMedia(QUrl::fromLocalFile("C:\\Users\\D\\Documents\\GitHub\\bomberman\\Bomberman\\FifteenFifty.mp3"));
    mainList->setPlaybackMode(QMediaPlaylist::Loop);
    backgroundMusicMain = new QMediaPlayer(this);
    backgroundMusicMain->setPlaylist(mainList);
    backgroundMusicMain->play();
}

/*! \brief A MainWindow Destructor
 * Destroys the UI and Removes the music player and music list for the menu. */
MainWindow::~MainWindow()
{
    delete ui;
    delete mainList;
    delete backgroundMusicMain;
}

/*! \brief Sets up the Game
 * Initializes and sets up a GameScreen. Also stops the main menu music */
void MainWindow::on_gameButton_clicked()
{

    gameScreen = new GameScreen;
    backgroundMusicMain->stop();
    gameScreen->setVisible(true);
    gameScreen->show();
}

/*! \brief Sets up the InfoScreen
 * Initializes and sets up an InfoScreen */
void MainWindow::on_infoButton_clicked()
{
    infoScreen = new InfoScreen;
    infoScreen->show();
}

/*! \brief Restarts the menu music
 *  \bug this is currently not being called
 * Starts up the main menu music. This is to be used after Game music is stopped.  */
void MainWindow::playAgain()
{
    backgroundMusicMain->play();
}
