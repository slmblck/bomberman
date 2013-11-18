#ifndef CHARACTER_H
#define CHARACTER_H
#include "bomb.h"
#include <QPainter>
#include <QImage>
#include <QGraphicsItem>

class Character : public QGraphicsItem
{
protected:

private:
    int xPos;
    int yPos;
    //movespeed is 2/3 of Blockize
    int numBombs;
    int playerID;
    int explosionsize;
public:
    Character(int x = 0, int y = 0, int numBombs = 3, int player = -1);
    ~Character();
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();
    void dropBomb();
    void pickedUp(int item);
    void draw(QPainter *painter);
    int getPlayerID();
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    virtual QRectF boundingRect() const;
};

#endif // CHARACTER_H
