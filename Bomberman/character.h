#ifndef CHARACTER_H
#define CHARACTER_H
#include "bomb.h"
#include <QPainter>
#include <QImage>
#include <QGraphicsItem>
#include <QGraphicsScene>

class Character : public QGraphicsItem
{
protected:

private:
    int xPos;
    int yPos;
    //movespeed is 2/3 of Blockize
    int numBombs;
    int playerID;
    int explosionsize; //5 squares is max
public:
    Character(int x = 0, int y = 0, int numBombs = 3, int player = -1);
    ~Character();
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();
    void dropBomb(QGraphicsScene *scene);
    void pickedUp(int item);
    int getPlayerID();
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    virtual QRectF boundingRect() const;
};

#endif // CHARACTER_H
