#pragma once
#include"common.h"
class Element;
class Role
{
public:
	Role();
	void DrawPlane (int index = 0);   //�ɻ�����ţ�
	void MovePlane(int speed);
	void DrawBullet();       //�ӵ�
	void MoveBullet(int speed);      //�ӵ��ƶ�

	Element*& GetPlane();    //�õ��ɻ�����
	list<Element*>& GetBullet();   //�õ��ӵ�


private:
	Element* plane;  //�ɻ�
	list<Element*> bullet; //�ӵ�

};