#include "bomb.h"
#include "mainwindow.h"
#include <iostream>
#include <vector>
#include <QTimer>

/*! \brief places bomb
 *  \param x position of the bomb
 *  \param y position of the bomb
 *  \param the size of blocks that the explosion should be
 * This class creates an explosion given the location and the size of the bomb  */
Bomb::Bomb(int x, int y, int explosionSize)
{
    Bomb::xPos = x;
    Bomb::yPos = y;
    Bomb::explosionSize = explosionSize;

    explosion *center = new explosion(x,y,QPixmap(":/Explosion_Center_Small.png"));
    explosionVector.push_back(center);

    for(int i = 1; i <= explosionSize; i++)
    {
        explosion *left = new explosion(x - (i*30),y, QPixmap(":/Explosion_Horizontal_Small.png"));
        explosion *right = new explosion(x + (i*30),y, QPixmap(":/Explosion_Horizontal_Small.png"));
        explosion *up = new explosion(x, y + (i*30), QPixmap(":/Explosion_Vertical_Small.png"));
        explosion *down = new explosion(x, y - (i*30), QPixmap(":/Explosion_Vertical_Small.png"));
        explosionVector.push_back(left);
        explosionVector.push_back(right);
        explosionVector.push_back(up);
        explosionVector.push_back(down);
    }
    //std::cout << explosionVector.size() << std::endl;
}

/*! \brief The Bomb destructor
 * Removes a Bomb and prints to console whenever that happens */
Bomb::~Bomb()
{
    std::vector<explosion*>().swap(explosionVector);
    std::cout << "Bomb has been destroyed" << std::endl;
}

/*! \brief Creates a bomb area
 * Bounds a bombpiece to a size of 30*30 pixels */
QRectF Bomb::boundingRect() const
{
    return QRectF(this->xPos, this->yPos, 30, 30);
}

/*! \brief Displays a bomb onscreen
 *  \param painter pointer
 *  \param constant QStyleOptionGraphicsItem option pointer
 *  \param QWidget pointer */
void Bomb::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
   painter->drawPixmap(xPos, yPos, 30, 30, QPixmap(":/bomb_unexploded_transparent.png"));
}

/*! \brief The Bomb explodes
 * Prints to console and removes bomb image with an explosion for a predetermined time */
void Bomb::explode()
{
    bool sound=true;
    //sound = ((MainWindow*)this->parent())->getSFXSound();
    std::cout <<"Boom!" << std::endl;
    QGraphicsScene *scene = this->scene();
    if(sound){
        QSound::play("D:\\Users\\Piotr\\Documents\\GitHub\\bomberman\\Bomberman\\Boom.wav");
    }

    for(unsigned int i = 0; i < explosionVector.size(); i++)
    {
        scene->addItem(explosionVector[i]);
    }

    QTimer::singleShot(1000,this,SLOT(explode2()));
}

/*! \brief 2nd part of Explosion
 * Is called by the explode() class in order to remove the blocks and bomb */
void Bomb::explode2()
{
    QGraphicsScene *scene;
    scene = this->scene();
    for(unsigned int i = 0; i < explosionVector.size(); i++){
        QList<QGraphicsItem*> collisions = scene->collidingItems(explosionVector[i]);
        for(int j = 0; j < collisions.size(); j++){
        if(explosionVector[i]->collidesWithItem(collisions.value(j)))
        {
            //std::cout << "Got Here!" << std::endl;

            QGraphicsObject *item = collisions.value(j)->toGraphicsObject();
            if(item->type() == 5){
                scene->removeItem(item);
            }
            if(item->type() == 2){
                ((Bomb*)item)->explode();
            }
            if(item->type() == 4){
                Character* character = qobject_cast<Character*>(item);
                character->incNumDeaths();
            }
        }
        }
    }

    for(unsigned int i = 0; i < explosionVector.size(); i++)
    {
        scene->removeItem(explosionVector[i]);
        delete explosionVector[i];
    }
    erase();
}

/*! \brief Deletes the bomb */
void Bomb::erase()
{
    QGraphicsScene *scene = this->scene();
    scene->removeItem(this);
    delete this;
}

/*! \brief returns 2 */
int Bomb::type() const
{
    return 2;
}
