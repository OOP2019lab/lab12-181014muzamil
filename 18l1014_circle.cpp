#include"circle.h"

	float circle::area()
	{

		ar=radius*radius*3.14;
		return ar;
	}
	circle::circle(float r, string c)
	{
		radius=r;
		color=c;
	}

	circle::~circle()
	{
	cout<<"~circle()"<<endl;
	}