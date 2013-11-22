#include "dwall.h"
#include <iostream>

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

void dWall::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(xPos, yPos, 30, 30, QPixmap(":/Wall_Destructable_Small.png"));
}

QRectF dWall::boundingRect() const
{
    return QRectF(xPos, yPos, 30, 30);
}
