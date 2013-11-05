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

QT_BEGIN_NAMESPACE

class Ui_InfoScreen
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *InfoScreen)
    {
        if (InfoScreen->objectName().isEmpty())
            InfoScreen->setObjectName(QStringLiteral("InfoScreen"));
        InfoScreen->resize(400, 174);
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
        label_2->setGeometry(QRect(30, 90, 351, 20));

        retranslateUi(InfoScreen);

        QMetaObject::connectSlotsByName(InfoScreen);
    } // setupUi

    void retranslateUi(QDialog *InfoScreen)
    {
        InfoScreen->setWindowTitle(QApplication::translate("InfoScreen", "Dialog", 0));
        label->setText(QApplication::translate("InfoScreen", "Bombster", 0));
        label_2->setText(QApplication::translate("InfoScreen", "Created by: Dariusz Jedralski, Roberto Torres, Piotr Gorski, Wen Zhao", 0));
    } // retranslateUi

};

namespace Ui {
    class InfoScreen: public Ui_InfoScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOSCREEN_H
