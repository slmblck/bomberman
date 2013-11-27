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
#include <QtWidgets/QLabel>
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
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GameScreen)
    {
        if (GameScreen->objectName().isEmpty())
            GameScreen->setObjectName(QStringLiteral("GameScreen"));
        GameScreen->resize(800, 600);
        QFont font;
        font.setPointSize(10);
        GameScreen->setFont(font);
        centralwidget = new QWidget(GameScreen);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 10, 570, 570));
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(635, 20, 121, 20));
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(600, 50, 61, 21));
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(610, 80, 61, 16));
        label_3->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(610, 100, 71, 16));
        label_4->setFont(font);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(600, 180, 61, 16));
        label_5->setFont(font);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(610, 210, 46, 13));
        label_6->setFont(font);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(610, 230, 81, 16));
        GameScreen->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GameScreen);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
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
        label->setText(QApplication::translate("GameScreen", "Bombster", 0));
        label_2->setText(QApplication::translate("GameScreen", "Player 1:", 0));
        label_3->setText(QApplication::translate("GameScreen", "Kills: 0", 0));
        label_4->setText(QApplication::translate("GameScreen", "Deaths: 0", 0));
        label_5->setText(QApplication::translate("GameScreen", "Player 2:", 0));
        label_6->setText(QApplication::translate("GameScreen", "Kills: 0", 0));
        label_7->setText(QApplication::translate("GameScreen", "Deaths: 0", 0));
    } // retranslateUi

};

namespace Ui {
    class GameScreen: public Ui_GameScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMESCREEN_H
