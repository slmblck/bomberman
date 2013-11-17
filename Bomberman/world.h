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
#include <QGraphicsItem>


class World : public QGraphicsItem
{
private:
    //Just a placeholder for the world
    //This is a test
    Block ***testWorld;
    int numBlocks;
    int blockSize;
    Character *player;

public:
    World();
    ~World();
    void keyHandler(int k);
    void drawWorld(QPainter *painter);
    int getblockSize();
    int getnumBlocks();
    Character * getPlayer();
    Block *getTestBlock(int x, int y);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // WORLD_H
