#ifndef BLOCKS_H
#define BLOCKS_H
#include <iostream>
class Blocks
{
protected:
    int xPos;
    int yPos;
public:
    Blocks();
    Blocks(int x, int y);
    ~Blocks();
    virtual void onCreate(int x, int y);
    virtual void update(int x, int y);
};

#endif // BLOCKS_H
