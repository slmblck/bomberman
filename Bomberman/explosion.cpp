#include "explosion.h"
#include <iostream>
#include <QPainter>
explosion::explosion(int x, int y)
{
    explosion::xPos = x;
    explosion::yPos = y;
}

explosion::~explosion()
{
    std::cout << "explosion has been deleted" << std::endl;
}

QRectF explosion::boundingRect() const
{
    return QRectF(xPos, yPos, 30, 30);
}

void explosion::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::yellow);
    painter->drawRect(xPos, yPos, 30, 30);
}
