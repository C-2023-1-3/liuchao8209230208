#include<iostream>
using namespace std;

void merge(const int list1[], int size1,const int list2[], int size2, int list3[])
{
	for (int i = 0; i < size1; i++)
	{
		list3[i] = list1[i];
	}
	for (int i = 0; i < size2; i++)
	{
		list3[size1 + i] = list2[i];
	}
	int t;
	for (int i = size1 + size2 - 1; i > 0; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			if (list3[j - 1] > list3[j])
			{
				t = list3[j];
				list3[j] = list3[j - 1];
				list3[j - 1] = t;
			}
		}
	}
}

void main()
{
	int size1, size2;
	cout << "请输入第一个数组（输入的第一个数字为数组元素数）：" << endl;
	cin >> size1;
	int* list1 = new int[size1];
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	cout << "请输入第二个数组（输入的第一个数字为数组元素数）：" << endl;
	cin >> size2;
	int* list2 = new int[size2];
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}
	int* list3 = new int[size1 + size2];

	merge(list1, size1, list2, size2, list3);

	for (int i = 0; i<size1 + size2; i++)
	{
		cout << list3[i] << " ";
	}
	delete[] list1, list2, list3;
}