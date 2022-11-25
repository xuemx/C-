#pragma once
#include"common.h"
class Element;
class Enemy
{
public:
	void DrawEnemy();
	void MoveEnemy(int speed);
	void CreateEnemy();
	list<Element*>& GetEnemy();

private:
	list<Element*> enemy;
};