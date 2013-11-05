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
#include <iostream>

class World
{
private:
    //Just a placeholder for the world
    //This is a test
    Block ***testWorld;
    int worldsize;
    int Blocksize;
    Character *player;
public:
    World();
    ~World();
    void keyHandler(int k);
    void drawWorld(QPainter *painter);
    int getBlocksize();
    int getWorldsize();
    Character * getPlayer();
    Block *getTestBlock(int x, int y);

};

#endif // WORLD_H
