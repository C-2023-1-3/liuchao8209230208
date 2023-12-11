#include<iostream>
using namespace std;

int parseHex(const char *const hexString)
{
	int sum=0;
	int a = strlen(hexString);
	int *list = new int[a];
	for (int i = 0; i < a; i++)
	{
		if (hexString[i] >= 'A' && hexString[i <= 'F'])
		{
			list[i] = (static_cast<int>(hexString[i]) - 55) * pow(16, a - i - 1);
		}
		else
		{
			list[i] = (hexString[i] - 48) * pow(16, a - i - 1);
		}
		sum = sum + list[i];
	}
	return sum;
}

void main()
{
	char ss[999];
	cout << "请输入一个十六进制数：" << endl;
	cin.getline(ss, 999);
	cout << "该数的十进制形式为：" << parseHex(ss);
}