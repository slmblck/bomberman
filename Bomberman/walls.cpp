#include "walls.h"
#include <iostream>
Walls::Walls(int x, int y)
{
    Blocks::xPos = x;
    Blocks::yPos = y;
}

void Walls::draw(QPainter *painter)
{
    painter->fillRect(400,300,100,100,Qt::green);
}

