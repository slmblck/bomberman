#ifndef CHARACTER_H
#define CHARACTER_H
#include "bomb.h"
#include <iostream>
class Character
{
protected:
    int xPos;
    int yPos;
    //movespeed is 2/3 of blocksize
    int numBombs;
    int player;
    Bomb *b;
public:
    Character();
    Character(int x, int y, int numBombs, int player);
    ~Character();
    void onCreate(int x, int y);
    void move(int x, int y, int key);
    void dropBomb(int key);
    void pickedUp(int item);
    int getPlayerNumber(Character c);

};

#endif // CHARACTER_H
