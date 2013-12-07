#include "explosion.h"
#include <iostream>
#include <QPainter>

/*! \brief The explosion constructer
 *  \param The x coordinate of where the explosion starts.
 *  \param The y coordinate of where the explosion starts.
 *  \param The explosion image.
 *  this constructor creates an explosion piece */
explosion::explosion(int x, int y,QPixmap image)
{
    explosion::xPos = x;
    explosion::yPos = y;
    explosion::explosionImage = image;
}

/*! \brief The Explosion destructor
 * Removes an explosion and prints to console whenever that happens */
explosion::~explosion()
{
    std::cout << "Explosion has been deleted" << std::endl;
}

/// \brief  bounds explosion block to 30 px* 30px space
QRectF explosion::boundingRect() const
{
    return QRectF(xPos, yPos, 30, 30);
}

/*! \brief Displays an explosion image onscreen
 *  \param painter pointer
 *  \param constant QStyleOptionGraphicsItem option pointer
 *  \param QWidget pointer */
void explosion::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(xPos, yPos, 30, 30, explosionImage);
}

/*! \brief Returns int type of explosion
 *  \return Returns 6 */
int explosion::type() const
{
    return 6;
}
