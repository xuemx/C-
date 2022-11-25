#include "point.h"

point::point(int x, int y)
{
    this->x = x;
    this->y = y;
}

int& point::GetX()
{
    // TODO: �ڴ˴����� return ���
    return x;
}

int& point::GetY()
{
    // TODO: �ڴ˴����� return ���
    return y;
}

void point::Move(int speed, Dir dir)
{
    switch (dir)
    {
    case point::Dir::Left:
        this->x -= speed;
            break;
    case point::Dir::Right:
        this->x += speed;
        break;
    case point::Dir::Down:
        this->y += speed;
        break;
    case point::Dir::Up:
        this->y -= speed;
        break;
    }
}
