#include <iostream>
#include <string>
#include <fstream>
using namespace std;
// ��д�ļ����裺
// 1������ͷ�ļ� <fstream>
// 2����������   �ٶ�������Ϊ  file
//        ifstream -- ��     ofstream -- д    fstream -- ��д
// 3�����ļ���file.open("�ļ�·��", �򿪷�ʽ); ����˳������Ƿ�ɹ�
// 4�������ļ�
// 5���ر��ļ���file.close();

// д�ļ�

//int main()
//{
//	// 2����������
//	ofstream ofm;
//	// 3�����ļ�
//	ofm.open("test.txt", ios::out);
//	if (!ofm.is_open()) // �жϴ��Ƿ�ɹ�
//	{
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//	// 4�������ļ�
//	ofm << "����" << endl;
//	ofm << "����" << endl;
//
//	// 5���ر��ļ�
//	ofm.close();
//
//	return 0;
//}

// ���ļ�

int main()
{
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return 1;
	}
	// ���ļ����ַ�ʽ
	// ��һ��: ֱ��ȫ����ȡ
	//char buf[1024] = { 0 };
	//while (ifs >> buf)
	//{
	//	cout << buf << endl;
	//}
	// �ڶ��֣�һ���еض�
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}
	// �����֣���string�ַ�������
	string buf;
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}
	// �����֣�һ���ַ�һ���ַ��ض������Ƽ�
	char c;
	while ((c = ifs.get()) != EOF)
	{
		cout << c;
	}

	ifs.close();

	return 0;
}
