#include <iostream>
using namespace std;

class Person
{
	Person()
	{
		cout << "无参构造函数的调用" << endl;
		//生成时调用函数
	}
	Person(int a)
	{
		age = a;
		cout << "有参构造函数的调用" << endl;
	}
	Person( const Person &p)
	{
		age = p.age;
		cout << "拷贝构造函数的调用" << endl;
	}

	~Person()
	{
		cout << "析构函数的调用" << endl;
		//销毁时调用函数
	}
	int age;
}

void test01()
{
	Person p1;
	Person p2(10);
	Person p3;
	//括号法

	Person p4 = Person(10);
	Person p5 = Person(p4);
	//显式转换法

	Person p6 = 10;
	Person p7 = p6;
	//隐式转换法

	cout << "p2 的年龄是" << p2.age << endl;
	cout << "p3 的年龄是" << p3.age << endl;
}

void doWork( Person p)
{

}
void test02()
{
	Person p;
	doWork(p);
	//值传递的方式给函数传值
}
Person doWork2()
{
	Person p1;
	return p1;
}
void test03()
{
	Person p = doWork2();
	//值返回局部对象
}

int main(void)
{
	test01();
	return 0;
}