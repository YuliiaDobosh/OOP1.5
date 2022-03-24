#pragma once
#include <string >
#include "Pair.h"
class Rectangle
{
private:
	Pair pair;

public:
	Pair getPair() const { return pair; }
	double getSquare()const { return pair.getDobytok(); }
	double getPerimeter()const { return  2 * (pair.getp1() + pair.getp2()); }
	bool setp1(double p1);
	bool setp2(double p2);
	void Init(double p1, double p2);
	void Display() const;
	void Read();
	void Init(Pair p) { pair = p; }
};

