#include "character.h"
#include <iostream>

Character::Character(int x, int y, int numBombs, int player)
{
    Character::xPos = x;
    Character::yPos = y;
    Character::numBombs = numBombs;
    Character::playerID = player;
    Character::explosionsize = 2;
}
Character::~Character()
{
    std::cout<<"character is gone" << std::endl;
}

void Character::move(int key)
{

}

void Character::pickedUp(int item)
{

}

void Character::dropBomb(int key)
{

}

void Character::draw(QPainter *painter)
{
    painter->setBrush(Qt::red);
    painter->drawRect(400,300,50,50);
}

int Character::getPlayerID()
{
    return this->playerID;
}
