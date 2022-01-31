#include <iostream>
using namespace std;

int func(int a,int b,int c = 30)//函数默认参数
{
	//返回值类型 函数名 （形参=默认值）{}
	return a+b+c;
}

//如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须有默认值
//默认实参必须在函数参数的结尾
//函数声明有默认参数，函数实现就不能有默认参数
//声明和实现只能有一个有默认参数，不能同时拥有
// int func2(int a = 10,int b = 10);

// int func2(int a = 10,int b = 10)
// {
// 	return a+b;
// }
//不能这样
int main()
{
	func(1);//得到6如果没有传入则使用默认值
	func(1,3);//得到7如果传参则使用传入的数据
	return 0;
}