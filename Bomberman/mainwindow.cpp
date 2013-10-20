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
    //GameScreen gameScreen;
    //gameScreen.show();
    //gameScreen = new GameScreen;
    //gameScreen->setVisible(true);
    //gameScreen->show();
}

void MainWindow::on_gameButton_released()
{
    gameScreen = new GameScreen;
    gameScreen->setFocus();
    gameScreen->show();
    //gameScreen->setVisible(true);
}

void MainWindow::on_pushButton_released()
{
    infoScreen = new InfoScreen;
    infoScreen->show();
}
