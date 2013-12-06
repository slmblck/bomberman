#include "wall.h"

/*! \brief Wall Constructor
 *  \param xPos
 *  \param YPos
 *  contains xPos, Ypos of the non destructable walls
 *  prints "Wall has been created" to console */
Wall::Wall(int x, int y)
{
    xPos = x;
    yPos = y;
    std::cout << "Wall has been created" << std::endl;
}

/// \brief wall destructor
/// prints "Wall has been destroyed" to console
Wall::~Wall()
{
    std::cout << "Wall has been destroyed" << std::endl;
}

/*! \brief Displays a nondestructable wall onscreen
 *  \param QPainter pointer
 *  \param constant QStyleOptionGraphicsItem pointer
 *  \param QWidget pointer */
void Wall::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(xPos, yPos, 30, 30, QPixmap(":Wall_Nondestructable_Small.png"));
}

/// \brief Bounds a nondesructable wall to 30px * 30px space
QRectF Wall::boundingRect() const
{
    return QRectF(xPos, yPos, 30, 30);
}

/// \brief Returns the wall type constant
/// \return int 7
int Wall::type() const
{
    return 7;
}
