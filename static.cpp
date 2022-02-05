#include <iostream>
using namespace std;

class Person
{
public:
	static void func()
	{
		m_A = 100;//静态成员函数可以访问静态成员变量
		//m_B = 100;//静态成员函数不能访问非静态成员变量
		cout << "static void func 的调用" << endl;
	}

	static int m_A;//静态成员变量
	int m_B;//非静态成员变量
private:
	static void func2()
	{
		cout << "static void func2 的调用" << endl;
	}
}

int Person::m_A = 0;

void test01()
{
	Person p;
	p.func;
	//通过对象访问
	Person::func();
	//通过类名访问
	//Person::func2();
	//类外不能访问私有静态成员函数

}

int main()
{
	return 0;
}