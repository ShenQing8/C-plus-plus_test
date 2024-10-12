#include <iostream>
using namespace std;

// ��������
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
	// ��ˮ
	virtual void Boil() = 0;
	// ����
	virtual void Brew() = 0;
	// ���뱭��
	virtual void PullInCub() = 0;
	// ���븨��
	virtual void AddSomething() = 0;
};

// �ݲ�
class Tea :public AbstrickDink
{
	virtual void Boil()
	{
		cout << "��ɽȪˮ" << endl;
	}
	virtual void Brew()
	{
		cout << "���ݲ�Ҷ" << endl;
	}
	virtual void PullInCub()
	{
		cout << "���뱭��" << endl;
	}
	virtual void AddSomething()
	{
		cout << "�������" << endl;
	}

};

// �忧��
class Cof :public AbstrickDink
{
	virtual void Boil()
	{
		cout << "�󴿾�ˮ" << endl;
	}
	virtual void Brew()
	{
		cout << "���ݿ���" << endl;
	}
	virtual void PullInCub()
	{
		cout << "���뱭��" << endl;
	}
	virtual void AddSomething()
	{
		cout << "����ţ��" << endl;
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
