#ifndef CHARACTER_H
#define CHARACTER_H
#include "bomb.h"
#include <QPainter>
#include <QImage>
class Character
{
protected:

private:
    int xPos;
    int yPos;
    //movespeed is 2/3 of Blockize
    int numBombs;
    int playerID;
    int explosionsize;
public:
    Character(int x = 0, int y = 0, int numBombs = 0, int player = -1);
    ~Character();
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();
    void dropBomb();
    void pickedUp(int item);
    void draw(QPainter *painter);
    int getPlayerID();
};

#endif // CHARACTER_H
