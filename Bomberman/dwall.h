#ifndef DWALL_H
#define DWALL_H
#include "block.h"

/*! \brief The dWall class
 *         of Bombster used a destructable wall in the game.
 *
 *  Inherits Block
 */
class dWall : public Block
{
public:
    dWall(int x = 0, int y = 0);
    ~dWall();
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;
    int type() const;
};

#endif // DWALL_H
