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

//Ĭ������£�������ʱ�����������ṩ����3��������Ĭ�Ϲ��졢�������졢����
//���û��Զ��幹�캯��������������ṩĬ�Ϲ���


class Student
{
public:
	Student()
	{
		cout << "Ĭ�Ϲ������" << endl;
	}
	//��ʼ���б�
	Student(string name, int age, string id, string sex = "��") :m_Name(name), m_Age(age), m_Id(id), m_Sex(sex)
	{
		cout << "�����������" << endl;
		//m_Age = age;
	}
	Student(const Student& s)
	{
		cout << "�����������" << endl;
		m_Name = s.m_Name;
		m_Age = s.m_Age;
		m_Id = s.m_Id;
		m_Sex = s.m_Sex;
	}
	~Student()
	{
		cout << "������������" << endl;
	}

	//��̬��Ա��������ֱ�ӷ��� �� ��̬��Ա����
	static void func(Student& s)//��̬��Ա����Ҳ�з���Ȩ�ޣ�ͬ��̬��Ա����
	{
		School = "UPUPUP";
		s.m_Age = 19;
	}
	//thisָ��
	//thisָ��ָ�� �����õĳ�Ա���� ������ ����
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
	string m_Name;//�ɶ���д
	int m_Age;    //�ɶ���д
	static string School; //��̬�ĳ�Ա���������ж�����ͬһ�����ݣ����������������ʼ��

	//����Ա����Ϊ˽�У��ɱ��ڹ���
private:
	string m_Id;  //ֻд
	string m_Sex; //ֻ��
	static int School_Num; //����̬��Ա��������Ϊ˽��ʱ�������ʲ���
};
string Student::School = "UUU";
int Student::School_Num = 123456;



int main()
{
	Student stu("����", 18, "2023666666");

	Student stu2(stu);
	cout << stu2.m_Age<< endl;
	
	//��̬��Ա����
	cout << stu.School << endl;
	Student::func(stu);
	cout << Student::School << endl;
	cout << stu.m_Age<< endl;

	//thisָ��Ӧ��
	stu2.Addage(stu).Addage(stu).Addage(stu);
	cout << stu2.m_Age << endl;

	return 0;
}
