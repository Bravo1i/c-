#include <iostream>
using namespace std;

class Cube
{
public:
	void setL(int l)
	{
		m_L = l;
	}

	void setW(int w)
	{
		m_W = w;
	}

	void setH(int h)
	{
		m_H = h;
	}

	int getL(void)
	{
		return m_L;
	}

	int getH(void)
	{
		return m_H;
	}

	int getW(void)
	{
		return m_W;
	}

	int calculateS()
	{
		return 2*(m_L*m_W+m_H*m_L+m_W*m_H);
	}

	int calculateV()
	{
		return m_W*m_W*m_L;
	}

private:
	int m_W,m_L,m_H;

}

int main(void)
{
	Cube c1;
	c1.setH(10);
	c1.setL(10);
	c1.setW(10);

	cout << "c1的面积为： " << c1.calculateS() << endl;
	cout << "c1的体积为： " << c1.calculateV() << endl;

	return 0;
}