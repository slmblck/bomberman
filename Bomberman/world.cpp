#include "world.h"

World::World()
{
    World::player = new Character();
    World::Blocksize = 30;
    /*
    for(int i = 0;i<20;i++)
    {
        for(int j = 0; j<20; j++)
        {
            World::worldArr[i][j].update(i*World::Blocksize,j*World::Blocksize);
        }
    }
    */
    World::testWorld = new Block**[20];
    for (int i = 0; i < 20; ++i) {
        World::testWorld[i] = new Block*[20];
    }
    for(int i = 0;i<20;i++)
    {
        for(int j = 0; j<20; j++)
        {
            if(i == 0 || j == 0 || i == 19 || j == 19){
                World::testWorld[i][j] = new Wall(i*World::Blocksize,j*World::Blocksize);
            }
            else{
                World::testWorld[i][j] = new Block(i*World::Blocksize,j*World::Blocksize);
            }

        }
    }
}

World::~World()
{
    std::cout << "World has been destroyed" << std::endl;
    for(int i = 0;i<20;i++)
    {
        for(int j = 0; j<20; j++)
        {
            delete World::testWorld[i][j];
        }
    }
    for (int i = 0; i < 20; ++i) {
        delete[] World::testWorld[i];
    }

    delete[] World::testWorld;
}

void World::drawWorld(QPainter *painter)
{
    painter->setBrush(Qt::blue);
    painter->drawRect(0,0,800,600);
}

int World::getBlocksize()
{
    return this->Blocksize;
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

Block* World::getTestBlock(int x, int y)
{
    return this->testWorld[x][y];
}
