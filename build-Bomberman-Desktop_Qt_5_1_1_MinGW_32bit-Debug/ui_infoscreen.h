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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoScreen
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_13;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label_12;
    QLabel *label_2;
    QLabel *label_6;

    void setupUi(QDialog *InfoScreen)
    {
        if (InfoScreen->objectName().isEmpty())
            InfoScreen->setObjectName(QStringLiteral("InfoScreen"));
        InfoScreen->resize(400, 369);
        layoutWidget = new QWidget(InfoScreen);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 30, 338, 301));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1, Qt::AlignHCenter);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 3, 0, 1, 1, Qt::AlignHCenter);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);


        gridLayout->addLayout(verticalLayout, 9, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setIndent(10);

        verticalLayout_3->addWidget(label_9, 0, Qt::AlignLeft);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_3->addWidget(label_10, 0, Qt::AlignHCenter);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_3->addWidget(label_11, 0, Qt::AlignHCenter);


        gridLayout->addLayout(verticalLayout_3, 7, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_2->addWidget(label_7, 0, Qt::AlignHCenter);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_2->addWidget(label_8, 0, Qt::AlignHCenter);


        gridLayout->addLayout(verticalLayout_2, 6, 0, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 1, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 8, 0, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setIndent(10);

        gridLayout->addWidget(label_6, 5, 0, 1, 1, Qt::AlignLeft);


        retranslateUi(InfoScreen);

        QMetaObject::connectSlotsByName(InfoScreen);
    } // setupUi

    void retranslateUi(QDialog *InfoScreen)
    {
        InfoScreen->setWindowTitle(QApplication::translate("InfoScreen", "Dialog", 0));
        label->setText(QApplication::translate("InfoScreen", "Bombster", 0));
        label_13->setText(QApplication::translate("InfoScreen", "Destroy the other player using your bombs without harming yourself", 0));
        label_3->setText(QApplication::translate("InfoScreen", "Menu Music: Ronald Jenkees - Fifteen Fifty", 0));
        label_4->setText(QApplication::translate("InfoScreen", "Game Music: Lindstr\303\270m - Vos-sako-rv  (Fred Falke Remix)", 0));
        label_9->setText(QApplication::translate("InfoScreen", "Player 2:", 0));
        label_10->setText(QApplication::translate("InfoScreen", "Character is moved by the arrow keys", 0));
        label_11->setText(QApplication::translate("InfoScreen", "Bombs are dropped using the '/' key ", 0));
        label_7->setText(QApplication::translate("InfoScreen", "Character is moved by the 'W', 'A', 'S', 'D' keys", 0));
        label_8->setText(QApplication::translate("InfoScreen", "Bombs are dropped using the 'H' key", 0));
        label_5->setText(QApplication::translate("InfoScreen", "How to play:", 0));
        label_12->setText(QApplication::translate("InfoScreen", "Game Goal:", 0));
        label_2->setText(QApplication::translate("InfoScreen", "Created by: Dariusz Jedralski, Roberto Torres, Piotr Gorski, Wen Zhao", 0));
        label_6->setText(QApplication::translate("InfoScreen", "Player 1:", 0));
    } // retranslateUi

};

namespace Ui {
    class InfoScreen: public Ui_InfoScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOSCREEN_H
