#include <iostream>
using namespace std;
#include "circle.h"
#include "point.h"

void isInCircle(Circle &c, Point &p)
{
	int distance = 
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	int rDistance = c.getR() * c.getR();
	cout << "点到圆心距离" << distance << "半径平方" << rDistance << endl;
	if(rDistance == distance)
		cout << "点在圆上" << endl;
	else if(distance > rDistance)
		cout << "点在圆外" << endl;
	else
		cout << "点在圆内" << endl;
}

int main(void)
{
	Circle c1;
	c1.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c1.setCenter(center);
	//创建并初始化圆

	Point p1;
	p1.setX(10);
	p1.setY(10);
	//创建并初始化点

	isInCircle(c1, p1);

	return 0;
}

