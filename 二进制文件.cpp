#include <iostream>
#include <fstream>
using namespace std;

class Person
{
public:
	char m_Name[64];//����
	int m_Age;//����

};
void test01()
{
	ofstream ofs;//д�ļ�
	ofs.open("person.txt", ios::out | ios::binary);
	Person p = { "����" , 18 };
	ofs.write((const char*)&p, sizeof(Person));
	ofs.close();

	ifstream ifs;
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	Person p2;
	ifs.read((char*)&p2, sizeof(Person));
	cout << "������" << p2.m_Name << " ���䣺" << p2.m_Age << endl;
	ifs.close();
}

int main()
{
	test01();

	return 0;
}