#include "dwall.h"
#include <iostream>

/*! \brief Destructable wall constructor
 *  \param the x Position in the World
 *  \param the y Position in the World
 * Given Coordinates, this constuctor creates a destructable Wall and prints to console whenever that happens */
dWall::dWall(int x, int y)
{
    xPos = x;
    yPos = y;
    std::cout << "Destructable wall has been created" << std::endl;

}

/*! \brief The Destructable Wall destructor
 * Removes a Destructable Wall from the game and prints to console whenever that happens */
dWall::~dWall()
{
      std::cout << "Destructable wall has been destroyed" << std::endl;
}

/*! \brief Displays a destructable wall onscreen
 *  \param painter pointer
 *  \param constant QStyleOptionGraphicsItem option pointer
 *  \param QWidget pointer */
void dWall::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(xPos, yPos, 30, 30, QPixmap(":/Wall_Destructable_Small.png"));
}

QRectF dWall::boundingRect() const
{
    return QRectF(xPos, yPos, 30, 30);
}

int dWall::type() const
{
    return 5;
}
