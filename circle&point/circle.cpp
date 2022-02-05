#include "circle.h"



void Circle::setR(int r)
{
	m_R = r;
}
int Circle::getR(void)
{
	return m_R;
}
void Circle::setCenter(Point center)
{
	m_Center = center;
}
Point Circle::getCenter(void)
{
	return m_Center;
}
