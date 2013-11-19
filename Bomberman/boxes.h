#ifndef BOXES_H
#define BOXES_H
#include "block.h"
class boxes : public Block
{
protected: int type;
public:
    boxes(int x =0, int y = 0);
    ~boxes();
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;
};

#endif // BOXES_H
