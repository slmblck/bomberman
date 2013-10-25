#ifndef WALLS_H
#define WALLS_H
#include "blocks.h"

class Walls: Blocks
{
public:
    Walls(int x, int y);
    Walls();
    void draw(QPainter *painter);

};

#endif // WALLS_H
