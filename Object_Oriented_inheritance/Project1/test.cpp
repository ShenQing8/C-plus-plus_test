#include <iostream>
using namespace std;
#include <string>
// �̳з�ʽ��
// �����̳�  public  ������
// �����̳�  protect ������
// ˽�м̳�  private ������

// ��̳п��Խ�����μ̳е� ��ͬ����Ա����
//      ���� ��---------�����   
//     /    \
// ����1    ����2 ��-----��̳��﷨��virtual �̳з�ʽ ������
//     \    /
//      ���� ��---------��ʱ�����������̳���������
// 
// ���踸������һ����Ա Age����ʱ��������ӹ���һ�� Age
// �ڴ���Ҳֻ����һ�� Age
// ������̳е�����һ��ָ�룬ָ�� Age
// ���Ӽ̳е���Ҳ��������ָ�룬��ָ�� Age
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
