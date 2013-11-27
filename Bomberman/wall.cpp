#include "wall.h"

Wall::Wall(int x, int y)
{
    xPos = x;
    yPos = y;
    std::cout << "Wall has been created" << std::endl;
}

Wall::~Wall()
{
    std::cout << "Wall has been destroyed" << std::endl;
}

void Wall::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(xPos, yPos, 30, 30, QPixmap(":Wall_Nondestructable_Small.png"));
}

QRectF Wall::boundingRect() const
{
    return QRectF(xPos, yPos, 30, 30);
}

int Wall::type() const
{
    return 7;
}
