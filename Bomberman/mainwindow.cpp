#include "mainwindow.h"
#include "ui_mainwindow.h"

/*! \brief A MainWindow Object
 * This class creates the Menu UI and sets up background music
 * \bug Tester needs to put in full file path of FifteenFifty.mp3 into class due to QT's limitations */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap originalPixmap = QPixmap(":/mainwindow.png");
    QPalette palette;
    palette.setBrush((this)->backgroundRole(), QBrush(originalPixmap));
    (this)->setPalette(palette);

    mainList= new QMediaPlaylist;
    mainList->addMedia(QUrl::fromLocalFile("C:\\Users\\R\\Documents\\GitHub\\bomberman\\Bomberman\\FifteenFifty.mp3"));
    mainList->setPlaybackMode(QMediaPlaylist::Loop);
    backgroundMusicMain = new QMediaPlayer(this);
    backgroundMusicMain->setPlaylist(mainList);
    backgroundMusicMain->play();
    gameVol = 100;
    sfxSound = true;
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

    gameScreen = new GameScreen(this);
    gameScreen->setVol(gameVol);
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
 * Starts up the main menu music. This is to be used after Game music is stopped.  */
void MainWindow::playAgain()
{
    backgroundMusicMain->play();
}

/// \brief logic for Background music checkbox in option menu
/// logic for menu and game combined
void MainWindow::on_actionMusic_triggered()
{
    if(backgroundMusicMain->volume()!=0)
    {
            backgroundMusicMain->setVolume(0);
            gameVol = 0;
    }
    else
    {
        backgroundMusicMain->setVolume(100);
        gameVol = 100;
    }
}

/// \brief logic for Sound effects checkbox in option menu
void MainWindow::on_actionSFX_triggered()
{
    if (sfxSound == true)
    {
        sfxSound=false;
    }
    else
    {
        sfxSound=true;
    }
}

/// \brief Quits the game
void MainWindow::on_quitButton_clicked()
{
    exit(0);
}

/// \brief Gets whether or not Soundeffects will be played in game
/// \return bool sfxSound
bool MainWindow::getSFXSound()
{
    return sfxSound;
}
