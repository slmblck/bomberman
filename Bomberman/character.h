#ifndef CHARACTER_H
#define CHARACTER_H
#include "allIncludes.h"
class Character
{
protected:
    int xPos;
    int yPos;
    //movespeed is 2/3 of blocksize
    int numBombs;
    int player;
public:
    Character(int x, int y, int numBombs, int player);
    ~Character();
    void onCreate(int x, int y);
    void move(int x, int y, int key);
    void dropBomb(int key);
    void pickedUp(int item);

};

#endif // CHARACTER_H
