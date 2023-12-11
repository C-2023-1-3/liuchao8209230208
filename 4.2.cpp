#include<iostream>
using namespace std;

void bubblesort(double list[10])
{
	bool changed = true;
	double t;
	do
	{
		changed = false;
		for (int j = 0; j < 9; j++)
		{
			if (list[j] > list[j + 1])
			{
				t = list[j];
				list[j] = list[j + 1];
				list[j + 1] = t;
				changed = true;
			}
		}
	} 
	while (changed);
}
void main()
{
	double list[10];           
	cout << "请输入10个双精度数字：" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> list[i];
	}
	bubblesort(list);
	for (int k = 0; k < 10; k++)
	{
		cout << list[k] << " ";
	}
}