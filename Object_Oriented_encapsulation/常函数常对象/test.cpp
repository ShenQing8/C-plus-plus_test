#include <iostream>
using namespace std;

//���������ں������const���Ͱ�ԭ  ����* const this   �����  const ����* const this
//�������ڲ����޸ĳ�Ա����
//��thisָ���ֵ�ɸģ�ָ�򲻿ɸ� ------->this��ָ���ֵ�����ܸ�
class Person
{
public:
	void func1() const  //const���κ�*this���ɸ�
	{
		//this->m_A = 100;
		m_B = 100;
	}

	int m_A;
	mutable int m_B;//mutable���κ�ĳ�Ա�����ڳ��������޸ģ�mutable:�ɱ��
};

//1��������
void test1()
{
	Person p;
	p.func1();
	cout << p.m_B << endl;
}

//2��������
void test2()
{
	//���������޸�һ���Ա�����������޸�mutable���εĳ�Ա����
	//������ֻ�ܵ��ó�����
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