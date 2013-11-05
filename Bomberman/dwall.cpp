#include "dwall.h"
#include <iostream>

dWall::dWall(int x, int y)
{
    xPos = x;
    yPos = y;
    std::cout << "destructable wall has been created" << std::endl;

}

dWall::~dWall()
{
      std::cout << "destructable wall has been destroyed" << std::endl;
}

void dWall::draw(QPainter *painter, const int size)
{
    QImage dwall(":/Wall_Destructable_Small.png");
    int x = xPos;
    int y = yPos;
    int s = size;
    painter->drawImage(x,y,dwall,0,0,30,30,Qt::AutoColor);
}
