#include<iostream>
using namespace std;

void main()
{
	int a[10];
	cout << "ÇëÊäÈë10¸öÊý£º" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	cout << a[0] << " ";
	for (int j = 1; j < 10; j++)
	{
		for (int k = 0; k < j; k++)
		{
			if (a[j] != a[k])
			{
				if (k == j - 1)
				{
					cout << a[j] << " ";
				}
				else
				{
					continue;
				}
			}
			else
			{
				break;
			}
		}
	}
}