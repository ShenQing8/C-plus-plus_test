#include <iostream>
using namespace std;

//��������
//������
//1��ͬһ��������
//2������������ͬ
//3���������� ���Ͳ�ͬ �� ������ͬ �� ˳��ͬ
//ע����������ֵ������Ϊ�������ص�����

//��������ע�����
//1��������Ϊ��������
void func(int& a)        //��int& a = һ������ʱ�����ǺϷ��ģ������ڳ���ʱ���ǲ��Ϸ��ġ�ԭ���Ǵ洢��λ�ò�ͬ
{
	cout << "func(int& a) �ĵ���" << endl;
}
void func(const int& a) //��const int& a = һ������ �� ����ʱ�������ǺϷ��ġ�
{
	cout << "func(const int& a) �ĵ���" << endl;
}

//2��������������Ĭ�ϲ���
//Ӧ�������⺯����������Ĭ�ϲ��������
void func2(int a)
{
	cout << "func2(int a)�ĵ���" << endl;
}
void func2(int a, int b = 10)
{
	cout << "func2(int a, int b = 10)�ĵ���" << endl;
}

int main()
{
	int a = 10;
	func(a);
	func(10);
	const int& b = a;

	//func2(a);  ��ֻ��һ������ʱ�ǲ��Ϸ��ģ���Ϊ��һ��ͬ��������һ��Ĭ�ϲ���
	func2(10, 20);

	return 0;
}
