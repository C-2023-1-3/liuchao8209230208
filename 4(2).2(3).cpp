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
	cout << "����������Ԫ�ظ�����" << endl;
	cin >> size;
	int* p = new int[size];
	cout << "����������Ԫ�أ�" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> *(p + i);
	}
	cout << "���������������Ԫ����ţ�" << endl;
	int k;
	cin >>k;
	cout << "���������Ԫ�أ�" << *(p+k-1) << endl;

	ss(p, size);

	for (int i = 0; i < size; i++)
	{
		cout << *(p + i) << " ";
	}
	delete[] p;
}