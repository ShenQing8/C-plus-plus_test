#include <iostream>
#include <string>
using namespace std;
//��������������ԣ���װ���̳С���̬
//�����������Ժ���Ϊ

//��װ�����壺
//1�������Ժ���Ϊ��Ϊһ�����壬���������е�����
//2�������Ե���Ϊ����Ȩ�޺Ϳ���
//	����Ȩ�� public      ���ڿ��Է��ʣ�����Ҳ���Է���
//	����Ȩ�� protected   ���ڿ��Է��ʣ����ⲻ���Է��ʣ����� ���� ����
//	˽��Ȩ�� private     ���ڿ��Է��ʣ����ⲻ���Է��ʣ����� ���� ����

//struct �� class ������
//struct �ĳ�ԱĬ��Ȩ��Ϊ���� public
//class  �ĳ�ԱĬ��Ȩ��Ϊ˽�� private

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
	//����Ա����Ϊ˽�У��ɱ��ڹ���
private:
	string Name;//�ɶ���д
	string Id;  //ֻд
	string Sex; //ֻ��
	int Age;    //�ɶ���д
};

int main()
{
	Student stu;
	//stu.Name = "����";
	//stu.Id = "202366666";
	//stu.Age = 20;
	//stu.Sex = "��";

	

	return 0;
}
