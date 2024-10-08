#include <iostream>
using namespace std;
#include "circle.h"
//�жϵ���Բ��λ�ù�ϵ


//ȫ�ֺ����жϵ���Բ��λ�ù�ϵ
void isInCircle(Circle& c, Point& p)
{
	double distance = (c.getP().getX() - p.getX()) * (c.getP().getX() - p.getX()) +
		(c.getP().getY() - p.getY()) * (c.getP().getY() - p.getY());
	double c_sq = c.getR() * c.getR();
	
	if (distance < c_sq)
		cout << "ȫ�ֺ����жϣ�����Բ��" << endl;
	else if(distance == c_sq)
		cout << "ȫ�ֺ����жϣ�����Բ��" << endl;
	else
		cout << "ȫ�ֺ����жϣ�����Բ��" << endl;
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
