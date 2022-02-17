#include <iostream>
using namespace std;
class AbstractDrinking
{
public:
	//煮水
	virtual void Boil() = 0;
	//冲泡
	virtual void Brew() = 0;
	//倒入杯中
	virtual void PourInCup() = 0;
	//加入辅料
	virtual void PutSomeThing() = 0;
	//制作饮品
	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomeThing();
	}
};
class Coffee :public AbstractDrinking
{
	//煮水
	virtual void Boil()
	{
		cout << "住农夫山泉" << endl;
	}
	//冲泡
	virtual void Brew()
	{
		cout << "冲泡咖啡" << endl;
	}
	//倒入杯中
	virtual void PourInCup()
	{
		cout << "倒入杯中" << endl;
	}
	//加入辅料
	virtual void PutSomeThing()
	{
		cout << "加入牛奶" << endl;
	}

};
class Tea :public AbstractDrinking
{
	//煮水
	virtual void Boil()
	{
		cout << "煮农夫山泉" << endl;
	}
	//冲泡
	virtual void Brew()
	{
		cout << "冲泡茶" << endl;
	}
	//倒入杯中
	virtual void PourInCup()
	{
		cout << "倒入杯中" << endl;
	}
	//加入辅料
	virtual void PutSomeThing()
	{
		cout << "加入柠檬" << endl;
	}
};
void doWork(AbstractDrinking *abs)
{
	abs->makeDrink();
	delete abs;
}
void test01()
{
	//制作咖啡
	doWork(new Coffee);
	doWork(new Tea);

}
int main()
{
	test01();
	return 0;
}