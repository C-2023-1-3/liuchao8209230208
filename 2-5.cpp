#include<iostream>
using namespace std;

int main()
{
	char i;
	int num = 0, space = 0, character = 0, other = -1;
	cout << "������һ���ַ���" << endl;
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
	
	cout << "Ӣ����ĸ��" << character << "��" << endl;
	cout << "�����ַ���" << num<< "��" << endl;
	cout << "�ո���" << space << "��" << endl;
	cout << "�����ַ���" << other << "��" << endl;

	return 0;
}