#include "blocks.h"
#include <iostream>

Blocks::Blocks(int x, int y)
{
    Blocks::xPos = x;
    Blocks::yPos = y;
}

Blocks::Blocks(){
    Blocks::xPos = 0;
    Blocks::yPos = 0;
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

Blocks& Blocks::operator=(const Blocks& b)
{
    xPos = b.xPos;
    yPos = b.yPos;
    return *this;
}

int Blocks::getX()
{
    return this->xPos;
}

int Blocks::getY()
{
    return this->yPos;
}

void Blocks::setX(int x)
{
    this->xPos = x;
}

void Blocks::setY(int y)
{
    this->yPos = y;
}

void Blocks::draw(QPainter *painter, int size)
{
    painter->setBrush(Qt::gray);
    painter->drawRect(xPos,yPos,size,size);
}
