#include<iostream>
using namespace std;
int main()
{
	int a;
	double b, c,d;  //b����Xn��c����Xn+1,d����|Xn+1-Xn|
	cout << "����������һ�������ʵ����" << endl;
	cin >> a;
	c= a;
	if (a > 0)
	{
		do
		{
			b = c;
			c = (b + a / b) / 2;
			d = abs(c - b);
		} while (d >= 1e-5);  //ָ��Сһ����ԣ���̫С��֮��ᳬ����������
		cout << "������ƽ����Ϊ��" << c;
	}
	else if(a==0)
	{
		cout << "������ƽ����Ϊ��0";
	}
	else
	{
		cout << "����û��ƽ������";
	}

	return 0;

}