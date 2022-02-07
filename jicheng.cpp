#include <iostream>
using namespace std;

class Base
{
	int m_A;
	static int m_B;
	void func()
	{
		cout << "base 中 func" << endl;
	}
	void func(int a)
	{
		cout << "base 中 func(int a)" << endl;
	}
	static func1()
	{
		cout << "static func1调用" << endl;
	}
};
int Base::m_B = 100;

class Son :public Base
{
	int m_A;
	static int m_B;
	void func()
	{
		cout << "son 中 func" << endl;	
	}
	static func1()
	{
		cout << "static func1调用" << endl;
	}
};
int Son::m_B = 200;

void test01()
{
	Son s1;
	cout << "son m_A = " << s1.m_A << endl;//同名成员变量,直接访问子类同名成员
	cout << "base m_A = " << s1.Base::m_A << endl;//父类成员变量
	s1.func();//直接访问子类成员函数
	s1.Base::func();//同名成员函数
	s1.Base::func(1);//父类同名成员函数重载
}

void test02()
{
	//通过对象访问
	Son s;
	cout << "通过对象访问" << endl;
	cout << "son 下 m_B ：" << s.m_B << endl;
	cout << "base 下 m_B ：" << s.Base::m_B << endl;
	//通过类名访问
	cout << "通过类名访问" << endl;
	cout << "Son 下的m_B" << Son::m_B << endl;
	cout << "Base 下的m_B" << Son::Base::m_B << endl;
	//第一个双冒号，类名方式访问
	//第二个双冒号，父类作用域下
	//静态成员函数同理
	s.func1();
	s.Base::func1();
	Son::func1();
	Son::Base::func1();
}
int main()
{
	test01();
	test02();
	return 0;
}