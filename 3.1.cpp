#include<iostream>
using namespace std;
int x(int& a, int& b)   //最大公约数
{
	int i = (a <= b) ? a : b;
	while (a % i != 0 || b % i != 0)
	{
		i--;
	}
	return i;
}
int y(int& c, int& d)   //最小公倍数
{
	int j = (c >= d) ? c : d;
	while (j % c != 0 || j % d != 0)
	{
		j++;
	}
	return j;
}

void main()
{
	cout << "请依次输入自然数m和n：" << endl;
	int m, n;
	cin >> m >> n;
	cout << "最大公约数：" << x(m, n) << endl;
	cout << "最小公倍数：" << y(m, n) << endl;

}