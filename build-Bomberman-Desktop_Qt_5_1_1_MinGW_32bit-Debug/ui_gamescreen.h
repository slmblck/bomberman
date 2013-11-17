/********************************************************************************
** Form generated from reading UI file 'gamescreen.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMESCREEN_H
#define UI_GAMESCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameScreen
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GameScreen)
    {
        if (GameScreen->objectName().isEmpty())
            GameScreen->setObjectName(QStringLiteral("GameScreen"));
        GameScreen->resize(900, 720);
        centralwidget = new QWidget(GameScreen);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
<<<<<<< HEAD
        graphicsView->setGeometry(QRect(10, 10, 781, 551));
=======
        graphicsView->setGeometry(QRect(10, 10, 800, 600));
>>>>>>> 06bb81a4ed4733f2b5a3f6f08783ddf261b52269
        GameScreen->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GameScreen);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 900, 21));
        GameScreen->setMenuBar(menubar);
        statusbar = new QStatusBar(GameScreen);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        GameScreen->setStatusBar(statusbar);

        retranslateUi(GameScreen);

        QMetaObject::connectSlotsByName(GameScreen);
    } // setupUi

    void retranslateUi(QMainWindow *GameScreen)
    {
        GameScreen->setWindowTitle(QApplication::translate("GameScreen", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class GameScreen: public Ui_GameScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMESCREEN_H
