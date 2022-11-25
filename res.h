#pragma once
#include "common.h"
//单例设计模式
class Res
{
public:
	static map<string, IMAGE*> img;
	static int GetWidth(string name);
	static int GetHeight(string name);
	static Res* GetInstance();    //获取唯一对象
	static void DrawIMG(int x, int y, string name);
	static void DrawIMG(int x, int y, string name, int index);


private:
	Res();

};