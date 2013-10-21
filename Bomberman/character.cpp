#include "character.h"
#include <iostream>

Character::Character(){
    Character::xPos = 0;
    Character::yPos = 0;
    Character::numBombs = 0;
    Character::playerID = -1;
}

Character::Character(int x, int y, int numBombs, int player)
{
    Character::xPos = x;
    Character::yPos = y;
    Character::numBombs = numBombs;
    Character::playerID = player;
    Character::onCreate(x,y);
}
Character::~Character(){
    std::cout<<"character is gone" << std::endl;
}

void Character::onCreate(int x, int y){

}

void Character::move(int x, int y, int key){

}

void Character::pickedUp(int item){

}

void Character::dropBomb(int key){

}

int Character::getPlayerNumber(Character c){

    //return c.Character::playerID;
    return c.playerID;
}
