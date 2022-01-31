#include <iostream>
using namespace std;

class Point
{
public:
	void setX(int x)
	{
		m_X = x;
	}
	void setY(int y)
	{
		m_Y = y;
	}
	int getX(void)
	{
		return m_X;
	}
	int getY(void)
	{
		return m_Y;
	}
private:
	int m_X,m_Y;
};

class Circle
{
public:
	void setR(int r)
	{
		m_R = r;
	}
	int getR(void)
	{
		return m_R;
	}
	void setCenter(Point center)
	{
		m_Center = center;
	}
	Point getCenter(void)
	{
		return m_Center;
	}


private:
	Point m_Center;//在类中可以让另一个类作为本类中的成员
	int m_R;
};

int main(void)
{
	Circle c1;
	c1.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	//创建并初始化圆

	Point p1;
	p1.setX(10);
	p1.setY(10);
	//创建并初始化点

	isInCircle(c1, p1);

	return 0;
}

void isInCircle(Circle &c, Point &p)
{
	int distance = 
		(c.getCenter().getX() - p.getX() * c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY() * c.getCenter().getY() - p.getY());
	int rDistance = c.getR() * c.getR();
	if(rDistance == distance)
		cout << "点在圆上" << endl;
	else if(distance > rDistance)
		cout << "点在圆外" << endl;
	else
		cout << "点在圆内" << endl;
}