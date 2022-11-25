#include "element.h"
#include"res.h"

Element::Element(int x, int y, string name, bool live, int hp):point(x,y)
{
    this->name = name;
    this->live = live;
    this->hp = hp;
}

int& Element::GetX()
{
    // TODO: 在此处插入 return 语句
    return point.GetX();
}

int& Element::GetY()
{
    // TODO: 在此处插入 return 语句
    return point.GetY();
}

bool& Element::GetLive()
{
    // TODO: 在此处插入 return 语句
    return live;
}

int& Element::GetHp()
{
    // TODO: 在此处插入 return 语句
    return hp;
}

int Element::GetWidth()
{
    return Res::GetWidth(name);
}

int Element::GetHeigth()
{
    return Res::GetHeight(name);
}

void Element::DrawElement(int index)
{
    Res::DrawIMG(point.GetX(), point.GetY(),name,index);
}

void Element::MoveElement(int speed, point::Dir dir)
{
    point.Move(speed, dir);
}
