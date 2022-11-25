#pragma once
#include"common.h"
class MyTimer
{
public:
	static bool Timer(int duration, int id)
	{
		static int startTime[10];
		int endTime = clock();
		if (endTime - startTime[id] >= duration)
		{
			startTime[id] = endTime;
			return true;
		}
		return false;
	}
};