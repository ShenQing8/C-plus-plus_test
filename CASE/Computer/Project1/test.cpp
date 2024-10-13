#include <iostream>
#include <string>
using namespace std;

// �������ࣺcup���Կ����ڴ���
class CPU
{
public:
	// cpu��������
	virtual void cpu_run() = 0;
};
class VideoCard
{
public:
	// �Կ���������
	virtual void videocard_run() = 0;
};
class Memory
{
public:
	// �ڴ�����������
	virtual void memory_run() = 0;
};


// ����
// Intel
class IntelCPU :public CPU
{
public:
	void cpu_run()
	{
		cout << "Intel��cpu��ʼ������" << endl;
	}
};
// �����洢
class LongRiverMemory :public Memory
{
public:
	void memory_run()
	{
		cout << "�����洢��ʼ������" << endl;
	}
};
// ���Ǵ洢
class SamsungMemeory :public Memory
{
public:
	void memory_run()
	{
		cout << "���Ǵ洢��ʼ������" << endl;
	}
};
// Ӣΰ��RTX
class RTXVideoCard :public VideoCard
{
public:
	void videocard_run()
	{
		cout << "RTX�Կ���ʼ������" << endl;

	}
};
// AMD
class AMDCPU :public CPU
{
public:
	void cpu_run()
	{
		cout << "AMD��cpu��ʼ������" << endl;
	}
};
class AMDVideoCard :public VideoCard
{
public:
	void videocard_run()
	{
		cout << "AMD�Կ���ʼ������" << endl;

	}
};

// ������
class Computer
{
public:
	// �������������ָ��
	Computer(CPU* cpu, VideoCard* vdc, Memory* mem) :p_cpu(cpu), p_videocard(vdc), p_memory(mem) {}
	~Computer()
	{
		if (p_cpu != NULL)
		{
			delete p_cpu;
			p_cpu = NULL;
		}
		if (p_videocard != NULL)
		{
			delete p_videocard;
			p_videocard = NULL;
		}
		if (p_memory != NULL)
		{
			delete p_memory;
			p_memory = NULL;
		}
	}
	void run()
	{
		p_cpu->cpu_run();
		p_videocard->videocard_run();
		p_memory->memory_run();
	}
private:
	CPU* p_cpu;
	VideoCard* p_videocard;
	Memory* p_memory;
};


//// ��װ����
//// ��е����
//class MECHREVO: public Computer
//{
//public:
//
//	virtual void run()
//	{
//		p_cpu->cpu_run();
//		p_videocard->videocard_run();
//		p_memory->memory_run();
//	}
//};
//// Lenovo
//class Lenovo
//{
//	// ����CPU
//
//	// �Կ�
//
//	// �ڴ���
//};
//// ROG
//class ROG
//{
//	// ����CPU
//
//	// �Կ�
//
//	// �ڴ���
//};


void test1()
{
	CPU* cpu = new IntelCPU;
	VideoCard* vdc = new RTXVideoCard;
	Memory* mem = new LongRiverMemory;
	//Computer mechrevo(cpu, vdc, mem);
	//mechrevo.run();
	Computer* mechrevo = new Computer(cpu, vdc, mem);
	mechrevo->run();
	delete mechrevo;
}


int main()
{
	test1();
	return 0;
}
