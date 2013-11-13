#include "world.h"

World::World()
{
    setFlag(QGraphicsItem::ItemIsMovable,false);
    World::player = new Character(30,30,1);
    World::blockSize = 30;
    World::numBlocks = 19;
    /*
    World::testWorld = new Block**[numBlocks];
    for (int i = 0; i < 20; ++i)
    {
        World::testWorld[i] = new Block*[numBlocks];
    }
    for(int i = 0; i<numBlocks; i++)
    {
        for(int j = 0; j<numBlocks; j++)
        {
            if((i == 0 || j == 0 || i == (numBlocks-1) || j == (numBlocks-1) || ((i%2 == 0)&&(j%2 == 0)))){
                World::testWorld[i][j] = new Wall(i*World::blockSize,j*World::blockSize);
            } else if ((i == 1 && j == 1) || (i == 1 && j == 2) || (i == 2 && j == 1)
                       || (i == 17 && j == 17) || (i == 16 && j == 17) || (i == 17 && j == 16)){
                World::testWorld[i][j] = new Block(i*World::blockSize,j*World::blockSize);
            } else{
                int k = rand()%2;
                if(k == 0){
                    World::testWorld[i][j] = new dWall(i*World::blockSize,j*World::blockSize);
                } else {
                    World::testWorld[i][j] = new Block(i*World::blockSize,j*World::blockSize);
                }
            }

        }
    }
    */
}

World::~World()
{
    std::cout << "World has been destroyed" << std::endl;
    for(int i = 0; i<numBlocks; i++)
    {
        for(int j = 0; j<numBlocks; j++)
        {
            delete World::testWorld[i][j];
        }
    }
    for (int i = 0; i < numBlocks; ++i) {
        delete[] World::testWorld[i];
    }

    delete[] World::testWorld;
}

void World::drawWorld(QPainter *painter)
{
    painter->setBrush(Qt::blue);
    painter->drawRect(0,0,600,600);
}

int World::getblockSize()
{
    return this->blockSize;
}

int World::getnumBlocks()
{
    return this->numBlocks;
}

QRectF World::boundingRect() const
{
    return QRectF(-400.0,-300.0,800.0,600.0);
}

void World::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::blue);
    painter->drawRect(-400,-300,600,600);
}

void World::keyHandler(int k)
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
            player->dropBomb();
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
