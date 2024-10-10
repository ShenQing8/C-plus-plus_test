#include <iostream>
using namespace std;

class Person
{
	friend ostream& operator<< (ostream& cout, Person& p);

public:
	//ostream& operator<< (ostream& cout)
	//{
	//	cout << m_A << "\n";
	//	cout << m_B << endl;
	//	return cout;
	//}

	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}

private:
	int m_A;
	int m_B;
};
class MyInteger
{
	friend ostream& operator<< (ostream& cout, MyInteger& i);
	friend MyInteger& operator++(MyInteger& i);
	friend MyInteger operator++(MyInteger& i, int);

public:
	MyInteger()
	{
		m_Num = 0;
	}
	~MyInteger()
	{
		if (m_p != NULL)
		{
			delete m_p;
			m_p = NULL;
		}
	}
	void operator=(MyInteger& a)
	{
		if (m_p != NULL)
		{
			delete m_p;
			m_p = NULL;
		}
		m_p = new int(*(a.m_p));
	}

	int* m_p;
private:
	int m_Num;
};

ostream& operator<< (ostream& cout, Person& p)
{
	cout << "m_A = " << p.m_A << "\n";
	cout << "m_B = " << p.m_B << endl;
	return cout;
}	  
ostream& operator<< (ostream& cout, MyInteger& i)
{
	cout << i.m_Num;
	return cout;
}
MyInteger& operator++(MyInteger& i)//重载前置++
{
	//先加
	i.m_Num += 1;
	//后返回
	return i;
}
MyInteger operator++(MyInteger& i, int)//重载后置++，未解决凑他直接输出不匹配的问题
{
	//先创建临时变量存储
	MyInteger tmp = i;
	//再加
	i.m_Num += 1;
	//后返回临时变量
	return tmp;
}


void test1()
{
	Person p1(10, 10);
	//operator<< (cout, p1);
	//p1 << cout << endl;
	cout << p1 << endl;
}
void test2()
{
	MyInteger my_int;
	cout << ++my_int << endl;
	MyInteger tmp = my_int++;
	cout << tmp << endl;
	cout << my_int << endl;
	//cout << my_int++ << endl;
	//cout << operator++(my_int, 10) << endl;
}
void test3()
{
	MyInteger i;
	MyInteger j;
	++i;
	i.m_p = new int(10);
	j = i;
	cout << "i的my_int = " << i << endl;
	cout << "j的my_int = " << j << endl;
}

int main()
{
	//运算符重载
	//test1();
	//test2();
	test3();

	return 0;
}
