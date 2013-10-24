#ifndef WALLS_H
#define WALLS_H
#include "blocks.h"

class Walls: Blocks
{
public:
    Walls(int x=0, int y=0);
    void draw(QPainter *painter);

};

#endif // WALLS_H
