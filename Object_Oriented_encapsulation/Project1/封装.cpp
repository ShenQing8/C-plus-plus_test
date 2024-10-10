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

//默认情况下，创建类时，编译器会提供至少3个函数：默认构造、拷贝构造、析构
//如用户自定义构造函数，则编译器不提供默认构造


class Student
{
public:
	Student()
	{
		cout << "默认构造调用" << endl;
	}
	//初始化列表
	Student(string name, int age, string id, string sex = "男") :m_Name(name), m_Age(age), m_Id(id), m_Sex(sex)
	{
		cout << "参数构造调用" << endl;
		//m_Age = age;
	}
	Student(const Student& s)
	{
		cout << "拷贝构造调用" << endl;
		m_Name = s.m_Name;
		m_Age = s.m_Age;
		m_Id = s.m_Id;
		m_Sex = s.m_Sex;
	}
	~Student()
	{
		cout << "析构函数调用" << endl;
	}

	//静态成员函数不可直接访问 非 静态成员变量
	static void func(Student& s)//静态成员函数也有访问权限，同静态成员变量
	{
		School = "UPUPUP";
		s.m_Age = 19;
	}
	//this指针
	//this指针指向 被调用的成员函数 所属的 对象
	Student& Addage(Student& s)
	{
		this->m_Age += s.m_Age;
		return *this;
	}
	void setId(string id)
	{
		m_Id = id;
	}
	string getSex()
	{
		return m_Sex;
	}
	string m_Name;//可读可写
	int m_Age;    //可读可写
	static string School; //静态的成员变量，所有对象共享同一份数据，类内声明，类外初始化

	//将成员设置为私有，可便于管理
private:
	string m_Id;  //只写
	string m_Sex; //只读
	static int School_Num; //当静态成员变量设置为私有时，外界访问不到
};
string Student::School = "UUU";
int Student::School_Num = 123456;



int main()
{
	Student stu("张三", 18, "2023666666");

	Student stu2(stu);
	cout << stu2.m_Age<< endl;
	
	//静态成员访问
	cout << stu.School << endl;
	Student::func(stu);
	cout << Student::School << endl;
	cout << stu.m_Age<< endl;

	//this指针应用
	stu2.Addage(stu).Addage(stu).Addage(stu);
	cout << stu2.m_Age << endl;

	return 0;
}
