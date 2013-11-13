#include "character.h"
#include <iostream>

Character::Character(int x, int y, int numBombs, int player)
{
    Character::xPos = x;
    Character::yPos = y;
    Character::numBombs = numBombs;
    Character::playerID = player;
    Character::explosionsize = 2;
    setFlag(QGraphicsItem::ItemIsMovable,false);
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
    Bomb *b = new Bomb(xPos,yPos,this->explosionsize);
    //QPainter p;
    //p.begin();
    //p.setBrush(Qt::black);
    //p.drawRect(xPos + 10, yPos + 10, 20, 20);
    //b->draw(&p);
    b->explode();
    //p.end();
}

void Character::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::red);
    painter->drawRect(xPos,yPos,30,30);
}

QRectF Character::boundingRect() const
{
    return QRectF(-300,-300,600,600);
}

int Character::getPlayerID()
{
    return this->playerID;
}
