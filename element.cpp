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
    // TODO: �ڴ˴����� return ���
    return point.GetX();
}

int& Element::GetY()
{
    // TODO: �ڴ˴����� return ���
    return point.GetY();
}

bool& Element::GetLive()
{
    // TODO: �ڴ˴����� return ���
    return live;
}

int& Element::GetHp()
{
    // TODO: �ڴ˴����� return ���
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
