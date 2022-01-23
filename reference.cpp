#include <iostream>
using namespace std;


//值传递函数
void mySwap01(int a,int b)
{
	int temp = a;
	a = b;
	b = temp;
	//值传递形参不会影响实参
}
//地址传递函数
void mySwap02(int *a,int*b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	//地址交换数值函数
}
//引用传递函数
int mySwap03(int &a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
	//同值传递 引用传递形参也会改变实参
}

int main()
{
	int a = 10;
	//创建引用
	int &b = a;
	//引用基本语法
	//应用必须初始化（声明时）
	//引用一旦初始化，就不能更改了 int &b = c 不可以
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	b = 100;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	//改变引用值，原值同样改变

	return 0;
}