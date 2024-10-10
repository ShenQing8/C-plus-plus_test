#include <iostream>
using namespace std;
#include <string>
// 友元，可让设置为友元的
// 全局函数
// 类
// 成员函数
// 访问类中的私有模块（private）

class Building;
class GoodGay
{
public:
	GoodGay();//构造函数
	void visit_for_games();
	void visit_for_gay();

private:
	Building* building;
};
class Building
{
	friend void police(Building& bu);
	friend void GoodGay::visit_for_games();

public:
	Building();

	string setting_room;

private:
	string bed_room;
};

Building::Building()
{
	setting_room = "客厅";
	bed_room = "卧室";
}
GoodGay::GoodGay()
{
	building = new Building;
}
void GoodGay::visit_for_games()
{
	cout << "goodgay正在" << building->setting_room << "打游戏" << endl;
	cout << "goodgay正在" << building->bed_room << "打游戏" << endl;
}
void GoodGay::visit_for_gay()
{
	cout << "goodgay要来" << building->setting_room << endl;
}

void police(Building& bu)
{
	cout << "警察去了" << bu.setting_room << endl;
	cout << "警察去了" << bu.bed_room << endl;
}

void test1()
{
	GoodGay gg;
	gg.visit_for_games();
	gg.visit_for_gay();
}

int main()
{
	test1();
	Building bu;
	police(bu);

	return 0;
}
