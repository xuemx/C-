#include "point.h"

point::point(int x, int y)
{
    this->x = x;
    this->y = y;
}

int& point::GetX()
{
    // TODO: 在此处插入 return 语句
    return x;
}

int& point::GetY()
{
    // TODO: 在此处插入 return 语句
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
