#include <iostream>
using namespace std;
//       A
//      / \
//     B   C
//      \ /
//       D
//d从a继承了两份数据
//利用虚继承，解决菱形继承问题
//继承之前加上关键字 virtual
//animal类称为虚基类
class Animal
{
	int m_Age;
};
class Sheep :virtual public Animal{};//vbptr 虚基类指针 v-virtual b-base 
//继承的是指针
//指向的是偏移量
//指向的是同一个地址
//从而得到同一个数据
class Tuo :virtual public Animal{};
class SheepTuo :public Sheep, public Tuo{};
void test01()
{
	SheepTuo st;
	//st.m_Age = 18;//多继承不明确
	//菱形继承，两个父类有相同数据，需要加作用于加以区分
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	cout << "年龄为 ： " << st.m_Age << endl;//年龄为28
}
int main()
{
	return 0;
}