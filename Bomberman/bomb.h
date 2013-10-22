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
    Bomb();
    Bomb(int x, int y, int explosionSize);
    ~Bomb();
    void draw(QPainter *painter);
    void explode();
};

#endif // BOMB_H
