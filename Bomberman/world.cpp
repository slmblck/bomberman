#include "world.h"

World::World()
{
    World::player = new Character(30,30,1);
    World::Blocksize = 30;
    World::worldsize = 19;

    World::testWorld = new Block**[worldsize];
    for (int i = 0; i < 20; ++i)
    {
        World::testWorld[i] = new Block*[worldsize];
    }
    for(int i = 0; i<worldsize; i++)
    {
        for(int j = 0; j<worldsize; j++)
        {
            if((i == 0 || j == 0 || i == (worldsize-1) || j == (worldsize-1) || ((i%2 == 0)&&(j%2 == 0)))){
                World::testWorld[i][j] = new Wall(i*World::Blocksize,j*World::Blocksize);
            } else if ((i == 1 && j == 1) || (i == 1 && j == 2) || (i == 2 && j == 1)
                       || (i == 17 && j == 17) || (i == 16 && j == 17) || (i == 17 && j == 16)){
                World::testWorld[i][j] = new Block(i*World::Blocksize,j*World::Blocksize);
            } else{
                int k = rand()%2;
                if(k == 0){
                    World::testWorld[i][j] = new dWall(i*World::Blocksize,j*World::Blocksize);
                } else {
                    World::testWorld[i][j] = new Block(i*World::Blocksize,j*World::Blocksize);
                }
            }

        }
    }
}

World::~World()
{
    std::cout << "World has been destroyed" << std::endl;
    for(int i = 0; i<worldsize; i++)
    {
        for(int j = 0; j<worldsize; j++)
        {
            delete World::testWorld[i][j];
        }
    }
    for (int i = 0; i < worldsize; ++i) {
        delete[] World::testWorld[i];
    }

    delete[] World::testWorld;
}

void World::drawWorld(QPainter *painter)
{
    painter->setBrush(Qt::blue);
    painter->drawRect(0,0,600,600);
}

int World::getBlocksize()
{
    return this->Blocksize;
}

int World::getWorldsize()
{
    return this->worldsize;
}

void World::keyHandler(int k,QGraphicsScene *scene)
{
    switch (k)
    {
        case Qt::Key_W:
            player->moveUp();
            break;
        case Qt::Key_S:
            player->moveDown();
            break;
        case Qt::Key_A:
            player->moveLeft();
            break;
        case Qt::Key_D:
            player->moveRight();
            break;
        case Qt::Key_K:
            player->dropBomb(scene);
            break;
        default:
            break;
    }

}

Character * World::getPlayer()
{
    return this->player;
}

Block* World::getTestBlock(int x, int y)
{
    return this->testWorld[x][y];
}
