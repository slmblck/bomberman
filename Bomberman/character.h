#ifndef CHARACTER_H
#define CHARACTER_H
#include "bomb.h"
#include <QPainter>
class Character
{
protected:

private:
    int xPos;
    int yPos;
    //movespeed is 2/3 of blocksize
    int numBombs;
    int playerID;
    int explosionsize;
public:
    Character();
    Character(int x, int y, int numBombs, int player);
    ~Character();
    void move(int key, Character *c);
    void dropBomb(int key, Character *c);
    void pickedUp(int item, Character *c);
    void draw(QPainter *painter);
    int getPlayerID(Character *c);
};

#endif // CHARACTER_H
