#ifndef BLOCKS_H
#define BLOCKS_H
#include <QPainter>
class Blocks
{
protected:
    int xPos;
    int yPos;
public:
    Blocks(int x=0, int y=0);
    ~Blocks();
    virtual void update(int x, int y);
    virtual void draw(QPainter *painter, int size);
    virtual Blocks& operator=(const Blocks& b);
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
};

#endif // BLOCKS_H
