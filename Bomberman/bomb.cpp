#include "bomb.h"
#include <iostream>

Bomb::Bomb(int x, int y, int explosionSize)
{
    Bomb::xPos = x;
    Bomb::yPos = y;
    Bomb::explosionSize = explosionSize;
}

Bomb::~Bomb()
{
    std::cout << "bomb has been destoryed" << std::endl;
}

void Bomb::draw(QPainter *painter)
{
    painter->setBrush(Qt::black);
    painter->drawRect(Bomb::xPos,Bomb::yPos,30,30);
}

void Bomb::explode()
{
    std::cout <<"Boom!" << std::endl;
}
