#ifndef BLOCKS_H
#define BLOCKS_H
#include <QPainter>
class Blocks
{
protected:
    int xPos;
    int yPos;
public:
    Blocks();
    Blocks(int x, int y);
    ~Blocks();
    virtual void update(int x, int y);
    virtual void draw(int x, int y, QPainter *painter);
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
};

#endif // BLOCKS_H
