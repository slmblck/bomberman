#include "wall.h"

Wall::Wall(int x, int y)
{
    xPos = x;
    yPos = y;
    std::cout << "Wall has been created" << std::endl;
}

void Wall::draw(QPainter *painter, int size)
{
    QImage wall(":/Wall_Nondestructable_Small.png");
    int x = xPos;
    int y = yPos;
    int s = size;
    painter->drawImage(x,y,wall,0,0,30,30,Qt::AutoColor);
}
