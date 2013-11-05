#ifndef BOXES_H
#define BOXES_H
#include "block.h"
class boxes : public Block
{
protected: int type;
public:
    boxes(int x =0, int y = 0);
    ~boxes();
    void draw(QPainter *painter, const int size);
};

#endif // BOXES_H
