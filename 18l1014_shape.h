#pragma once;
#include<iostream>
#include<string>
using namespace std;

class shape
{
string type;
public:
	virtual float area();
	string color;
	shape(string c);
	shape();
	virtual ~shape();
};