#include "movement.h"

movement::movement()
{
}

movement::moveUp(int x, int y, int key)
{
    y++;
}

movement::moveDown(int x, int y, int key)
{
    y--;
}

movement::moveLeft(int x, int y, int key)
{
    x--;
}

movement::moveRight(int x, int y, int key)
{
    x++;
}

