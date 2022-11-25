#include "role.h"
#include"res.h"
#include"element.h"
#include"timer.hpp"
#pragma comment(lib,"Winmm.lib")
Role::Role()
{
	int x = Res::GetInstance()->GetWidth("背景") / 2 - Res::GetInstance()->GetWidth("飞机") /2;
	int y = Res::GetInstance()->GetHeight("背景") - Res::GetInstance()->GetHeight("飞机");
	plane = new Element(x, y, "飞机", true,100);
}

void Role::DrawPlane(int index)
{
	plane->DrawElement(index);
}

void Role::MovePlane(int speed)
{
	//异步处理按键控制
	if (GetAsyncKeyState(VK_UP) && plane->GetY() >= 0)
	{
		plane->MoveElement(speed, point::Dir::Up);
	}
	if (GetAsyncKeyState(VK_DOWN) && plane->GetY() <=
		Res::GetInstance()->GetHeight("背景") - Res::GetInstance()->GetHeight("飞机"))
	{
		plane->MoveElement(speed, point::Dir::Down);
	}
	if (GetAsyncKeyState(VK_LEFT) && plane->GetX() >= 0)
	{
		plane->MoveElement(speed, point::Dir::Left);
	}
	if (GetAsyncKeyState(VK_RIGHT) && plane->GetX() <=
		Res::GetInstance()->GetWidth("背景") - Res::GetInstance()->GetWidth("飞机"))
	{
		plane->MoveElement(speed, point::Dir::Right);
	}
	//子弹发射
	if (GetAsyncKeyState(VK_SPACE)&&MyTimer::Timer(100,0))
	{
		mciSendString("close ./res/gun.wav" , NULL, 0,NULL);
		mciSendString("open ./res/gun.wav", NULL, 0,NULL);
		mciSendString("play ./res/gun.wav", NULL, 0, NULL);
		bullet.push_back(new Element(plane->GetX() + 45, plane->GetY() - 20, "子弹", true));
	}
	DrawBullet();
	MoveBullet(1);
}

void Role::DrawBullet()
{
	for (auto v : bullet)
	{
		if (v->GetLive())
		{
			v->DrawElement(1);
		}
	}
}

void Role::MoveBullet(int speed)
{
	for (auto v : bullet)
	{
		v->GetY() -= speed;
	}
}

Element*& Role::GetPlane()
{
	// TODO: 在此处插入 return 语句
	return plane;
}

list<Element*>& Role::GetBullet()
{
	// TODO: 在此处插入 return 语句
	return bullet;
}


