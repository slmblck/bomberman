#ifndef BOMB_H
#define BOMB_H
#include <QPainter>
#include <QImage>
#include <QGraphicsItem>
class Bomb : public QGraphicsItem
{
protected:
    int xPos;
    int yPos;
    int explosionSize;
public:
    Bomb(int x=0, int y=0, int explosionSize=0);
    ~Bomb();
    void draw(QPainter *painter);
    void explode();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // BOMB_H
