#include "mainwindow.h"
#include "ui_mainwindow.h"


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

MainWindow::~MainWindow()
{
    delete ui;
    delete mainList;
    delete backgroundMusicMain;
}

void MainWindow::on_gameButton_clicked()
{

    gameScreen = new GameScreen;
    backgroundMusicMain->stop();
    gameScreen->setVisible(true);
    gameScreen->show();
}

void MainWindow::on_infoButton_clicked()
{
    infoScreen = new InfoScreen;
    infoScreen->show();
}

void MainWindow::playAgain()
{
    backgroundMusicMain->play();
}
