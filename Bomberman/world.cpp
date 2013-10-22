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
