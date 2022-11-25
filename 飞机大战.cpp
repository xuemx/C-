#include"widget.h"
#include"role.h"
#include"enemy.h"
#include"timer.hpp"
int main()
{
	srand((unsigned int)time(nullptr));
	widget* pw = new widget;
	Role* prole = new Role;
	Enemy* penemy = new Enemy;
	BeginBatchDraw();
	while (1)
	{
		pw->show();
	    prole->DrawPlane();
		prole->MovePlane(1);
		if (MyTimer::Timer(2000, 2))
		{
			penemy->CreateEnemy();
		}
		penemy->DrawEnemy();
		if (MyTimer::Timer(20, 1))
		{
         penemy->MoveEnemy(1);
		}
		
		FlushBatchDraw();

	}
	EndBatchDraw();
	return 0;
}