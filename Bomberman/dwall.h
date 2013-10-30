#ifndef DWALL_H
#define DWALL_H
#include "block.h"
class dWall : public Block
{
public:
    dWall(int x, int y);
    void draw(QPainter *painter, const int size);
};

#endif // DWALL_H
