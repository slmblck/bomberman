#ifndef CHARACTER_H
#define CHARACTER_H
#include "bomb.h"
class Character
{
protected:
    int xPos;
    int yPos;
    //movespeed is 2/3 of blocksize
    int numBombs;
public:
    Character();
    Character(int x, int y, int numBombs, int player);
    ~Character();
    int playerID;
    void onCreate(int x, int y);
    void move(int x, int y, int key);
    void dropBomb(int key);
    void pickedUp(int item);
    int getPlayerNumber(Character c);
};

#endif // CHARACTER_H
