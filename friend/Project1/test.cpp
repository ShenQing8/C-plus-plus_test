#include <iostream>
using namespace std;
#include <string>
// ��Ԫ����������Ϊ��Ԫ��
// ȫ�ֺ���
// ��
// ��Ա����
// �������е�˽��ģ�飨private��

class Building;
class GoodGay
{
public:
	GoodGay();//���캯��
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
	setting_room = "����";
	bed_room = "����";
}
GoodGay::GoodGay()
{
	building = new Building;
}
void GoodGay::visit_for_games()
{
	cout << "goodgay����" << building->setting_room << "����Ϸ" << endl;
	cout << "goodgay����" << building->bed_room << "����Ϸ" << endl;
}
void GoodGay::visit_for_gay()
{
	cout << "goodgayҪ��" << building->setting_room << endl;
}

void police(Building& bu)
{
	cout << "����ȥ��" << bu.setting_room << endl;
	cout << "����ȥ��" << bu.bed_room << endl;
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
