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
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionMusic;
    QAction *actionSFX;
    QWidget *centralWidget;
    QPushButton *gameButton;
    QPushButton *infoButton;
    QLabel *label;
    QPushButton *quitButton;
    QMenuBar *menuBar;
    QMenu *menuOptions;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(408, 314);
        actionMusic = new QAction(MainWindow);
        actionMusic->setObjectName(QStringLiteral("actionMusic"));
        actionMusic->setCheckable(true);
        actionMusic->setChecked(true);
        actionSFX = new QAction(MainWindow);
        actionSFX->setObjectName(QStringLiteral("actionSFX"));
        actionSFX->setCheckable(true);
        actionSFX->setChecked(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gameButton = new QPushButton(centralWidget);
        gameButton->setObjectName(QStringLiteral("gameButton"));
        gameButton->setGeometry(QRect(170, 150, 71, 31));
        infoButton = new QPushButton(centralWidget);
        infoButton->setObjectName(QStringLiteral("infoButton"));
        infoButton->setGeometry(QRect(170, 190, 71, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 411, 291));
        label->setPixmap(QPixmap(QString::fromUtf8("../resources/New folder/bomberman-background2.png")));
        label->setScaledContents(true);
        quitButton = new QPushButton(centralWidget);
        quitButton->setObjectName(QStringLiteral("quitButton"));
        quitButton->setGeometry(QRect(170, 230, 71, 31));
        MainWindow->setCentralWidget(centralWidget);
        label->raise();
        gameButton->raise();
        infoButton->raise();
        quitButton->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 408, 21));
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName(QStringLiteral("menuOptions"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuOptions->menuAction());
        menuOptions->addAction(actionMusic);
        menuOptions->addAction(actionSFX);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionMusic->setText(QApplication::translate("MainWindow", "Music", 0));
        actionSFX->setText(QApplication::translate("MainWindow", "SFX", 0));
        gameButton->setText(QApplication::translate("MainWindow", "Play Game!", 0));
        infoButton->setText(QApplication::translate("MainWindow", "Info", 0));
        label->setText(QString());
        quitButton->setText(QApplication::translate("MainWindow", "Quit", 0));
        menuOptions->setTitle(QApplication::translate("MainWindow", "Options", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
