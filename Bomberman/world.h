#ifndef WORLD_H
#define WORLD_H
#include <QFont>
#include <QPen>
#include <QBrush>
#include <QWidget>
#include <QtGui>
#include <QPainter>
#include "Block.h"
#include "bomb.h"
#include "character.h"
#include <QKeyEvent>
#include <QImage>
#include "wall.h"
#include "dwall.h"
#include <iostream>
#include <stdlib.h>

/*! \brief The World class
 *         of Bombster used to create a new game world.
 *
 */
class World
{
private:
    //Just a placeholder for the world
    //This is a test
    Block ***testWorld;
    int worldsize;
    int Blocksize;
    Character *player1;
    Character *player2;
public:
    World();
    ~World();
    void keyHandler(int k);
    void drawWorld(QPainter *painter);
    int getBlocksize();
    int getWorldsize();
    Character * getPlayer1();
    Character * getPlayer2();
    Block *getTestBlock(int x, int y);

};

#endif // WORLD_H
