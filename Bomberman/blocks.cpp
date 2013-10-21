#include "blocks.h"

Blocks::Blocks(int x, int y)
{
    Blocks::onCreate(x,y);
}

Blocks::~Blocks(){
    std::cout << "Block has been destroyed" << std::endl;
}
void Blocks::onCreate(int x, int y){
    Blocks::xPos = x;
    Blocks::yPos = y;

}


