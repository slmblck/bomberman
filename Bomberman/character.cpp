#include "character.h"
#include <iostream>

Character::Character()
{
    Character::xPos = 0;
    Character::yPos = 0;
    Character::numBombs = 0;
    Character::playerID = -1;
}

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

void Character::move(int key, Character *c)
{

}

void Character::pickedUp(int item, Character *c)
{

}

void Character::dropBomb(int key, Character *c)
{

}

void Character::draw(QPainter *painter)
{
    painter->setBrush(Qt::red);
    painter->drawRect(400,300,100,100);
}

int Character::getPlayerID(Character *c)
{
    return c->playerID;
}
