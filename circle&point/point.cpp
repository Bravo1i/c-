#include "point.h"
using namespace std;

class Point
{
public:
	void ::setX(int x)
	{
		m_X = x;
	}
	void ::setY(int y)
	{
		m_Y = y;
	}
	int ::getX(void)
	{
		return m_X;
	}
	int ::getY(void)
	{
		return m_Y;
	}
private:
	int m_X,m_Y;
};