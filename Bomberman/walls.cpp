#include "walls.h"
#include <iostream>
Walls::Walls(int x, int y)
{
    Blocks::xPos = x;
    Blocks::yPos = y;
}

Walls::Walls(){
    Blocks::xPos = 0;
    Blocks::yPos = 0;
}

void Walls::draw(QPainter *painter)
{
    painter->setBrush(Qt::green);
    painter->drawRect(0,0,10,10);
}

