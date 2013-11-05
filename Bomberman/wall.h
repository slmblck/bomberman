#ifndef WALL_H
#define WALL_H
#include "block.h"
#include <iostream>

class Wall : public Block
{
public:
    Wall(int x =0, int y=0);
    ~Wall();
    void draw(QPainter *painter, const int size);
};

#endif // WALL_H
