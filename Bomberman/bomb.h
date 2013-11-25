#ifndef BOMB_H
#define BOMB_H
#include <QPainter>
#include <QImage>
#include <QGraphicsObject>
#include <QGraphicsScene>
#include <QObject>
#include <QSound>
#include "explosion.h"
class Bomb : public QGraphicsObject
{
    Q_OBJECT
protected:
    qreal xPos;
    qreal yPos;
    int explosionSize;
    std::vector<explosion*> explosionVector;
public slots:
    void explode();
    void explode2();
public:
    Bomb(int x=0, int y=0, int explosionSize=0);
    ~Bomb();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void erase();
};

#endif // BOMB_H
