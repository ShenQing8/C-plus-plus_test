#include <iostream>
#include <vector>     //���������ͷ�ļ�
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
//	v1.push_back(10);  //���Ԫ��
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
	v1.push_back(1);  //β�����Ԫ��
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(3);
	printVec(v1);

	v1.pop_back();    //β��ɾ��Ԫ��
	printVec(v1);

	v1.insert(v1.begin(), 100);      //����Ԫ��100
	printVec(v1);

	v1.insert(v1.begin(), 5, 100);   //����5��Ԫ��100
	printVec(v1);

	v1.erase(v1.begin() + 6);    //ɾ��Ԫ��
	printVec(v1);

	v1.clear();				 //�������
	printVec(v1);
}

int main()
{
	test01();
	system("pause");
	return 0;
}
