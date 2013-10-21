#ifndef WALLS_H
#define WALLS_H
#include "allIncludes.h"

class Blocks;
class Walls
{
public:
    Walls(int x, int y);
    void onCreate(int x, int y);
    void update();
};

#endif // WALLS_H
