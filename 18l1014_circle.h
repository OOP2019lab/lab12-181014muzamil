#pragma once;
#include"shape.h"
using namespace std;

class circle:public shape
{
public:
	float area();
	circle(float r, string c);
	~circle();
private:
	float radius;
	float ar;
};