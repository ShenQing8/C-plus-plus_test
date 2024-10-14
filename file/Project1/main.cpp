#include <iostream>
#include <string>
#include <fstream>
using namespace std;
// 读写文件步骤：
// 1、包含头文件 <fstream>
// 2、创建对象：   假定对象名为  file
//        ifstream -- 读     ofstream -- 写    fstream -- 读写
// 3、打开文件：file.open("文件路径", 打开方式); ，并顺便检测打开是否成功
// 4、操作文件
// 5、关闭文件：file.close();

// 写文件

//int main()
//{
//	// 2、创建对象
//	ofstream ofm;
//	// 3、打开文件
//	ofm.open("test.txt", ios::out);
//	if (!ofm.is_open()) // 判断打开是否成功
//	{
//		cout << "文件打开失败" << endl;
//		return;
//	}
//	// 4、操作文件
//	ofm << "张三" << endl;
//	ofm << "李四" << endl;
//
//	// 5、关闭文件
//	ofm.close();
//
//	return 0;
//}

// 读文件

int main()
{
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return 1;
	}
	// 读文件几种方式
	// 第一种: 直接全部读取
	//char buf[1024] = { 0 };
	//while (ifs >> buf)
	//{
	//	cout << buf << endl;
	//}
	// 第二种：一行行地读
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}
	// 第三种：用string字符串接收
	string buf;
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}
	// 第四种：一个字符一个字符地读，不推荐
	char c;
	while ((c = ifs.get()) != EOF)
	{
		cout << c;
	}

	ifs.close();

	return 0;
}
