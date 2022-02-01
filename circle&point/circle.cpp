#include <iostream>
#include "point.h"
#include "circle.h"
using namespace std;



class Circle
{
public:
	void ::setR(int r)
	{
		m_R = r;
	}
	int ::getR(void)
	{
		return m_R;
	}
	void ::setCenter(Point center)
	{
		m_Center = center;
	}
	Point ::getCenter(void)
	{
		return m_Center;
	}


private:
	Point m_Center;//在类中可以让另一个类作为本类中的成员
	int m_R;
};