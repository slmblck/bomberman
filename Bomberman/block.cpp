#include "Block.h"
#include <iostream>

Block::Block(int x, int y)
{
    Block::xPos = x;
    Block::yPos = y;
    std::cout << "Block has been created" << std::endl;
}

Block::~Block()
{
    std::cout << "Block has been destroyed" << std::endl;
}
void Block::update(int x, int y)
{
    this->xPos = x;
    this->yPos = y;
}

int Block::getX()
{
    return this->xPos;
}

int Block::getY()
{
    return this->yPos;
}

void Block::setX(int x)
{
    this->xPos = x;
}

void Block::setY(int y)
{
    this->yPos = y;
}

void Block::draw(QPainter *painter, int size)
{
    QImage floor(":/Floor_Small.png");
    int x = xPos;
    int y = yPos;
    int s = size;
    painter->drawImage(x,y,floor,0,0,30,30,Qt::AutoColor);
}
