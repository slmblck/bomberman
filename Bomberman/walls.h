#ifndef WALLS_H
#define WALLS_H
#include "blocks.h"
#include <iostream>
class Blocks;
class Walls: Blocks
{
public:
    Walls(int x, int y);
    void onCreate(int x, int y);
    void update();

};

#endif // WALLS_H
