#pragma once
#include <iostream>
#include "point.h"
using namespace std;


class Circle
{
public:
	void setR(int r);

	int getR(void);

	void setCenter(Point center);

	Point getCenter(void);



private:
	Point m_Center;//在类中可以让另一个类作为本类中的成员
	int m_R;
};
