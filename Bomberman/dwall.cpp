#include "dwall.h"

dWall::dWall(int x, int y)
{
    xPos = x;
    yPos = y;
}

void dWall::draw(QPainter *painter, const int size)
{
    QImage dwall(":/Wall_Destructable_Small.png");
    int x = xPos;
    int y = yPos;
    int s = size;
    painter->drawImage(x,y,dwall,0,0,30,30,Qt::AutoColor);
}
