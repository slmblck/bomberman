#include "Block.h"
#include <iostream>

/*! \brief A Standard Block
 * This class creates and positions a block into the GameScreen */
Block::Block(int x, int y)
{
    Block::xPos = x;
    Block::yPos = y;
    std::cout << "Block has been created" << std::endl;
}

/*! \brief The Block destructor
 * Removes a block and prints to console whenever that happens */
Block::~Block()
{
    std::cout << "Block has been destroyed" << std::endl;
}

/*! \brief Updates a Block Position
 *  \param x position
 *  \param y position
 * This updates the position of the block */
void Block::update(int x, int y)
{
    this->xPos = x;
    this->yPos = y;
}

/*! \brief Return the X Position of a Block */
int Block::getX()
{
    return this->xPos;
}

/*! \brief Return the Y Position of a Block */
int Block::getY()
{
    return this->yPos;
}

/*! \brief Set the X Position of a Block
 * \param The block's X position*/
void Block::setX(int x)
{
    this->xPos = x;
}

/*! \brief Set the Y Position of a Block
 * \param The block's Y position*/
void Block::setY(int y)
{
    this->yPos = y;
}

QRectF Block::boundingRect() const
{
    return QRectF(xPos, yPos, 30, 30);
}

void Block::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(xPos, yPos, 30, 30, QPixmap(":/Floor_Small.png"));
}
