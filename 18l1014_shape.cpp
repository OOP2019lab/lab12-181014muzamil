#include"shape.h"

float shape::area()
{
	 return 0;
}

shape::shape()
{

}

shape::shape(string c)
{
	color=c;
}

shape::~shape()
{
	cout<<"~shape()"<<endl;
}