#include <iostream>
using namespace std;
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
}
class Son1 :public Base1
{
public:
	void func()
	{
		m_A = 10;//父类公共权限成员，到子类中依然是公共权限
		m_B = 10;//父类保护权限成员，到子类中依然是保护权限
		//m_C = 10;//父类私有权限成员，子类无法访问
	}
	int b;
}
void test01()
{
	Son1 s1;
	s1.m_A = 100;
	//s1.m_B = 100;保护权限无法访问
}
class Son2 :protected Base1
{
public:
	void func()
	{
		m_A = 10;//父类公共权限成员，到子类中变为保护权限
		m_B = 10;//父类保护权限成员，到子类中依然是保护权限
		//m_C = 10;//父类私有权限成员，子类无法访问
	}
	int b;
}
void test02()
{
	Son2 s2;
	//s1.m_A = 100;同为保护权限无法访问
	//s1.m_B = 100;保护权限无法访问
}
class Son3 :private Base1
{
public:
	void func()
	{
		m_A = 10;//父类公共权限成员，到子类中变为私有成员
		m_B = 10;//父类保护权限成员，到子类中变为私有成员
		//m_C = 10;//父类私有权限成员，子类无法访问
	}
	int b;
}
void test03()
{
	Son3 s3;
	//s1.m_A = 100;私有成员无法访问
	//s1.m_B = 100;私有成员无法访问
}

//calss 子类 : 继承方式 父类
int main()
{
	return 0;
}