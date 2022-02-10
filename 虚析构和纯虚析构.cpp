#include <iostream>
#include <string>
using namespace std;
class Animal
{
public:
	Animal()
	{
		cout << "animal构造函数的调用" << endl;
	}
	//纯虚函数
	virtual void speak() = 0;
	//利用虚析构可以解决父类指针释放子类对象不干净的问题
	//virtual ~Animal()
	//{
	//	cout << "animal析构函数的调用" << endl;
	//}
	//纯虚析构需要声明也需要实现
	virtual ~Animal() = 0;
};
//类外定义实现
Animal ::~Animal()
{}
class Cat :public Animal
{
public:
	Cat(string name)
	{
		cout << "cat的构造函数调用" << endl;
		m_name = new string(name);
	}
	string* m_name;
	virtual void speak()
	{
		cout << *m_name << "小猫在说话" << endl;
	}
	~Cat()
	{
		if (m_name != NULL)
		{
			cout << "cat的析构函数的调用" << endl;
			delete m_name;
			m_name = NULL;
		}
	}
};
void test01()
{
	Animal *animal = new Cat("Tom");
	animal->speak();
	delete animal;
}
int main()
{
	test01();
	return 0;
}