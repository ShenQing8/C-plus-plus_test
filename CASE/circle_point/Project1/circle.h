#pragma once
#include <iostream>
using namespace std;
#include "point.h"

class Circle
{
public:
	void setR(int r);
	int getR();
	void setP(Point p);
	Point getP();

private:
	int m_r;
	Point m_p;
};

