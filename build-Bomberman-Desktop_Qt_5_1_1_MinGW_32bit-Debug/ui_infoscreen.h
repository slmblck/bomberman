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

QT_BEGIN_NAMESPACE

class Ui_InfoScreen
{
public:

    void setupUi(QDialog *InfoScreen)
    {
        if (InfoScreen->objectName().isEmpty())
            InfoScreen->setObjectName(QStringLiteral("InfoScreen"));
        InfoScreen->resize(400, 300);

        retranslateUi(InfoScreen);

        QMetaObject::connectSlotsByName(InfoScreen);
    } // setupUi

    void retranslateUi(QDialog *InfoScreen)
    {
        InfoScreen->setWindowTitle(QApplication::translate("InfoScreen", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class InfoScreen: public Ui_InfoScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOSCREEN_H
