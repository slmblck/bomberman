#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_gameButton_clicked()
{
    //QMediaPlayer player;
    //player.setVolume(100);
    //player.setMedia(QUrl::fromLocalFile("C:\\Users\\D\\Documents\\GitHub\\bomberman\\Bomberman\\FifteenFifty.mp3"));
    //player.play();
    gameScreen = new GameScreen;
    gameScreen->setVisible(true);
    gameScreen->show();
}

void MainWindow::on_infoButton_clicked()
{
    infoScreen = new InfoScreen;
    infoScreen->show();
}
