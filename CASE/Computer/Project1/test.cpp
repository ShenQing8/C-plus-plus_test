#include <iostream>
#include <string>
using namespace std;

// 创建基类：cup，显卡，内存条
class CPU
{
public:
	// cpu运作函数
	virtual void cpu_run() = 0;
};
class VideoCard
{
public:
	// 显卡运作函数
	virtual void videocard_run() = 0;
};
class Memory
{
public:
	// 内存条运作函数
	virtual void memory_run() = 0;
};


// 厂商
// Intel
class IntelCPU :public CPU
{
public:
	void cpu_run()
	{
		cout << "Intel的cpu开始计算了" << endl;
	}
};
// 长江存储
class LongRiverMemory :public Memory
{
public:
	void memory_run()
	{
		cout << "长江存储开始计算了" << endl;
	}
};
// 三星存储
class SamsungMemeory :public Memory
{
public:
	void memory_run()
	{
		cout << "三星存储开始计算了" << endl;
	}
};
// 英伟达RTX
class RTXVideoCard :public VideoCard
{
public:
	void videocard_run()
	{
		cout << "RTX显卡开始计算了" << endl;

	}
};
// AMD
class AMDCPU :public CPU
{
public:
	void cpu_run()
	{
		cout << "AMD的cpu开始计算了" << endl;
	}
};
class AMDVideoCard :public VideoCard
{
public:
	void videocard_run()
	{
		cout << "AMD显卡开始计算了" << endl;

	}
};

// 电脑类
class Computer
{
public:
	// 接收三个零件的指针
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


//// 组装电脑
//// 机械革命
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
//	// 配置CPU
//
//	// 显卡
//
//	// 内存条
//};
//// ROG
//class ROG
//{
//	// 配置CPU
//
//	// 显卡
//
//	// 内存条
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
