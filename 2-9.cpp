#include<iostream>
using namespace std;

int main()
{
	double a = 0, b = 0, c;
	for (int i = 2; i <= 100; i=i * 2)
	{
		a = a + i * 0.8;  //总价
		b++;  //总天数
	}
	c = a / b;
	cout << "累计购买" << b << "天" << endl;
	cout << "每天平均花" << c << "元";

	return 0;
}