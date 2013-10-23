#include "world.h"

World::World()
{
    World::player = new Character;
}
void World::drawWorld(QPainter *painter)
{
    painter->setBrush(Qt::blue);
    painter->drawRect(0,0,800,600);
}

void World::keyHandler(QKeyEvent k){

}

Character * World::getPlayer(World *w)
{
    return w->player;
}
Blocks World::getBlock(World *w, int x, int y)
{
    return w->worldArr[x][y];
}
