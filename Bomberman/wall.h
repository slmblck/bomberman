#ifndef WALL_H
#define WALL_H
#include "block.h"
#include <iostream>

/*! \brief The Wall class
 *         of Bombster used to create and destroy non-destructable walls in the game.
 *
 *  Inherits Block
 */
class Wall : public Block
{
public:
    Wall(int x =0, int y=0);
    ~Wall();
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;
    int type() const;
};

#endif // WALL_H
