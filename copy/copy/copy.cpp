// copy.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "iostream"
using namespace std;
class CTcopy
{
	int x, y;
public:
	CTcopy();
	CTcopy(int a, int b);
	CTcopy(CTcopy & om);
	void setXY(int a, int b);
	void disPlay();
};
CTcopy::CTcopy()
{
	x = 0;
	y = 0;
	cout << "Ĭ�Ϲ��캯��  x=" << x << " y=" << y << endl;
}
CTcopy::CTcopy(int a, int b)
{
	x = a;
	y = b;
	cout << "���캯��  x=" << x << " y=" << y << endl;
}
CTcopy::CTcopy(CTcopy&om)
{
	x = om.x * 2;
	y = om.y * 2;
	cout << "���ƹ��캯��  x=" << x << " y=" << y << endl;
}
void CTcopy::setXY(int a, int b)
{
	x = a;
	y = b;
}
void CTcopy::disPlay()
{
	cout << "display  x=" << x << " y=" << y << endl;
}
CTcopy MyTest()
{
	CTcopy om(24,48);
	om.disPlay();
	return om;
}

int main()
{
	CTcopy ot;
	ot.disPlay();
	ot = MyTest();
	ot.disPlay();
	return 0;
}

