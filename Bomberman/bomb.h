#ifndef BOMB_H
#define BOMB_H
#include <QPainter>
#include <QImage>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include "explosion.h"
class Bomb : public QGraphicsItem
{
protected:
    qreal xPos;
    qreal yPos;
    int explosionSize;
    std::vector<explosion*> explosionVector;
public slots:
    void explode();
public:
    Bomb(int x=0, int y=0, int explosionSize=0);
    ~Bomb();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    //void explode();
};

#endif // BOMB_H
