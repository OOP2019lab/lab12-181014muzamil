#pragma once;
#include"shape.h"
using namespace std;

class triangle:public shape
{
public:
	float area();
	triangle (float b,float h,string c);
	~triangle();
private:
	float base;
	float height;
	float ar;

};