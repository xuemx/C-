#pragma once
#include"common.h"
#include"point.h"
class Element
{
public:
	Element(int x, int y, string name, bool live, int hp = 0);
	int& GetX();
	int& GetY();
	bool& GetLive();
	int& GetHp();
	int GetWidth();
	int GetHeigth();
	void DrawElement(int index);
	void MoveElement(int speed, point::Dir dir);


private:
	point point;
	string name;
	bool live;  //存活标记
	int hp;      //飞机和敌机血量
};