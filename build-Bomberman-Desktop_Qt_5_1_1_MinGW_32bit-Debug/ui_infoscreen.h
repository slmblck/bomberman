/********************************************************************************
** Form generated from reading UI file 'infoscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOSCREEN_H
#define UI_INFOSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoScreen
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QDialog *InfoScreen)
    {
        if (InfoScreen->objectName().isEmpty())
            InfoScreen->setObjectName(QStringLiteral("InfoScreen"));
        InfoScreen->resize(400, 369);
        label = new QLabel(InfoScreen);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 50, 81, 21));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(InfoScreen);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 280, 351, 20));
        label_5 = new QLabel(InfoScreen);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(160, 130, 71, 16));
        layoutWidget = new QWidget(InfoScreen);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 210, 221, 53));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_3->addWidget(label_9);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_3->addWidget(label_10);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_3->addWidget(label_11);

        label_12 = new QLabel(InfoScreen);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(160, 80, 55, 16));
        label_13 = new QLabel(InfoScreen);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(51, 100, 328, 16));
        widget = new QWidget(InfoScreen);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(60, 310, 272, 34));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        widget1 = new QWidget(InfoScreen);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(80, 150, 223, 53));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget1);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(widget1);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(widget1);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_2->addWidget(label_8);


        retranslateUi(InfoScreen);

        QMetaObject::connectSlotsByName(InfoScreen);
    } // setupUi

    void retranslateUi(QDialog *InfoScreen)
    {
        InfoScreen->setWindowTitle(QApplication::translate("InfoScreen", "Dialog", 0));
        label->setText(QApplication::translate("InfoScreen", "Bombster", 0));
        label_2->setText(QApplication::translate("InfoScreen", "Created by: Dariusz Jedralski, Roberto Torres, Piotr Gorski, Wen Zhao", 0));
        label_5->setText(QApplication::translate("InfoScreen", "How to play:", 0));
        label_9->setText(QApplication::translate("InfoScreen", "Player 2:", 0));
        label_10->setText(QApplication::translate("InfoScreen", "Character is moved by the arrow keys", 0));
        label_11->setText(QApplication::translate("InfoScreen", "Bombs are dropped using the '0' key ", 0));
        label_12->setText(QApplication::translate("InfoScreen", "Game Goal:", 0));
        label_13->setText(QApplication::translate("InfoScreen", "Destroy the other player using your bombs without harming yourself", 0));
        label_3->setText(QApplication::translate("InfoScreen", "Menu Music: Ronald Jenkees - Fifteen Fifty", 0));
        label_4->setText(QApplication::translate("InfoScreen", "Game Music: Lindstr\303\270m - Vos-sako-rv  (Fred Falke Remix)", 0));
        label_6->setText(QApplication::translate("InfoScreen", "Player 1:", 0));
        label_7->setText(QApplication::translate("InfoScreen", "Character is moved by the 'W', 'A', 'S', 'D' keys", 0));
        label_8->setText(QApplication::translate("InfoScreen", "Bombs are dropped using the 'K' key", 0));
    } // retranslateUi

};

namespace Ui {
    class InfoScreen: public Ui_InfoScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOSCREEN_H
