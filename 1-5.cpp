#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double f, c;
	cout << "���뻪�϶ȣ�" << endl;
	cin >> f;
	c = (f - 32) * 5 / 9;
	cout << "���϶�Ϊ:" <<fixed<<setprecision(2)<< c << endl;

	return 0;
}