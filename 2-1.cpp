#include<iostream>
using namespace std;

int main()
{

	char i;
	cout << "����һ���ַ�:" << endl;
	cin >> i;
	 
	if (i >= 'a' && i <= 'z')
	{
		i = i - 32;
		cout << "���ַ��Ĵ�д��ʽΪ:" << i << endl;
	}
	else
	{
		cout << "���ַ��ĺ���ַ���ASCII��ֵΪ��" << (int)i+1 << endl;
	}

	return 0;
}