#include<iostream>
using namespace std;

void indexOf(const char s1[], const char s2[])
{
	int a = strlen(s1), b = strlen(s2);
	int g = 0;
	for (int i = 0; i < b-a+1; i++)
	{
		if (s2[i] == s1[0])
		{
			int k = true;
			for (int j = 0; j < a; j++)
			{
				if (s2[i + j] != s1[j])
				{
					k = false;
				}
			}
			if (k)
			{
				g++;
				cout << i << " ";
			}
		}
	}
	if (g==0)
	{
		cout << "-1" ;
	}
}

void main()
{
	char s1[999], s2[999];
	cout << "�������һ���ַ�����" << endl;
	cin.getline(s1,999);  //���Խ��տո�
	cout << "������ڶ����ַ�����" << endl;
	cin.getline(s2,999);

	cout << "indexOf(\"" << s1 << "\",\"" << s2 << "\")is";
	indexOf(s1, s2);
}