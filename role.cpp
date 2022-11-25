#include "role.h"
#include"res.h"
#include"element.h"
#include"timer.hpp"
#pragma comment(lib,"Winmm.lib")
Role::Role()
{
	int x = Res::GetInstance()->GetWidth("����") / 2 - Res::GetInstance()->GetWidth("�ɻ�") /2;
	int y = Res::GetInstance()->GetHeight("����") - Res::GetInstance()->GetHeight("�ɻ�");
	plane = new Element(x, y, "�ɻ�", true,100);
}

void Role::DrawPlane(int index)
{
	plane->DrawElement(index);
}

void Role::MovePlane(int speed)
{
	//�첽����������
	if (GetAsyncKeyState(VK_UP) && plane->GetY() >= 0)
	{
		plane->MoveElement(speed, point::Dir::Up);
	}
	if (GetAsyncKeyState(VK_DOWN) && plane->GetY() <=
		Res::GetInstance()->GetHeight("����") - Res::GetInstance()->GetHeight("�ɻ�"))
	{
		plane->MoveElement(speed, point::Dir::Down);
	}
	if (GetAsyncKeyState(VK_LEFT) && plane->GetX() >= 0)
	{
		plane->MoveElement(speed, point::Dir::Left);
	}
	if (GetAsyncKeyState(VK_RIGHT) && plane->GetX() <=
		Res::GetInstance()->GetWidth("����") - Res::GetInstance()->GetWidth("�ɻ�"))
	{
		plane->MoveElement(speed, point::Dir::Right);
	}
	//�ӵ�����
	if (GetAsyncKeyState(VK_SPACE)&&MyTimer::Timer(100,0))
	{
		mciSendString("close ./res/gun.wav" , NULL, 0,NULL);
		mciSendString("open ./res/gun.wav", NULL, 0,NULL);
		mciSendString("play ./res/gun.wav", NULL, 0, NULL);
		bullet.push_back(new Element(plane->GetX() + 45, plane->GetY() - 20, "�ӵ�", true));
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
	// TODO: �ڴ˴����� return ���
	return plane;
}

list<Element*>& Role::GetBullet()
{
	// TODO: �ڴ˴����� return ���
	return bullet;
}


