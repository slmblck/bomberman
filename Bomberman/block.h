#ifndef Block_H
#define Block_H
#include <QPainter>
#include <QGraphicsItem>
#include <QImage>
<<<<<<< HEAD
=======
#include <QGraphicsItem>
>>>>>>> 06bb81a4ed4733f2b5a3f6f08783ddf261b52269
class Block : public QGraphicsItem
{
protected:
    int xPos;
    int yPos;
public:
    Block(int x=0, int y=0);
    virtual ~Block();
    virtual void update(int x, int y);
<<<<<<< HEAD
    virtual void draw(QPainter *painter, const int size);
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    virtual QRectF boundingRect() const;
=======
>>>>>>> 06bb81a4ed4733f2b5a3f6f08783ddf261b52269
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);


};

#endif // Block_H
