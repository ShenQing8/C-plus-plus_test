#include <iostream>
#include <string>
using namespace std;
//面向对象三大特性：封装、继承、多态
//对象有其属性和行为

//封装的意义：
//1、将属性和行为作为一个整体，表现生活中的事物
//2、将属性的行为加以权限和控制
//	公共权限 public      类内可以访问，类外也可以访问
//	保护权限 protected   类内可以访问，类外不可以访问，子类 可以 访问
//	私有权限 private     类内可以访问，类外不可以访问，子类 不可 访问

//struct 和 class 的区别
//struct 的成员默认权限为公共 public
//class  的成员默认权限为私有 private

class Student
{
public:
	void setName(string name)
	{
		Name = name;
	}
	string getName()
	{
		return Name;
	}
	void setId(string id)
	{
		Id = id;
	}
	string getSex()
	{
		return Sex;
	}
	void setAge(int age)
	{
		Age = age;
	}
	int getAge()
	{
		return Age;
	}
	//将成员设置为私有，可便于管理
private:
	string Name;//可读可写
	string Id;  //只写
	string Sex; //只读
	int Age;    //可读可写
};

int main()
{
	Student stu;
	//stu.Name = "张三";
	//stu.Id = "202366666";
	//stu.Age = 20;
	//stu.Sex = "男";

	

	return 0;
}
