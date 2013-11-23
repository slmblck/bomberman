#ifndef EXPLOSION_H
#define EXPLOSION_H

#include <QGraphicsItem>

class explosion : public QGraphicsObject
{
private:
    qreal xPos;
    qreal yPos;
public:
    explosion(int x =0, int y = 0);
    ~explosion();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // EXPLOSION_H
