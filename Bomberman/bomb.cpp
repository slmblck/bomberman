#include "bomb.h"

Bomb::Bomb(int x, int y, int explosionSize)
{
    Bomb::xPos = x;
    Bomb::yPos = y;
    Bomb::explosionSize = explosionSize;
    Bomb::onCreate(x,y);
}

Bomb::~Bomb(){
    std::cout << "bomb has been destoryed" << std::endl;
}

void Bomb::onCreate(int x, int y){

}

void Bomb::explode(){

}