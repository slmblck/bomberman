#include "character.h"
#include <iostream>
#include <QTimer>

/*! \brief The Character constructer
 *  \param The x coordinate of where the player currently is.
 *  \param The y coordinate of where the player currently is.
 *  \param The initial number of bombs the character may have.
 *  \param The playerID.
 *  this constructor creates a character given a position in the world,
 *the amount of bombs the character can have, and the playerID */
Character::Character(int x, int y, int numBombs, int player, QPixmap image)
{
    Character::xPos = x;
    Character::yPos = y;
    Character::numBombs = numBombs;
    Character::playerID = player;
    Character::explosionsize = 2;
    Character::charImage = image;
}

/*! \brief The Character destructor
 * Removes a Character and prints to console whenever that happens */
Character::~Character()
{
    std::cout<<"Character has been deleted" << std::endl;
}

/// \brief moves a character Up a 1/2 block.
void Character::moveUp()
{
    //update();
    this->moveBy(0, -15);
    //yPos = yPos - 15;
    //this->moveBy(0, 15);
    QGraphicsScene *scene = this->scene();
    QList<QGraphicsItem*> collisions = scene->collidingItems(this);
    for(int i = 0; i < collisions.size(); i++)
    {
        if(this->collidesWithItem(collisions.value(i)))
        {

            QGraphicsObject *item = collisions.value(i)->toGraphicsObject();
            if(item->type() == 2){
                continue;
                //if(this->isObscuredBy(item)){
                //    continue;
                //}
            }

            this->moveBy(0, 15);
            /*
            QList<QGraphicsItem*> collisions1 = scene->collidingItems(this);
            for(int j = 0; j < collisions1.size(); j++)
            {
                if(this->collidesWithItem(collisions1.value(j)))
                {

                    item = collisions.value(j)->toGraphicsObject();
                    if(item->type() == 2){
                        break;
                    }

                    this->moveBy(0, 7.5);
                }
            }
            */
        }
    }
    //this->xPos = this->x();
    //this->yPos = this->y();
}

/// \brief Moves a Character down a 1/2 block.
void Character::moveDown()
{

    this->moveBy(0, 15);
    QGraphicsScene *scene = this->scene();
    QList<QGraphicsItem*> collisions = scene->collidingItems(this);
    for(int i = 0; i < collisions.size(); i++)
    {
        if(this->collidesWithItem(collisions.value(i)))
        {

            QGraphicsObject *item = collisions.value(i)->toGraphicsObject();
            if(item->type() == 2){
                continue;
            }

            //QGraphicsObject *item = collisions.value(i)->toGraphicsObject();

            //this->setVisible(false);
            this->moveBy(0, -15);
            /*
            QList<QGraphicsItem*> collisions1 = scene->collidingItems(this);
            for(int j = 0; j < collisions1.size(); j++)
            {
                if(this->collidesWithItem(collisions1.value(j)))
                {

                    item = collisions.value(j)->toGraphicsObject();
                    if(item->type() == 2){
                        break;
                    }

                    this->moveBy(0, -7.5);
                }
            }
            */
        }
    }
    //yPos = yPos + 15;
    //this->moveBy(0, -15);
    //this->xPos = this->x();
    //this->yPos = this->y();
}

/// \brief Moves a Character Left a 1/2 block.
void Character::moveLeft()
{
    //update();
    this->moveBy(-15, 0);
    //xPos = xPos - 15;
    //this->moveBy(15, 0);
    QGraphicsScene *scene = this->scene();
    QList<QGraphicsItem*> collisions = scene->collidingItems(this);
    for(int i = 0; i < collisions.size(); i++)
    {
        if(this->collidesWithItem(collisions.value(i)))
        {

            QGraphicsObject *item = collisions.value(i)->toGraphicsObject();
            if(item->type() == 2){
                continue;
            }

            //this->setVisible(false);
            this->moveBy(15, 0);
            /*
            QList<QGraphicsItem*> collisions1 = scene->collidingItems(this);
            for(int j = 0; j < collisions1.size(); j++)
            {
                if(this->collidesWithItem(collisions1.value(j)))
                {

                    item = collisions.value(j)->toGraphicsObject();
                    if(item->type() == 2){
                        break;
                    }

                    this->moveBy(7.5, 0);
                }
            }
            */
        }
    }
    //this->xPos = this->x();
    //this->yPos = this->y();
}

/// \brief Moves a Character Right a 1/2 block.
void Character::moveRight()
{
    //update();
    this->moveBy(15, 0);
    //xPos = xPos + 15;
    //this->moveBy(-15, 0);
    QGraphicsScene *scene = this->scene();
    QList<QGraphicsItem*> collisions = scene->collidingItems(this);
    for(int i = 0; i < collisions.size(); i++)
    {
        if(this->collidesWithItem(collisions.value(i)))
        {

            QGraphicsObject *item = collisions.value(i)->toGraphicsObject();

            if(item->type() == 2){
                continue;
            }

            //this->setVisible(false);
            this->moveBy(-15, 0);
            /*
            QList<QGraphicsItem*> collisions1 = scene->collidingItems(this);
            for(int j = 0; j < collisions1.size(); j++)
            {
                if(this->collidesWithItem(collisions1.value(j)))
                {

                    item = collisions.value(j)->toGraphicsObject();
                    if(item->type() == 2){
                        break;
                    }

                    this->moveBy(-7.5, 0);
                }
            }
            */
        }
    }
    //this->xPos = this->x();
    //this->yPos = this->y();
}

void Character::pickedUp(int item)
{

}

/*! \brief Allows the Character to drop a Bomb.
 * Places a bomb in the Game where the Character currently is placed and starts the ountdown to the explosion */
void Character::dropBomb()
{
    QGraphicsScene *scene = this->scene();
    Bomb *b;
    if(this->numBombs != 0)
    {
        if(this->playerID == 1)
        {
            b = new Bomb((this->x() + 30),(this->y() + 30),(this->explosionsize));
        }
        else if(this->playerID == 2)
        {
            b = new Bomb((this->x() + 510),(this->y() + 510),(this->explosionsize));
        }
        //Bomb *b = new Bomb(this->xPos,this->yPos,(this->explosionsize));
        scene->addItem(b);
        this->numBombs -= 1;


        QTimer::singleShot(3000,Qt::CoarseTimer,b,SLOT(explode()));
        this->numBombs += 1;
    }
}

/*! \brief gets a Player ID
 *  \return Returns the Character's playerID */
int Character::getPlayerID()
{
    return this->playerID;
}

void Character::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(this->xPos, this->yPos, 30, 30, this->charImage);
}

QRectF Character::boundingRect() const
{
    return QRectF(xPos, yPos, 30, 30);
}

int Character::type() const
{
    return 4;
}
