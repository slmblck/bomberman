#ifndef BOMB_H
#define BOMB_H
class Bomb
{
protected:
    int xPos;
    int yPos;
    int explosionSize;
public:
    Bomb(int x, int y, int explosionSize);
    ~Bomb();
    void onCreate(int x, int y);
    void explode();
};

#endif // BOMB_H
