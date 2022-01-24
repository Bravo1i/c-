#include <iostream>
using namespace std;

int g_a = 10;
int g_b = 10;

int *func()
{
  int *p = new int(10);
  //new返回该类型的指针
  //new关键字创建堆区数据,由程序员管理开辟，且由程序员管理释放
  //程序结束才进行释放
  return p;
}

void test01()
{
  int *p = func();
  cout << *p << endl;
  delete p;
  cout << *p << endl;
  //堆区数据已经被释放，再次调用已经不见
}

void test02()
{
  int *arr = new int[10];

  for(int i=0;i<10;i++)
    {
      arr[i] = i + 100;//数组赋值100-109
    }

  for(int i=0;i<10;i++)
    {
      cout << arr[i] << endl;//显示数组的赋值
    }
  delete[] arr;//释放数组要中括号
}

int main()
{
  int a = 10;
  int b = 10;
  cout << "globle a adress =" << (long)&g_a << endl;
  //linux 地址64位必须使用long型
  cout << "globle b adress =" << (long)&g_b << endl;
  cout << "a adress =" << (long)&a << endl;
  cout << "a adress =" << (long)&b << endl;

  int *p = func();
  cout << *p << endl;
  test01();
  test02();
  return 0;
}
