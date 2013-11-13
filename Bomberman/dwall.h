#ifndef DWALL_H
#define DWALL_H
#include "block.h"
class dWall : public Block
{
public:
    dWall(int x, int y);
    ~dWall();
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // DWALL_H
