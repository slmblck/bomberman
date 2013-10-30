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
    Block worldArr[20][20];
    //This is a test
    Block ***testWorld;
    int Blocksize;
    Character *player;
public:
    World();
    ~World();
    void keyHandler(QKeyEvent k);
    void drawWorld(QPainter *painter);
    int getBlocksize();
    Character * getPlayer();
    Block getBlock(int x, int y);
    Block *getTestBlock(int x, int y);

};

#endif // WORLD_H
