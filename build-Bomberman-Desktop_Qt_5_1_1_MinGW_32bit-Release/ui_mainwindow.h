/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *gameButton;
    QPushButton *infoButton;
    QLabel *label_title;
    QLabel *Bomb_logo;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gameButton = new QPushButton(centralWidget);
        gameButton->setObjectName(QStringLiteral("gameButton"));
        gameButton->setGeometry(QRect(50, 140, 81, 71));
        infoButton = new QPushButton(centralWidget);
        infoButton->setObjectName(QStringLiteral("infoButton"));
        infoButton->setGeometry(QRect(250, 140, 81, 71));
        label_title = new QLabel(centralWidget);
        label_title->setObjectName(QStringLiteral("label_title"));
        label_title->setGeometry(QRect(80, 10, 231, 121));
        label_title->setTextFormat(Qt::RichText);
        label_title->setPixmap(QPixmap(QString::fromUtf8("../resources/New folder/Bomberman_title.png")));
        label_title->setScaledContents(true);
        Bomb_logo = new QLabel(centralWidget);
        Bomb_logo->setObjectName(QStringLiteral("Bomb_logo"));
        Bomb_logo->setGeometry(QRect(150, 140, 81, 71));
        Bomb_logo->setPixmap(QPixmap(QString::fromUtf8("../resources/bomb_unexploded_pixel.png")));
        Bomb_logo->setScaledContents(true);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        gameButton->setText(QApplication::translate("MainWindow", "Play Game!", 0));
        infoButton->setText(QApplication::translate("MainWindow", "Info", 0));
        label_title->setText(QString());
        Bomb_logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
