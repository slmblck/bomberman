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

class World
{
private:
    //Just a placeholder for the world
    Block worldArr[20][20];
    //This is a test
    Block ***testWorld;
    int Blockize;
    Character *player;
public:
    World();
    void keyHandler(QKeyEvent k);
    void drawWorld(QPainter *painter);
    int getBlockize();
    Character * getPlayer();
    Block getBlock(int x, int y);

};

#endif // WORLD_H
