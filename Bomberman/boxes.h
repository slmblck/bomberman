#ifndef BOXES_H
#define BOXES_H
#include "block.h"
class boxes : public Block
{
protected: int type;
public:
    boxes(int x =0, int y = 0);
    ~boxes();
<<<<<<< HEAD
    void draw(QPainter *painter, const int size);
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;
=======
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
>>>>>>> 06bb81a4ed4733f2b5a3f6f08783ddf261b52269
};

#endif // BOXES_H
