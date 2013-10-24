#ifndef BOMB_H
#define BOMB_H
#include <QPainter>
class Bomb
{
protected:
    int xPos;
    int yPos;
    int explosionSize;
public:
    Bomb(int x=0, int y=0, int explosionSize=0);
    ~Bomb();
    void draw(QPainter *painter);
    void explode();
};

#endif // BOMB_H
