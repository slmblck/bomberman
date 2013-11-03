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

void Character::moveUp()
{
    yPos -= 20;
}

void Character::moveDown()
{
    yPos += 20;
}

void Character::moveLeft()
{
    xPos -= 20;
}

void Character::moveRight()
{
    xPos += 20;
}

void Character::pickedUp(int item)
{

}

void Character::dropBomb()
{
    /*
    Bomb *b = new Bomb(xPos,yPos,this->explosionsize);
    QPainter *p;
    b->draw(p);
    b->explode();
    */
}

void Character::draw(QPainter *painter)
{
    painter->setBrush(Qt::red);
    painter->drawRect(xPos,yPos,30,30);
}

int Character::getPlayerID()
{
    return this->playerID;
}
