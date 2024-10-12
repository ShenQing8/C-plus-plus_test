#include <iostream>
using namespace std;

// 创建父类
class AbstrickDink
{
public:
	void MakeDrink()
	{
		Boil();
		Brew();
		PullInCub();
		AddSomething();
	}
protected:
	// 煮水
	virtual void Boil() = 0;
	// 冲泡
	virtual void Brew() = 0;
	// 倒入杯中
	virtual void PullInCub() = 0;
	// 加入辅料
	virtual void AddSomething() = 0;
};

// 泡茶
class Tea :public AbstrickDink
{
	virtual void Boil()
	{
		cout << "煮山泉水" << endl;
	}
	virtual void Brew()
	{
		cout << "冲泡茶叶" << endl;
	}
	virtual void PullInCub()
	{
		cout << "倒入杯中" << endl;
	}
	virtual void AddSomething()
	{
		cout << "加入枸杞" << endl;
	}

};

// 冲咖啡
class Cof :public AbstrickDink
{
	virtual void Boil()
	{
		cout << "煮纯净水" << endl;
	}
	virtual void Brew()
	{
		cout << "冲泡咖啡" << endl;
	}
	virtual void PullInCub()
	{
		cout << "倒入杯中" << endl;
	}
	virtual void AddSomething()
	{
		cout << "加入牛奶" << endl;
	}

};

void make_drink(AbstrickDink& drink)
{
	drink.MakeDrink();
}
void test1()
{
	Tea drink1;
	make_drink(drink1);
	cout << "----------------" << endl;
	Cof drink2;
	make_drink(drink2);
}

int main()
{
	test1();
	return 0;
}
