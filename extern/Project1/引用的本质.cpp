#include <iostream>
using namespace std;

//��������ʱ�������������ã�������������Ϊ int* x = &a
int& test(int& x)
{
	x *= 10;
	static int y = 30;
	return y;
}

int main()            //���õı�����ָ��
{
	int a = 10;
	int& p = a;       //���ý���䷭��Ϊ int* const p = &a;
	                  //�� p ָ��ĵ�ַ�����Ա�
	p = 20;           //ָ���ֵ���Ա䣬��䷭��Ϊ *p = 20;

	cout << "a:" << a << endl;
	cout << "p:" << p << endl;

	int& b = test(a);    //��������ֵΪ����ʱ���˷���Ϊ int* const b = &y;
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;

	system("pause");
	return 0;
}
