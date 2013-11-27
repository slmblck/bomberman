#ifndef WALL_H
#define WALL_H
#include "block.h"
#include <iostream>

class Wall : public Block
{
public:
    Wall(int x =0, int y=0);
    ~Wall();
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;
    int type() const;
};

#endif // WALL_H
