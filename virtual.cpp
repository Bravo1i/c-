#include <iostream>
using namespace std;
class Base
{
public:
	//纯虚函数
	//只要有一个纯虚函数，这个类就称为抽象类
	//抽象类特点
	//无法实例化对象
	//抽象类的子类 必须重写父类中的纯虚函数，否则也属于抽象类
	virtual void func() = 0;
};
class Son :public Base
{
public:
	virtual void func() {
		cout << "func的调用 " << endl;
	};
};
void test01()
{
	//Base b;
	Son b;
	b.func();
	Base* base = new Son;
	base->func();
}
int main()
{
	test01();
	return 0;
}