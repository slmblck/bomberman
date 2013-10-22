#ifndef WALLS_H
#define WALLS_H
#include "blocks.h"

class Walls: Blocks
{
public:
    Walls(int x, int y);
    void onCreate(int x, int y);

};

#endif // WALLS_H
