#include <iostream>
using namespace std;
#include <string>
// ��̬���ࣺ
// 1����̬��̬���������ء����������
// 2����̬��̬����������麯��ʵ������ʱ��̬

// ��̬������
// 1���м̳й�ϵ
// 2��������д������麯��

// ��̬ʹ������
// ����ָ�������ָ���������

// ����������������deleteһ����̬����Ķ����ָ��

class Animal
{
public:
	virtual void Voice()
	{
		cout << "��" << endl;
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
		cout << "������" << endl;
	}
};
class Dog :public Animal
{
//public:
//	void Voice()
//	{
//		cout << "������" << endl;
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

//// ����ӿ�
//class Calculater
//{
//public:
//	virtual int getResult() = 0;
//
//	int m_Num1;
//	int m_Num2;
//};
//// ��
//class AddCalculater :public Calculater
//{
//public:
//	int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
//// ��
//class SubCalculater :public Calculater
//{
//public:
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
//// ��
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
//	//AddCalculater add;             //��������ָ������
//	//Calculater& mem = add;
//	Calculater* mem = new AddCalculater;//����ָ��ָ������
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
	//test1();//����а���
	//test2();  //����������
	return 0;
}
