#include<iostream>
using namespace  std;

int main()
{
	float x;
	cout << "输入一个数：" << endl;
	cin >> x;

	float y=0;

	if (x>0&&x<1)
	{
		y = 3 - 2 * x;
	}
	else if (x>=1&&x<5)
	{
		y = 2 / (4 * x) + 1;
	}
	else if(x>=5&&x<10)
	{
		y = x * x;
	}

	cout << "y=" << y << endl;   //输入x=0时y不进行运算，直接输出初始值

	return 0;
}