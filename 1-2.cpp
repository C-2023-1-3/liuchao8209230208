#include<iostream>
using namespace std;

//������

/*int lc(int a)
{
	int c;
	c = -1 + a % 2 * 2;
	return c;
}

int main()
{
	float pi=0;
	int i;

	for (i = 1; i<1e8; i++)
	{
		pi = pi+ 4.0*lc(i) * 1 / (i * 2 - 1);
	}
	cout << pi << endl;

	return 0;
}*/

const double pi = 3.14159;

int main()
{
	double h, r, v;

	cout << "����Բ׶�ĸߣ�" << endl;
	cin >> h;
	cout << "����Բ׶�ĵ���뾶��" << endl;
	cin >> r;

	v = pi * r * r * h / 3;

	cout << "Բ׶�����Ϊ" << v << endl;

	return 0;

}


