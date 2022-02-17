#include <iostream>
using namespace std;
class CPUAbstract
{
public:
	//抽象计算函数
	virtual void Calculate() = 0;
};
class GPUAbstract
{
public:
	//抽象显示函数
	virtual void Display() = 0;
};
class ROMAbstract
{
public:
	//抽象储存函数
	virtual void Storage() = 0;
};
//电脑类
class Computer
{
public:
	Computer(CPUAbstract* cpu, GPUAbstract* gpu, ROMAbstract* rom)
	{
		m_cpu = cpu;
		m_gpu = gpu;
		m_rom = rom;
	}
	void work()
	{
		m_cpu->Calculate();
		m_gpu->Display();
		m_rom->Storage();
	}
	//提供一个析构函数释放电脑的零件
	~Computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_gpu != NULL)
		{
			delete m_gpu;
			m_gpu = NULL;
		}
		if (m_rom != NULL)
		{
			delete m_rom;
			m_rom = NULL;
		}
	}
private:
	CPUAbstract* m_cpu;
	GPUAbstract* m_gpu;
	ROMAbstract* m_rom;
};
class IntelCPU :public CPUAbstract
{
public:
	virtual void Calculate()
	{
		cout << "Intel cpu 开始计算了" << endl;
	}
};
class IntelGPU :public GPUAbstract
{
public:
	virtual void Display()
	{
		cout << "Intel gpu 开始显示了" << endl;
	}
};
class IntelROM :public ROMAbstract
{
public:
	virtual void Storage()
	{
		cout << "Intel rom 开始存储了" << endl;
	}
};
class LenovoCPU :public CPUAbstract
{
public:
	virtual void Calculate()
	{
		cout << "Lenovo cpu 开始计算了" << endl;
	}
};
class LenovoGPU :public GPUAbstract
{
public:
	virtual void Display()
	{
		cout << "Lenovo gpu 开始显示了" << endl;
	}
};
class LenovoROM :public ROMAbstract
{
public:
	virtual void Storage()
	{
		cout << "Lenovo rom 开始存储了" << endl;
	}
};

void test01()
{
	//第一台电脑组装
	CPUAbstract* IntelCpu = new IntelCPU;
	GPUAbstract* IntelGpu = new IntelGPU;
	ROMAbstract* IntelRom = new IntelROM;
	Computer* computer1 = new Computer(IntelCpu, IntelGpu, IntelRom);
	computer1->work();
	delete computer1;

	cout << "---------------------" << endl;

	//第二台电脑组装
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoGPU, new LenovoROM);
	computer2->work();
	delete computer2;

	cout << "---------------------" << endl;

	//第三台电脑组装
	Computer* computer3 = new Computer(new LenovoCPU, new IntelGPU, new IntelROM);
	computer3->work();
	delete computer3;
}

int main()
{
	test01();
	return 0;
}