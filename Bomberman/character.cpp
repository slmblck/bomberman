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
    yPos -= 10;
    //update();
    QGraphicsItem::moveBy(0, -10);
}

void Character::moveDown()
{
    yPos += 10;
    //update();
    QGraphicsItem::moveBy(0, 10);
}

void Character::moveLeft()
{
    xPos -= 10;
    //update();
    QGraphicsItem::moveBy(-10, 0);
}

void Character::moveRight()
{
    xPos += 10;
    //update();
    QGraphicsItem::moveBy(10, 0);
}

void Character::pickedUp(int item)
{

}

void Character::dropBomb()
{

    Bomb *b = new Bomb(xPos,yPos,this->explosionsize);
    QPainter p;// = new QPainter();
    //p.begin(this);
    //p->setBrush(Qt::black);
    //p->drawRect(xPos + 10, yPos + 10, 20, 20);
    b->draw(&p);
    b->explode();

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

void Character::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::red);
    painter->drawRect(xPos, yPos, 30, 30);
}

QRectF Character::boundingRect() const
{
    return QRectF(xPos, yPos, 30, 30);
}
