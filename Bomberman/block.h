#ifndef Block_H
#define Block_H
#include <QPainter>
#include <QGraphicsItem>
#include <QImage>
class Block : public QGraphicsItem
{
protected:
    int xPos;
    int yPos;
public:
    Block(int x=0, int y=0);
    virtual ~Block();
    virtual void update(int x, int y);
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    virtual QRectF boundingRect() const;
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);


};

#endif // Block_H
