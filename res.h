#pragma once
#include "common.h"
//�������ģʽ
class Res
{
public:
	static map<string, IMAGE*> img;
	static int GetWidth(string name);
	static int GetHeight(string name);
	static Res* GetInstance();    //��ȡΨһ����
	static void DrawIMG(int x, int y, string name);
	static void DrawIMG(int x, int y, string name, int index);


private:
	Res();

};