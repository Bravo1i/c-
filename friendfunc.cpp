#include <iostream>
#include <string>
using namespace std;
class Building;//提前声明类

class GoodGay
{
public:
	GoodGay();
	void visit();//参观函数 访问building的属性，在声明友类成员函数前声明函数
	Building *building;
};

class Building
{
	friend void GoodGay::visit();//成员函数作有类
	//friend class GoodGay;//友类
	//friend void goodGay(Building *building);//友类可以访问私有成员,全局函数做友元
public:
	Building();
	string m_SittingRoom;
private:
	string m_Bedroom;

};
Building::Building()
{
	m_SittingRoom = "客厅";
	m_Bedroom = "卧室";
}
//类做友元

//类外声明，保证编译不会出错
GoodGay::GoodGay()
{
	//创建建筑物对象
	building = new Building;//在building声明前无法创建指针
}
void GoodGay::visit()
{
	cout << "好几有类正在访问： " << building->m_SittingRoom << endl;
	cout << "好几有类正在访问： " << building->m_Bedroom << endl;
}
//全局函数作友元
// void goodGay(Building *building)
// {
// 	cout << "好几有的全局函数 正在访问" << building->m_SittingRoom << endl;
// 	cout << "好几有的全局函数 正在访问" << building->m_Bedroom<< endl;
// }

void test01()
{
	// Building building;
	// goodGay(&building);
	GoodGay gg;
	gg.visit();
}
int main()
{
	test01();
	return 0;
}