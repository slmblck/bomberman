#include "explosion.h"
#include <iostream>
#include <QPainter>
explosion::explosion(int x, int y,QPixmap image)
{
    explosion::xPos = x;
    explosion::yPos = y;
    explosion::explosionImage = image;
}

/*! \brief The Explosion destructor
 * Removes an explosion and prints to console whenever that happens */
explosion::~explosion()
{
    std::cout << "Explosion has been deleted" << std::endl;
}

QRectF explosion::boundingRect() const
{
    return QRectF(xPos, yPos, 30, 30);
}

void explosion::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(xPos, yPos, 30, 30, explosionImage);
}

int explosion::type() const
{
    return 6;
}
