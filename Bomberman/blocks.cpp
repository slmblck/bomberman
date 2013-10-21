#include "blocks.h"

Blocks::Blocks(){
    Blocks::xPos = 0;
    Blocks::yPos = 0;
}

Blocks::Blocks(int x, int y)
{
    Blocks::xPos = x;
    Blocks::yPos = y;
    Blocks::onCreate(x,y);
}

Blocks::~Blocks(){
    std::cout << "Block has been destroyed" << std::endl;
}
void Blocks::onCreate(int x, int y){

}

void Blocks::update(int x, int y){

}

