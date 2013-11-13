#include "boxes.h"
#include <iostream>
boxes::boxes(int x, int y)
{
    xPos = x;
    yPos = y;
    std::cout << "box has been created" << std::endl;
    setFlag(QGraphicsItem::ItemIsMovable,false);
}

boxes::~boxes()
{
    std::cout << "box has been deleted" << std::endl;
}

void boxes::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QImage crate(":/Crate_Small.png");
    int x = xPos;
    int y = yPos;
    painter->drawImage(x,y,crate,0,0,30,30,Qt::AutoColor);
}
