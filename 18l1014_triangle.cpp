#include"triangle.h"

	triangle::triangle (float b,float h,string c)
	{
	base=b;
	height=h;
	color=c;
	}

	float triangle::area()
	{
		ar=(base/2)*height;
		return ar;
	}

	triangle::~triangle()
	{
	cout<<"~traingle()"<<endl;
	}