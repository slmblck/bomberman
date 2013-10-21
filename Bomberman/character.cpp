#include "character.h"

Character::Character(int x, int y, int numBombs, int player)
{
    Character::xPos = x;
    Character::yPos = y;
    Character::numBombs = numBombs;
    Character::player = player;
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
