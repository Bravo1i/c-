#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	void setName(string name)
	{
		m_name = name;
	}

	string getName()
	{
		return m_name;//调用私有权限
	}

	int getAge()
	{
		return m_age;
	}


private:
	string m_name;//私有权限
	int m_age = 10;
	string m_lover;
};

int main(void)
{
	Person zhang;
	zhang.setName("张三");
	cout << zhang.getName() << endl;
	cout << zhang.getAge() << endl;
	return 0;
}