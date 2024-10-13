#include <iostream>
using namespace std;
#include <string>
// 多态分类：
// 1、静态多态：函数承载、运算符重载
// 2、动态多态：派生类和虚函数实现运行时多态

// 多态条件：
// 1、有继承关系
// 2、子类重写父类的虚函数

// 多态使用条件
// 父类指针或引用指向子类对象

// 虚析构函数，用来delete一个动态分配的对象的指针

class Animal
{
public:
	virtual void Voice()
	{
		cout << "叫" << endl;
	}

	string* m_pname;
	int a;
};
class Cat :public Animal
{
public:
	//Cat(string name) :m_pname(new string(name)) {};
	void Voice()
	{
		cout << "喵喵喵" << endl;
	}
};
class Dog :public Animal
{
//public:
//	void Voice()
//	{
//		cout << "汪汪汪" << endl;
//	}
};

void make_voice(Animal& m)// Animal& m  = cat
{
	m.Voice();
}

void test1()
{
	Cat cat("Tom");
	Dog dog("DaHuang");
	make_voice(cat);
	make_voice(dog);
}

//// 父类接口
//class Calculater
//{
//public:
//	virtual int getResult() = 0;
//
//	int m_Num1;
//	int m_Num2;
//};
//// 加
//class AddCalculater :public Calculater
//{
//public:
//	int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
//// 减
//class SubCalculater :public Calculater
//{
//public:
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
//// 乘
//class MulCalculater :public Calculater
//{
//public:
//	int getResult()
//	{
//		return m_Num1 * m_Num2;
//	}
//};
//
//void test2()
//{
//	//AddCalculater add;             //父类引用指向子类
//	//Calculater& mem = add;
//	Calculater* mem = new AddCalculater;//父类指针指向子类
//	mem->m_Num1 = 100;
//	mem->m_Num2 = 100;
//	cout << mem->m_Num1 << " + " << mem->m_Num2 << " = " << mem->getResult() << endl;
//	delete mem;
//
//	mem = new SubCalculater;
//	mem->m_Num1 = 100;
//	mem->m_Num2 = 100;
//	cout << mem->m_Num1 << " - " << mem->m_Num2 << " = " << mem->getResult() << endl;
//	delete mem;
//
//	mem = new MulCalculater;
//	mem->m_Num1 = 100;
//	mem->m_Num2 = 100;
//	cout << mem->m_Num1 << " * " << mem->m_Num2 << " = " << mem->getResult() << endl;
//	delete mem;
//
//	AddCalculater add;
//	add.m_Num1 = 10;
//	add.m_Num2 = 20;
//	cout << add.getResult() << endl;
//}


int main()
{
	//test1();//动物叫案例
	//test2();  //计算器案例
	return 0;
}
