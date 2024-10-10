#include <iostream>
using namespace std;

//常函数：在函数后加const，就把原  类名* const this   变成了  const 类名* const this
//常函数内不可修改成员属性
//即this指向的值可改，指向不可改 ------->this的指向和值都不能改
class Person
{
public:
	void func1() const  //const修饰后，*this不可改
	{
		//this->m_A = 100;
		m_B = 100;
	}

	int m_A;
	mutable int m_B;//mutable修饰后的成员可以在常函数中修改，mutable:可变的
};

//1、常函数
void test1()
{
	Person p;
	p.func1();
	cout << p.m_B << endl;
}

//2、常对象
void test2()
{
	//常对象不能修改一般成员变量，但可修改mutable修饰的成员变量
	//常对象只能调用常函数
	const Person p;
	p.func1();
	//p.m_A = 100;
	p.m_B = 200;
	cout << p.m_B << endl;
}

int main()
{
	test1();
	test2();
	return 0;
}