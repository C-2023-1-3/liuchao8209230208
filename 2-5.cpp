#include<iostream>
using namespace std;

int main()
{
	char i;
	int num = 0, space = 0, character = 0, other = -1;
	cout << "请输入一串字符：" << endl;
	do
	{
		i = getchar();
		if (i >= '0' && i <= '9')
		{
			num++;
		}
		else if (i == ' ')
		{
			space++;
		}
		else if (i >= 'a' && i <= 'z' || i >= 'A' && i <= 'Z')
		{
			character++;
		}
		else
		{
			other++;
		}
	} while (i != '\n');
	
	cout << "英文字母有" << character << "个" << endl;
	cout << "数字字符有" << num<< "个" << endl;
	cout << "空格有" << space << "个" << endl;
	cout << "其他字符有" << other << "个" << endl;

	return 0;
}