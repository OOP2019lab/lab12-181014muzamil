#pragma once;
#include"shape.h"
using namespace std;

class rectangle:public shape
{
public:
float area();
rectangle(float h,float w,string c);
~rectangle();
private:
	float height;
	float width;
	float ar;
};