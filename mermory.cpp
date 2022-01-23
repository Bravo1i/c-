#include <iostream>
using namespace std;

int g_a = 10;
int g_b = 10;

int main()
{
  int a = 10;
  int b = 10;
  cout << "globle a adress =" << (long)&g_a << endl;
  //linux 地址64位必须使用long型
  cout << "globle b adress =" << (long)&g_b << endl;
  cout << "a adress =" << (long)&a << endl;
  cout << "a adress =" << (long)&b << endl;
  return 0;
}
