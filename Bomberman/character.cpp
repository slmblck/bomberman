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

/*! \brief The Character destructor
 * Removes a Character and prints to console whenever that happens */
Character::~Character()
{
    std::cout<<"character is gone" << std::endl;
}

void Character::moveUp()
{
    //update();
    this->moveBy(0, -15);
    //yPos = yPos - 20;
    //this->moveBy(0, 20);
    //this->moveBy(0, 20);
    QGraphicsScene *scene = this->scene();
    QList<QGraphicsItem*> collisions = scene->collidingItems(this);
    for(int i = 0; i < collisions.size(); i++){
        if(this->collidesWithItem(collisions.value(i))){
            //this->setVisible(false);
            this->moveBy(0, 10);
            QList<QGraphicsItem*> collisions1 = scene->collidingItems(this);
            for(int j = 0; j < collisions1.size(); j++){
                if(this->collidesWithItem(collisions1.value(i))){
                    this->moveBy(0, 10);
                }
            }
        }
    }
    //this->setVisible(true);
    //this->setPos(xPos,yPos);
}

void Character::moveDown()
{
    //update();
    this->moveBy(0, 15);
    QGraphicsScene *scene = this->scene();
    QList<QGraphicsItem*> collisions = scene->collidingItems(this);
    for(int i = 0; i < collisions.size(); i++){
        if(this->collidesWithItem(collisions.value(i))){
            //this->setVisible(false);
            this->moveBy(0, -10);
            QList<QGraphicsItem*> collisions1 = scene->collidingItems(this);
            for(int j = 0; j < collisions1.size(); j++){
                if(this->collidesWithItem(collisions1.value(i))){
                    this->moveBy(0, -10);
                }
            }
        }
    }
    //yPos = yPos + 20;
    //this->moveBy(0, -20);
    //this->setVisible(false);
    //QGraphicsScene *scene = this->scene();
    //QGraphicsObject *item = scene->itemAt(this->x(), this->y(), QGraphicsObject::transform())->toGraphicsObject();
    //QGraphicsObject *item1 = scene->itemAt(this->x(), this->y() + 10, QGraphicsObject::transform())->toGraphicsObject();
    //QGraphicsObject *item2 = scene->itemAt(this->x(), this->y() + 20, QGraphicsObject::transform())->toGraphicsObject();
    //Wall *block;
    //if((block = dynamic_cast<Wall*>(item))){
    //    this->moveBy(0, -30);
    //} else if ((block = dynamic_cast<Wall*>(item1))) {
    //    this->moveBy(0, -10);
    //} else if ((block = dynamic_cast<Wall*>(item2))) {
    //    this->moveBy(0, -20);
    //}
    //this->setVisible(true);
    //this->setVisible(false);
    //this->setVisible(true);
    //this->setPos(xPos,yPos);
}

void Character::moveLeft()
{
    //update();
    this->moveBy(-15, 0);
    //xPos = xPos - 20;
    //this->moveBy(20, 0);
    //this->moveBy(0, 20);
    QGraphicsScene *scene = this->scene();
    QList<QGraphicsItem*> collisions = scene->collidingItems(this);
    for(int i = 0; i < collisions.size(); i++){
        if(this->collidesWithItem(collisions.value(i))){
            //this->setVisible(false);
            this->moveBy(10, 0);
            QList<QGraphicsItem*> collisions1 = scene->collidingItems(this);
            for(int j = 0; j < collisions1.size(); j++){
                if(this->collidesWithItem(collisions1.value(i))){
                    this->moveBy(10, 0);
                }
            }
        }
    }
    //this->setPos(xPos,yPos);
}

void Character::moveRight()
{
    //update();
    this->moveBy(15, 0);
    //xPos = xPos + 20;
    //this->moveBy(-20, 0);
    //this->moveBy(0, 20);
    QGraphicsScene *scene = this->scene();
    QList<QGraphicsItem*> collisions = scene->collidingItems(this);
    for(int i = 0; i < collisions.size(); i++){
        if(this->collidesWithItem(collisions.value(i))){
            //this->setVisible(false);
            this->moveBy(-10, 0);
            QList<QGraphicsItem*> collisions1 = scene->collidingItems(this);
            for(int j = 0; j < collisions1.size(); j++){
                if(this->collidesWithItem(collisions1.value(i))){
                    this->moveBy(-10, 0);
                }
            }
        }
    }
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

    //QTimer::singleShot(1000,b,SLOT(explode()));

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
