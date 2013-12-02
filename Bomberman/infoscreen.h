#ifndef INFOSCREEN_H
#define INFOSCREEN_H

#include <QDialog>

namespace Ui {
class InfoScreen;
}

/*! \brief The InfoScreen class
 *         of Bombster used to give information and credits about the game.
 *
 *  Inherits QDialog from Qt
 */
class InfoScreen : public QDialog
{
    Q_OBJECT

public:
    explicit InfoScreen(QWidget *parent = 0);
    ~InfoScreen();

private:
    Ui::InfoScreen *ui;
};

#endif // INFOSCREEN_H
