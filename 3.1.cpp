#include<iostream>
using namespace std;
int x(int& a, int& b)   //���Լ��
{
	int i = (a <= b) ? a : b;
	while (a % i != 0 || b % i != 0)
	{
		i--;
	}
	return i;
}
int y(int& c, int& d)   //��С������
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
	cout << "������������Ȼ��m��n��" << endl;
	int m, n;
	cin >> m >> n;
	cout << "���Լ����" << x(m, n) << endl;
	cout << "��С��������" << y(m, n) << endl;

}