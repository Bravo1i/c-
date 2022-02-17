#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void test01()
{
	//包含头文件
	//开始创建文件流对象
	ofstream ofs;
	//打开文件 判断是否打开成功
	ofs.open("test.txt", ios::out);
	ofs << "姓名：张三" << endl;
	ofs << "性别：男" << endl;
	ofs << "年龄：13" << endl;
	ofs.close();

	//读文件
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	//判断文件是否已经打开
	if (!ifs.is_open()) 
	{
		cout << "文件打开失败" << endl;
		return;
	}
	//第一种读数据方法
	//char buf[1024] = { 0 };
	//while (ifs >> buf)
	//{
	//	cout << buf << endl;
	//}

	//第二种读数据方法
	//while (ifs.getline(buf, sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}

	//第三种方法
	//string buf;
	//while (getline(ifs, buf))
	//{
	//	cout << buf << endl;
	//}

	//第四种方法
	//char c;
	//while ((c = ifs.get()) != EOF)
	//{
	//	cout << c;
	//}

	ifs.close();

}
int main()
{
	test01();
	return 0;
}