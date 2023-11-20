#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double f, c;
	cout << "输入华氏度：" << endl;
	cin >> f;
	c = (f - 32) * 5 / 9;
	cout << "摄氏度为:" <<fixed<<setprecision(2)<< c << endl;

	return 0;
}