#include<iostream>
#include"mytriangle.h"
using namespace std;

void main()
{
	double side1, side2, side3;
	cout << "���������������ε������߳���" << endl;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3) == 1)
	{
		cout << "�������ε����Ϊ��" << double_area(side1, side2, side3) << endl;
	}
	else
	{
		cout << "�������β�����" << endl;
	}
}