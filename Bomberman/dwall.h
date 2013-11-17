#ifndef DWALL_H
#define DWALL_H
#include "block.h"
class dWall : public Block
{
public:
    dWall(int x, int y);
    ~dWall();
<<<<<<< HEAD
    void draw(QPainter *painter, const int size);
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;
=======
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
>>>>>>> 06bb81a4ed4733f2b5a3f6f08783ddf261b52269
};

#endif // DWALL_H
