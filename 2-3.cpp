#include<iostream>
using namespace std;

int main()
{
	float a, b, c;
	cout << "依次输入三角形的三边长：" << endl;
	cin >> a;
	cin >> b;
	cin >> c;

	if (a + b > c && a + c > b && b + c > a && abs(a - b) < c && abs(a - c) < b && abs(b - c) < a)  //abc():取绝对值
	{
		float i = a + b + c;
		cout << "该三角形的周长为：" << i<< endl;
		if (a == b || a == c || b == c)
		{
			cout << "该三角形是等腰三角形" << endl;
		}
		else
		{
			cout << "该三角形不是等腰三角形" << endl;
		}

	}
	else
	{
		cout << "您输入的三边长无法构成三角形" << endl;
	}

	return 0;
}