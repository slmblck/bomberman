#include "world.h"

World::World()
{
    World::player = new Character();
    World::blockSize = 30;
    for(int i = 0;i<20;i++)
    {
        for(int j = 0; j<20; j++)
        {
            World::worldArr[i][j].update(i*World::blockSize,j*World::blockSize);
        }
    }
}
void World::drawWorld(QPainter *painter)
{
    painter->setBrush(Qt::blue);
    painter->drawRect(0,0,800,600);
}

int World::getblockSize()
{
    return this->blockSize;
}

void World::keyHandler(QKeyEvent k){

}

Character * World::getPlayer()
{
    return this->player;
}
Blocks World::getBlock(int x, int y)
{
    return this->worldArr[x][y];
}
