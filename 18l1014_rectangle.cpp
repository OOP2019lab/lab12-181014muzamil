#include"rectangle.h"

float rectangle::area()
{
	  ar=height*width;
	  return ar;
}

rectangle::rectangle(float h,float w,string c)
{
		height=h;
		width=w;
		color=c;
}

rectangle::~rectangle()
{
cout<<"~rectangle()"<<endl;
}