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

}

void Blocks::draw(QPainter *painter)
{
    painter->setBrush(Qt::gray);
    painter->drawRect(40,30,10,10);
}
