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
    QLabel *background;
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
        gameButton->setGeometry(QRect(10, 210, 71, 31));
        infoButton = new QPushButton(centralWidget);
        infoButton->setObjectName(QStringLiteral("infoButton"));
        infoButton->setGeometry(QRect(90, 210, 71, 31));
        label_title = new QLabel(centralWidget);
        label_title->setObjectName(QStringLiteral("label_title"));
        label_title->setGeometry(QRect(0, 120, 181, 151));
        label_title->setTextFormat(Qt::RichText);
        label_title->setPixmap(QPixmap(QString::fromUtf8("../resources/New folder/Bomberman_title3.png")));
        label_title->setScaledContents(true);
        background = new QLabel(centralWidget);
        background->setObjectName(QStringLiteral("background"));
        background->setGeometry(QRect(0, 0, 401, 261));
        background->setPixmap(QPixmap(QString::fromUtf8("../resources/New folder/bomberman-generation.jpg")));
        background->setScaledContents(true);
        MainWindow->setCentralWidget(centralWidget);
        background->raise();
        label_title->raise();
        gameButton->raise();
        infoButton->raise();
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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
