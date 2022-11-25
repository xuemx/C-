#pragma once
#include"common.h"
class Element;
class Role
{
public:
	Role();
	void DrawPlane (int index = 0);   //飞机（序号）
	void MovePlane(int speed);
	void DrawBullet();       //子弹
	void MoveBullet(int speed);      //子弹移动

	Element*& GetPlane();    //得到飞机属性
	list<Element*>& GetBullet();   //得到子弹


private:
	Element* plane;  //飞机
	list<Element*> bullet; //子弹

};