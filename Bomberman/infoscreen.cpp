#include "infoscreen.h"
#include "ui_infoscreen.h"

InfoScreen::InfoScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InfoScreen)
{
    ui->setupUi(this);
}

/*! \brief The InfoScreen destructor
 * Deletes the InfoScreen UI*/
InfoScreen::~InfoScreen()
{
    delete ui;
}
