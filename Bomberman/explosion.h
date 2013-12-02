#ifndef EXPLOSION_H
#define EXPLOSION_H

#include <QGraphicsItem>

/*! \brief The Explosion class
 *         of Bombster used in addition to the bomb class to remove blocks/players.
 *
 *  Inherits QGraphicsObject from Qt
 */
class explosion : public QGraphicsObject
{
private:
    qreal xPos;
    qreal yPos;
    QPixmap explosionImage;
public:
    explosion(int x =0, int y = 0, QPixmap image = QPixmap(0,0));
    ~explosion();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    int type() const;
};

#endif // EXPLOSION_H
