#include<iostream>
using namespace std;
int main()
{
	int a;
	double b, c,d;  //b代表Xn，c代表Xn+1,d代表|Xn+1-Xn|
	cout << "请输入任意一个非零的实数：" << endl;
	cin >> a;
	c= a;
	if (a > 0)
	{
		do
		{
			b = c;
			c = (b + a / b) / 2;
			d = abs(c - b);
		} while (d >= 1e-5);  //指数小一点可以，但太小了之后会超出运算能力
		cout << "该数的平方根为：" << c;
	}
	else if(a==0)
	{
		cout << "该数的平方根为：0";
	}
	else
	{
		cout << "负数没有平方根！";
	}

	return 0;

}