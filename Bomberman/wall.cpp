#include "wall.h"

Wall::Wall(int x, int y)
{
    xPos = x;
    yPos = y;
    setFlag(QGraphicsItem::ItemIsMovable,false);
    std::cout << "Wall has been created" << std::endl;
}

Wall::~Wall()
{
    std::cout << "Wall has been destroyed" << std::endl;
}

void Wall::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QImage wall(":/Wall_Nondestructable_Small.png");
    int x = xPos;
    int y = yPos;
    painter->drawImage(x,y,wall,0,0,30,30,Qt::AutoColor);
}
