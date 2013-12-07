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
#include <typeinfo>
#include <iostream>
#include <string>

/*! \brief The Character class
 *         of Bombster used to create a movable player in the world.
 *
 *  Inherits QGraphicsObject from Qt
 */
class Character : public QGraphicsObject
{
    Q_OBJECT
private:
    qreal xPos;
    qreal yPos;
    //movespeed is 1/2 of Blockize
    int numBombs;
    int playerID;
    int explosionsize; //5 squares is max
    QPixmap charImage;
    bool alive;
public:
    Character(int x = 0, int y = 0, int numBombs = 3, int player = -1,QPixmap image = QPixmap(0,0));
    ~Character();
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();
    void dropBomb();
    void pickedUp(int item);
    int getPlayerID();
    bool isAlive();
    void setAlive(bool);
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;
    int type() const;
    //void collidesWithItem(const QGraphicsItem *other, Qt::ItemSelectionMode mode) const;

};

#endif // CHARACTER_H
