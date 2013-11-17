#ifndef DWALL_H
#define DWALL_H
#include "block.h"
class dWall : public Block
{
public:
    dWall(int x, int y);
    ~dWall();
    void draw(QPainter *painter, const int size);
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;
};

#endif // DWALL_H
