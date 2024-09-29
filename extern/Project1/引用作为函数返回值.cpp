//#include <iostream>
//using namespace std;
//
//int& test1()
//{
//	int x = 10;  //x为局部变量，存放在栈区，函数运行结束时变量销毁
//	return x;    //因此不可返回局部变量引用
//}
//
//int& test2()
//{
//	static int x = 10; //static修饰后，x存放在全局区，函数结束时不销毁
//	return x;          //可返回
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
//	test2() = 16;            //且引用作为函数返回值时可作为左值
//	cout << b << '\n';
//	cout << b << '\n';
//
//
//	system("pause");
//	return 0;
//}
