#include <iostream>
#include <string>
using namespace std;
class Calculator
{
public:
	int getResult(string oper)
	{
		if(oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if(oper == "-")
		{
			return m_Num1 - m_Num2;
		}
		else if(oper == "*")
		{
			return m_Num1 * m_Num2;
		}
	}
	int m_Num1;
	int m_Num2;
};
void test01()
{
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;
	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult <<endl;
}

//利用多态
//多态好处：组织结构清晰
//可读性强
//
//实现计算器的基类
class AbstractCalculator
{
public:
	virtual int getResult()
	{
		return 0;
	}
	int m_Num1;
	int m_Num2;
};
//加法计算器类
class AddCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};
class SubCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};
class MulCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 * m_Num2;
	}
};
void test02()
{
	//多态使用条件
	//父类指针或者引用 指向子类对象
	//加法运算
	AbstractCalculator *abc = new AddCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult << endl;
	//用完销毁
	delete abc;
}
int main()
{
	test01();
	test02();
	return 0;
}