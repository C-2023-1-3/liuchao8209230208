#include<iostream>
using namespace std;

void ss(int p[], int size)
{
	int t;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (*(p + j) > *(p + j + 1))
			{
				t=*(p+j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = t;
			}
		}
	}
}

void main()
{
	int size;
	cout << "请输入数组元素个数：" << endl;
	cin >> size;
	int* p = new int[size];
	cout << "请输入数组元素：" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> *(p + i);
	}
	cout << "请输入你想输出的元素序号：" << endl;
	int k;
	cin >>k;
	cout << "你想输出的元素：" << *(p+k-1) << endl;

	ss(p, size);

	for (int i = 0; i < size; i++)
	{
		cout << *(p + i) << " ";
	}
	delete[] p;
}