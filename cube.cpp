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
	bool isSameByClass(Cube &c2)
	{
		if(m_L == c2.getL() && m_W == c2.getW() && m_H == c2.getH)
			return TRUE;
		return FALSE;
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

	Cube c2;
	c2.setH(10);
	c2.setL(10);
	c2.setW(10);

	cout << "c1的面积为： " << c1.calculateS() << endl;
	cout << "c1的体积为： " << c1.calculateV() << endl;
	if(isSame(c1,c2))
		cout << "两者相等" << endl;
	else
		cout << "两者不相等" << endl;

	if(c1.isSameByClass(c2))
		cout << "byClass两者相等" << endl;
	else
		cout << "byClass两者不相等" << endl;


	return 0;
}

bool isSame(Cube &c1, Cube &c2)
	{
		if(c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH)
			return TRUE;
		return FALSE;
	}