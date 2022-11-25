#include "widget.h"
#include"res.h"
widget::widget()
{
	initgraph(WIDTH, HEIGHT);
}

void widget::show()
{
	Res::DrawIMG(0, 0, "±³¾°");
}

widget::~widget()
{
}
