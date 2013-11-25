#ifndef CHARACTER_H
#define CHARACTER_H
#include "bomb.h"
#include <QPainter>
#include <QImage>
#include <QGraphicsObject>
#include <QGraphicsScene>
#include "block.h"
#include "wall.h"
#include <QList>

class Character : public QGraphicsObject
{
    Q_OBJECT
private:
    qreal xPos;
    qreal yPos;
    //movespeed is 2/3 of Blockize
    int numBombs;
    int playerID;
    int explosionsize; //5 squares is max
    QPixmap charImage;
public:
    Character(int x = 0, int y = 0, int numBombs = 3, int player = -1);
    ~Character();
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();
    void dropBomb();
    void pickedUp(int item);
    int getPlayerID();
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;
    //void collidesWithItem(const QGraphicsItem *other, Qt::ItemSelectionMode mode) const;

};

#endif // CHARACTER_H
