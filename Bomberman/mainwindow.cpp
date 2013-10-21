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
    gameScreen = new GameScreen;
    gameScreen->setVisible(true);
    gameScreen->show();
}

void MainWindow::on_infoButton_clicked()
{
    infoScreen = new InfoScreen;
    infoScreen->show();
}
