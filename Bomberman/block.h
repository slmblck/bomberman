#ifndef Block_H
#define Block_H
#include <QPainter>
#include <QImage>
#include <QGraphicsItem>
class Block : public QGraphicsItem
{
protected:
    int xPos;
    int yPos;
public:
    Block(int x=0, int y=0);
    virtual ~Block();
    virtual void update(int x, int y);
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

};

#endif // Block_H
