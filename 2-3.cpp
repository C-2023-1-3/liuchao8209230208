#include<iostream>
using namespace std;

int main()
{
	float a, b, c;
	cout << "�������������ε����߳���" << endl;
	cin >> a;
	cin >> b;
	cin >> c;

	if (a + b > c && a + c > b && b + c > a && abs(a - b) < c && abs(a - c) < b && abs(b - c) < a)  //abc():ȡ����ֵ
	{
		float i = a + b + c;
		cout << "�������ε��ܳ�Ϊ��" << i<< endl;
		if (a == b || a == c || b == c)
		{
			cout << "���������ǵ���������" << endl;
		}
		else
		{
			cout << "�������β��ǵ���������" << endl;
		}

	}
	else
	{
		cout << "����������߳��޷�����������" << endl;
	}

	return 0;
}