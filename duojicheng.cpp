#include <iostream>
using namespace std;
class Base1
{
	int m_A = 100;
};

class Base2
{
	int m_B = 200;
	//int m_A = 200当父类中出现同名成员，使用作用域区分
};

class Son :public Base1, public Base2
{
	int m_C = 300;
	int m_D = 400;
};

int main()
{
	return 0;
}