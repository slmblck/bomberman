#include "bomb.h"
#include <iostream>
#include <vector>
#include <QTimer>
Bomb::Bomb(int x, int y, int explosionSize)
{
    Bomb::xPos = x;
    Bomb::yPos = y;
    Bomb::explosionSize = explosionSize;
}

Bomb::~Bomb()
{
    std::cout << "bomb has been destoryed" << std::endl;
}

QRectF Bomb::boundingRect() const
{
    return QRectF(xPos, yPos, 30, 30);
}

void Bomb::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    explosion *center = new explosion(xPos,yPos);
    explosionVector.push_back(center);
    for(int i = 0; i < explosionSize; i++)
    {
        explosion *left = new explosion(xPos - (i*30),yPos);
        explosion *right = new explosion(xPos + (i*30),yPos);
        explosion *up = new explosion(xPos, yPos + (i*30));
        explosion *down = new explosion(xPos, yPos - (i*30));
        explosionVector.push_back(left);
        explosionVector.push_back(right);
        explosionVector.push_back(up);
        explosionVector.push_back(down);
        //std::cout << " " <<std::endl;
    }

    painter->setBrush(Qt::black);
    painter->drawRect(xPos, yPos, 30, 30);
}

void Bomb::explode(QGraphicsScene *scene)
{
    std::cout <<"Boom!" << std::endl;

    /*painter->setBrush(Qt::yellow);
    painter->drawRect(xPos, yPos, 30, 30);*/

    for(unsigned int i = 0; i < explosionVector.size(); i++)
    {
        scene->addItem(explosionVector.at(i));
    }
    /*
    for(unsigned int i = 0; i < explosionVector.size(); i++)
    {
        scene->removeItem(explosionVector.at(i));
    }
    */
}
