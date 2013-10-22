#include "bomb.h"
#include <iostream>

Bomb::Bomb()
{
    Bomb::xPos = 0;
    Bomb::yPos = 0;
    Bomb::explosionSize = 0;
}
Bomb::Bomb(int x, int y, int explosionSize)
{
    Bomb::xPos = x;
    Bomb::yPos = y;
    Bomb::explosionSize = explosionSize;
    Bomb::onCreate(x,y);
}

Bomb::~Bomb()
{
    std::cout << "bomb has been destoryed" << std::endl;
}

void Bomb::onCreate(int x, int y)
{

}

void Bomb::explode()
{

}
