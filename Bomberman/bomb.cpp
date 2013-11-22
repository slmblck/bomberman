#include "bomb.h"
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

    explosion *center = new explosion(x,y);
    explosionVector.push_back(center);
    for(int i = 1; i <= explosionSize; i++)
    {
        explosion *left = new explosion(x - (i*30),y);
        explosion *right = new explosion(x + (i*30),y);
        explosion *up = new explosion(x, y + (i*30));
        explosion *down = new explosion(x, y - (i*30));
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
    std::cout << "bomb has been destroyed" << std::endl;
}

/*! \brief Creates a bomb area
 * Bounds a bomb to a size of 30*30 pixels */
QRectF Bomb::boundingRect() const
{
    return QRectF(this->xPos, this->yPos, 30, 30);
}

/// \brief
void Bomb::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
   painter->drawPixmap(xPos, yPos, 30, 30, QPixmap(":/bomb_unexploded_transparent.png"));
}

/*! \brief The Bomb explodes
 * Prints to console and removes bomb image with an explosion for a predetermined time */
void Bomb::explode()
{
    std::cout <<"Boom!" << std::endl;
    QGraphicsScene *scene = this->scene();
    QSound::play("C:\\Users\\R\\Documents\\GitHub\\bomberman\\Bomberman\\Boom.wav");

    for(unsigned int i = 0; i < explosionVector.size(); i++)
    {
        scene->addItem(explosionVector[i]);
    }

    QTimer::singleShot(1000,this,SLOT(explode2()));
    //explode2();
}

void Bomb::explode2()
{
    QGraphicsScene *scene;
    scene = this->scene();
    for(unsigned int i = 0; i < explosionVector.size(); i++)
    {
        scene->removeItem(explosionVector[i]);
        delete explosionVector[i];
    }

}
