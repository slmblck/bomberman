#ifndef Block_H
#define Block_H
#include <QPainter>
#include <QGraphicsObject>
#include <QImage>

/*! \brief The Block class
 *         of Bombster used as a base for the game grid.
 *
 *  Inherits QGraphicsObject from Qt
 */
class Block : public QGraphicsObject
{
protected:
    qreal xPos;
    qreal yPos;
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
    virtual int type() const;

};

#endif // Block_H
