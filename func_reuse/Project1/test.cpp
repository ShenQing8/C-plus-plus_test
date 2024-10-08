#include <iostream>
using namespace std;

//函数重载
//条件：
//1、同一作用域下
//2、函数名称相同
//3、函数参数 类型不同 或 个数不同 或 顺序不同
//注：函数返回值不能作为函数重载的条件

//函数重载注意事项：
//1、引用作为重载条件
void func(int& a)        //（int& a = 一个变量时），是合法的，但等于常量时，是不合法的。原因是存储的位置不同
{
	cout << "func(int& a) 的调用" << endl;
}
void func(const int& a) //（const int& a = 一个变量 或 常量时），都是合法的。
{
	cout << "func(const int& a) 的调用" << endl;
}

//2、函数重载遇到默认参数
//应尽量避免函数重载遇到默认参数的情况
void func2(int a)
{
	cout << "func2(int a)的调用" << endl;
}
void func2(int a, int b = 10)
{
	cout << "func2(int a, int b = 10)的调用" << endl;
}

int main()
{
	int a = 10;
	func(a);
	func(10);
	const int& b = a;

	//func2(a);  当只传一个参数时是不合法的，因为另一个同名函数有一个默认参数
	func2(10, 20);

	return 0;
}
