#ifndef Block_H
#define Block_H
#include <QPainter>
#include <QImage>
class Block
{
protected:
    int xPos;
    int yPos;
    int blockType;
public:
    Block(int x=0, int y=0, int type = 0);
    ~Block();
    void update(int x, int y, int type);
    void draw(QPainter *painter, const int size);
    Block& operator=(const Block& b);
    int getX();
    int getY();
    int getBlockType();
    void setX(int x);
    void setY(int y);
    void setBlockType(int type);
};

#endif // Block_H
