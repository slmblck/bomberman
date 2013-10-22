#ifndef WORLD_H
#define WORLD_H
#include <QFont>
#include <QPen>
#include <QBrush>
#include <QWidget>
#include <QtGui>
#include <QPainter>
#include "blocks.h"
#include "bomb.h"
#include "character.h"
#include "walls.h"
#include <QKeyEvent>

class World
{
private:
    //Just a placeholder for the world
    Blocks worldArr[20][20];
public:
    World();
    void keyHandler(QKeyEvent k);

};

#endif // WORLD_H
