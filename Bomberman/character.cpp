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
    QGraphicsItem::moveBy(0, -20);
    //yPos -= 20;
}

void Character::moveDown()
{
    //update();
    QGraphicsItem::moveBy(0, 20);
    //yPos += 20;
}

void Character::moveLeft()
{
    //update();
    QGraphicsItem::moveBy(-20, 0);
    //xPos -= 20;
}

void Character::moveRight()
{
    //update();
    QGraphicsItem::moveBy(20, 0);
    //xPos += 20;
}

void Character::pickedUp(int item)
{

}

void Character::dropBomb(QGraphicsScene *scene)
{
    Bomb *b = new Bomb(xPos,yPos,this->explosionsize);

    scene->addItem(b);

    QTimer timer;


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
