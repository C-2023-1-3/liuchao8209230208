#include<iostream>
using namespace std;

void main()
{
	bool list[100];
	for (int i = 0; i < 100; i++)  //第一天所有柜子关闭false
	{
		list[i] = false;
	}
	for (int j = 1; j <= 100; j++)
	{
		for (int k = j; k <= 100; k = k + j)
		{
			if (list[k-1] == true)
			{
				list[k-1] = false;
			}
			else
			{
				list[k-1] = true;
			}
		}
	}
	for (int t = 0; t < 100; t++)
	{
		if (list[t] == true)
		{
			cout << t+1<<" ";
		}
	}
}