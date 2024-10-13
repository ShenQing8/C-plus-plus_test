#include <iostream>
using namespace std;
#include <string>
// 继承方式：
// 公共继承  public  父类名
// 保护继承  protect 父类名
// 私有继承  private 父类名

// 虚继承可以解决菱形继承的 多同名成员问题
//      父类 ←---------虚基类   
//     /    \
// 子类1    子类2 ←-----虚继承语法：virtual 继承方式 父类名
//     \    /
//      孙子 ←---------此时孙子再正常继承两个子类
// 
// 假设父类中有一个成员 Age，此时子类和孙子公用一个 Age
// 内存中也只存在一个 Age
// 而子类继承到的是一个指针，指向 Age
// 孙子继承到的也就是两个指针，都指向 Age
//

class AbstrickPhone
{
public:
	string m_brand;
	int m_idnum;
};

class HuaWei :public AbstrickPhone
{
public:
	//HuaWei() {};
	HuaWei(string brand) : AbstrickPhone::m_brand(brand) {}
	//string m_str;

};

void test1()
{
	HuaWei huawei_puar70("huawei");
	cout << sizeof(huawei_puar70) << endl;
}

int main()
{
	test1();
	return 0;
}
