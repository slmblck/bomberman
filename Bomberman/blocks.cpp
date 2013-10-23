#include "blocks.h"
#include <iostream>

Blocks::Blocks()
{
    Blocks::xPos = 0;
    Blocks::yPos = 0;

}

Blocks::Blocks(int x, int y)
{
    Blocks::xPos = x;
    Blocks::yPos = y;
}

Blocks::~Blocks()
{
    std::cout << "Block has been destroyed" << std::endl;
}
void Blocks::update(int x, int y)
{
    xPos = x;
    yPos = y;
}

int Blocks::getX()
{
    return xPos;
}

int Blocks::getY()
{
    return yPos;
}

void Blocks::setX(int x)
{
    this->xPos = x;
}

void Blocks::setY(int y)
{
    this->yPos = y;
}

void Blocks::draw(int x, int y, QPainter *painter)
{
    painter->setBrush(Qt::gray);
    painter->drawRect(x,y,10,10);
}
