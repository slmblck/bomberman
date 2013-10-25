#include "Block.h"
#include <iostream>

Block::Block(int x, int y, int type)
{
    Block::xPos = x;
    Block::yPos = y;
    Block::blockType = type;
}

Block::~Block()
{
    std::cout << "Block has been destroyed" << std::endl;
}
void Block::update(int x, int y)
{
    xPos = x;
    yPos = y;
}

Block& Block::operator =(const Block& b)
{
    xPos = b.xPos;
    yPos = b.yPos;
    blockType = b.blockType;
    return *this;
}

int Block::getX()
{
    return this->xPos;
}

int Block::getY()
{
    return this->yPos;
}

int Block::getBlockType()
{
    return this->blockType;
}

void Block::setX(int x)
{
    this->xPos = x;
}

void Block::setY(int y)
{
    this->yPos = y;
}

void Block::setBlockType(int type)
{
    this->blockType = type;
}

void Block::draw(QPainter *painter, int size)
{
    painter->setBrush(Qt::gray);
    painter->drawRect(xPos,yPos,size,size);
}
