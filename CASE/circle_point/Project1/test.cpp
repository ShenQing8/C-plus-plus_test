#include <iostream>
using namespace std;
#include "circle.h"
//判断点与圆的位置关系


//全局函数判断点与圆的位置关系
void isInCircle(Circle& c, Point& p)
{
	double distance = (c.getP().getX() - p.getX()) * (c.getP().getX() - p.getX()) +
		(c.getP().getY() - p.getY()) * (c.getP().getY() - p.getY());
	double c_sq = c.getR() * c.getR();
	
	if (distance < c_sq)
		cout << "全局函数判断：点在圆内" << endl;
	else if(distance == c_sq)
		cout << "全局函数判断：点在圆上" << endl;
	else
		cout << "全局函数判断：点在圆外" << endl;
}

int main()
{
	Point p1;
	p1.setX(10);
	p1.setY(0);
	Circle c;
	c.setP(p1);
	c.setR(10);

	Point p2;
	p2.setX(10);
	p2.setY(10);

	isInCircle(c, p2);

	return 0;
}
