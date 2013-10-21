#ifndef BLOCKS_H
#define BLOCKS_H
#include "allIncludes.h"
class Blocks
{
protected:
    int xPos;
    int yPos;
public:
    Blocks(int x, int y);
    ~Blocks();
    virtual void onCreate(int x, int y);
    virtual void update() = 0;
};

#endif // BLOCKS_H
