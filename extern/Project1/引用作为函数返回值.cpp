//#include <iostream>
//using namespace std;
//
//int& test1()
//{
//	int x = 10;  //xΪ�ֲ������������ջ�����������н���ʱ��������
//	return x;    //��˲��ɷ��ؾֲ���������
//}
//
//int& test2()
//{
//	static int x = 10; //static���κ�x�����ȫ��������������ʱ������
//	return x;          //�ɷ���
//}
//
//int main()
//{
//	int& a = test1();
//	cout << a << '\n';
//	cout << a << '\n';
//
//	int& b = test2();
//	cout << b << '\n';
//	test2() = 16;            //��������Ϊ��������ֵʱ����Ϊ��ֵ
//	cout << b << '\n';
//	cout << b << '\n';
//
//
//	system("pause");
//	return 0;
//}
