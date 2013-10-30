#ifndef Block_H
#define Block_H
#include <QPainter>
#include <QImage>
class Block
{
protected:
    int xPos;
    int yPos;
public:
    Block(int x=0, int y=0);
    ~Block();
    virtual void update(int x, int y);
    virtual void draw(QPainter *painter, const int size);
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);

};

#endif // Block_H
