// copy.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "iostream"
using namespace std;
class CTestCopy
{
	int x;
	int y;
public:
	CTestCopy();
	CTestCopy(int a, int b);
	CTestCopy(CTestCopy & om);
	void setXY(int a, int b);
	void disPlay();
};
CTestCopy::CTestCopy()
{

}
CTestCopy::CTestCopy(int a, int b)
{
	x = a;
	y = b;
}
CTestCopy::CTestCopy(CTestCopy & om)
{
	x = om.x * 2;
	y = om.y * 2;
	cout << "****************" << endl;
}
void CTestCopy::setXY(int a, int b)
{
	x = a;
	y = b;
}
void CTestCopy::disPlay()
{
	cout <<"x=" << x << " " << "y=" << y << endl;
}
/*int MyTest(CTestCopy temp)
{
	temp.disPlay();
	return 0;
}*/
int main()
{
	CTestCopy ot(50, 100);
	ot.disPlay();
	//MyTest(ot);
	return 0;
}

