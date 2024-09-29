#include <iostream>
using namespace std;

//函数传参时，若发现是引用，编译器将翻译为 int* x = &a
int& test(int& x)
{
	x *= 10;
	static int y = 30;
	return y;
}

int main()            //引用的本质是指针
{
	int a = 10;
	int& p = a;       //引用将这句翻译为 int* const p = &a;
	                  //故 p 指向的地址不可以变
	p = 20;           //指向的值可以变，这句翻译为 *p = 20;

	cout << "a:" << a << endl;
	cout << "p:" << p << endl;

	int& b = test(a);    //函数返回值为引用时，此翻译为 int* const b = &y;
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;

	system("pause");
	return 0;
}
