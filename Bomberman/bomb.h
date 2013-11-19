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
    int xPos;
    int yPos;
    int explosionSize;
    std::vector<explosion*> explosionVector;
public slots:
    void explode(QGraphicsScene *scene);
public:
    Bomb(int x=0, int y=0, int explosionSize=0);
    ~Bomb();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // BOMB_H
