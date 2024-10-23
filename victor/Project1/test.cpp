#include <iostream>
#include <vector>     //必须包含该头文件
using namespace std;

//void printVec(vector<int>& v)
//{
//	for (vector<int>::iterator At = v.begin(); At != v.end(); At++)
//	{
//		cout << *At << " ";
//	}
//	cout << endl;
//}
//void printVec(vector<double>& v)
//{
//	for (vector<double>::iterator At = v.begin(); At != v.end(); At++)
//	{
//		cout << *At << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int> v1;
//	v1.push_back(10);  //添加元素
//	v1.push_back(20);
//	printVec(v1);
//
//	vector<int> v2(v1.begin(), v1.end());
//	printVec(v2);
//
//	vector<double> v3(5, 6.32);
//	printVec(v3);
//
//	vector<double> v4(v3);
//	printVec(v4);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



void printVec(vector<int>& v)
{
	for (vector<int>::iterator At = v.begin(); At != v.end(); At++)
	{
		cout << *At << " ";
	}
	cout << endl;
}

void test01()
{
	vector<int> v1;
	v1.push_back(1);  //尾部添加元素
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(3);
	printVec(v1);

	v1.pop_back();    //尾部删除元素
	printVec(v1);

	v1.insert(v1.begin(), 100);      //插入元素100
	printVec(v1);

	v1.insert(v1.begin(), 5, 100);   //插入5个元素100
	printVec(v1);

	v1.erase(v1.begin() + 6);    //删除元素
	printVec(v1);

	v1.clear();				 //清空容器
	printVec(v1);
}

int main()
{
	test01();
	system("pause");
	return 0;
}
