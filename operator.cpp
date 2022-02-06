#include <iostream>
using namespace std;

 class Person
 {
    friend ostream & operator<<(ostream &cout, Person &p);//友元全局函数
 public:
 	//成员函数重载+号
 	//本质 p1.operator + p2
 	Person operator+(Person &p)
 	{
 		Person temp;
 		temp.m_A = this->m_A + p.m_A;
 		temp.m_B = this->m_B + p.m_B; 		
 	}
    //重载++运算符(前置)
    Person& operator++()
    {
        m_B++;
        m_A++;
        return *this;
    }
    //重载++运算符(后置)
    Person operator++(int)//int占位参数，用以区分前置后置递增
    {
        Person temp = *this;
        m_A++;m_B++;
        return temp;
    }
    //重载=赋值运算符=>深拷贝模式
    Person &operator=(Person &p)
    {
        if(m_Age != NULL)
        {
            delete m_Age;
            m_Age = NULL;
        }
        m_Age = new int(*p.m_Age);
        return *this;
    }
 	int m_A;
 	int m_B;
    int *m_Age;
 }

 void test01()
 {
 	Person p1;
 	p1.m_B = 10;
 	p1.m_A = 10;
 	Person p2;
 	p2.m_A = 10;
 	p2.m_B = 10;
 	Person P3 = p1 + p2;
 	cout << "p3.m_A = " << p3.m_A <<endl;
 	cout << "p3.m_B = " << p3.m_B <<endl;
 }
 //全局函数重载+号
 //本质 p3 = operator+(p1, p2)
Person operator+(Person &p1,Person &p2)
{
	Person temp;
	temp.m_A = p1.m_A + p2.m_A;
 	temp.m_B = p1.m_B + p2.m_B; 
}
//全局函数重载<<运算符
ostream & operator<<(ostream &cout, Person &p)
{
    cout << "m_A = " << p.m_A << " m_B = " << p.m_B;
    return cout;
}

void test02()
{
    Person p1;
    p.m_A = 10;
    p.m_B = 10;
    cout << p << endl;
}
void test03()
{
    Person p1;
    p.m_B = 10;
    p.m_A = 10;
    cout << ++p << endl;
}
void test04()
{
    Person p1;
    Person p2;
    p2 = p1;
    cout << *p1.m_Age << *p2.m_Age << endl;
    Person p3;
    p3 = p2 = p1;
    cout << *p1.m_Age << *p2.m_Age << *p3.m_Age << endl;
}
 int main()
 {
 	test01();
    test02();
    test03();
    test04();
 	return 0;
 }