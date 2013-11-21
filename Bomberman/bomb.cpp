#include "bomb.h"
#include <iostream>
#include <vector>
#include <QTimer>
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

Bomb::~Bomb()
{
    std::cout << "bomb has been destoryed" << std::endl;
}

QRectF Bomb::boundingRect() const
{
    return QRectF(this->xPos, this->yPos, 30, 30);
}

void Bomb::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
   this->setOpacity(0.5);
   painter->drawPixmap(xPos, yPos, 30, 30, QPixmap(":/bomb_unexploded_pixel.png"));
}

void Bomb::explode()
{
    std::cout <<"Boom!" << std::endl;
    QGraphicsScene *scene = this->scene();

    for(unsigned int i = 0; i < explosionVector.size(); i++)
    {
        scene->addItem(explosionVector[i]);
    }
    /*
    for(unsigned int i = 0; i < explosionVector.size(); i++)
    {
        scene->removeItem(explosionVector[i]);
    }
    */
}
