#include "Rectangle.h"
#include <iostream>
using namespace std;
void Rectangle::Init(double p1 , double p2 )
{
	pair.Init(p1, p2);
}
void Rectangle::Display() const
{
	pair.Display(); 
}
bool Rectangle::setp1(double value)
{
	if (value > 0)
	{
		pair.setp1(value);
		return true;
	}
	else
	{
		pair.setp1(0);
		return false;
	}
}
bool Rectangle::setp2(double value)
{
	if (value > 0)
	{
		pair.setp2(value);
		return true;
	}
	else
	{
		pair.setp2(0);
		return false;
	}
}

void Rectangle::Read()
{
	Pair m;	
	m.Read(); 
	Init( m);
}



