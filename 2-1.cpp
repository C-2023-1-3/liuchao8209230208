#include<iostream>
using namespace std;

int main()
{

	char i;
	cout << "输入一个字符:" << endl;
	cin >> i;
	 
	if (i >= 'a' && i <= 'z')
	{
		i = i - 32;
		cout << "该字符的大写形式为:" << i << endl;
	}
	else
	{
		cout << "该字符的后继字符的ASCII码值为：" << (int)i+1 << endl;
	}

	return 0;
}