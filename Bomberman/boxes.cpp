#include "boxes.h"
#include <iostream>
boxes::boxes(int x, int y)
{
    xPos = x;
    yPos = y;
    std::cout << "box has been created" << std::endl;

}

/*! \brief The boxes destructor
 * Removes a box and prints to console whenever that happens */
boxes::~boxes()
{
    std::cout << "box has been deleted" << std::endl;
}

void boxes::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(xPos, yPos, 30, 30, QPixmap(":/Crate_Small.png"));
}

QRectF boxes::boundingRect() const
{
    return QRectF(xPos, yPos, 30, 30);
}
