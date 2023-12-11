#include<iostream>
#include"mytriangle.h"
using namespace std;

void main()
{
	double side1, side2, side3;
	cout << "请依次输入三角形的三条边长：" << endl;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3) == 1)
	{
		cout << "该三角形的面积为：" << double_area(side1, side2, side3) << endl;
	}
	else
	{
		cout << "该三角形不存在" << endl;
	}
}