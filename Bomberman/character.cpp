#include "character.h"
#include <iostream>
#include <QTimer>
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
    //update();
    this->moveBy(0, -20);
    yPos = yPos - 20;
    this->moveBy(0, 20);
    //this->setPos(xPos,yPos);
}

void Character::moveDown()
{
    //update();
    this->moveBy(0, 20);
    yPos = yPos + 20;
    this->moveBy(0, -20);
    //this->setPos(xPos,yPos);
}

void Character::moveLeft()
{
    //update();
    this->moveBy(-20, 0);
    xPos = xPos - 20;
    this->moveBy(20, 0);
    //this->setPos(xPos,yPos);
}

void Character::moveRight()
{
    //update();
    this->moveBy(20, 0);
    xPos = xPos + 20;
    this->moveBy(-20, 0);
    //this->setPos(xPos,yPos);
}

void Character::pickedUp(int item)
{

}

void Character::dropBomb()
{
    Bomb *b = new Bomb(this->xPos,this->yPos,this->explosionsize);
    QGraphicsScene *scene = this->scene();
    scene->addItem(b);
    //QTimer::singleShot(1000,b,SLOT(explode(scene)));
    b->explode();
    scene->removeItem(b);
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
