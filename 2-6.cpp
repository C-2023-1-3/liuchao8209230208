#include<iostream>
using namespace std;

int main()
{
	int a, b,c,d;
	cout << "����������������" << endl;
	cin >> a >> b;
	int i = 1;
	for (; i > 0; i++)
	{
		c = i % a;
		d = i % b;
		if (c == 0 && d == 0)
		{
			break;
	     }
	}
	cout << "��С������Ϊ��" << i << endl;
	int e,f,g;
	e = (a < b) ? a : b;
	for (; e > 0; e--)
	{
		f = a % e;
		g = b % e;
		if (f == 0 && g == 0)
		{
			break;
		}
	}
	cout << "���Լ��Ϊ��" << e << endl;

	return 0;
}