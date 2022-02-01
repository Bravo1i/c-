#include <iostream>
using namespace std;

class Person
{
	Person()
	{
		cout << "无参构造函数的调用" << endl;
		//生成时调用函数
	}
	Person(int a,int h)
	{
		age = a;
		height = new int(h);
		cout << "有参构造函数的调用" << endl;
	}
	Person( const Person &p)
	//自己构建拷贝函数避免浅拷贝问题
	{
		age = p.age;
		//height = p.height;
		//编译器自带拷贝函数
		height = new int(*p.height);
		cout << "拷贝构造函数的调用" << endl;
	}

	~Person()
	{
		if(height != NULL)
		{
			delete height;
			height = NULL;
			//出现浅拷贝问题
		}
		cout << "析构函数的调用" << endl;
		//销毁时调用函数
	}
	int age;
	int *height;
}

int main(void)
{
	p1 = Person(10,&160);
	p2 = Person(p1);
}