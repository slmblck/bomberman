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

<<<<<<< HEAD
void Bomb::onCreate(int x, int y){

}

void Bomb::explode(){
=======
Bomb::onCreate(int x, int y){

}

Bomb::explode(){
>>>>>>> 8beba44991ebf8b3574db283d002b9b7660d5f70

}
