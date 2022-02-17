#include <iostream>
#include <fstream>
using namespace std;

class Person
{
public:
	char m_Name[64];//姓名
	int m_Age;//年龄

};
void test01()
{
	ofstream ofs;//写文件
	ofs.open("person.txt", ios::out | ios::binary);
	Person p = { "张三" , 18 };
	ofs.write((const char*)&p, sizeof(Person));
	ofs.close();

	ifstream ifs;
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}
	Person p2;
	ifs.read((char*)&p2, sizeof(Person));
	cout << "姓名：" << p2.m_Name << " 年龄：" << p2.m_Age << endl;
	ifs.close();
}

int main()
{
	test01();

	return 0;
}