#include "world.h"

World::World()
{
    World::player = new Character();
    World::Blockize = 30;
    for(int i = 0;i<20;i++)
    {
        for(int j = 0; j<20; j++)
        {
            World::worldArr[i][j].update(i*World::Blockize,j*World::Blockize);
        }
    }

    /*
    for(int i = 0;i<20;i++)
    {
        for(int j = 0; j<20; j++)
        {
            testWorld[i][j] = new Walls();
            testWorld[i][j]->update(i*World::Blockize, j*World::Blockize);
        }
    }
    */

}
void World::drawWorld(QPainter *painter)
{
    painter->setBrush(Qt::blue);
    painter->drawRect(0,0,800,600);
}

int World::getBlockize()
{
    return this->Blockize;
}

void World::keyHandler(QKeyEvent k){

}

Character * World::getPlayer()
{
    return this->player;
}
Block World::getBlock(int x, int y)
{
    return this->worldArr[x][y];
}
