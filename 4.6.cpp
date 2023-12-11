#include<iostream>
using namespace std;

void count(const char s[], int counts[])
{
	int num = strlen(s);
	for (int i = 0; i < 26; i++)
	{
		counts[i] = 0;
	}
	for (int i = 0; i < num; i++)
	{
		counts[s[i] - 'a']++;
		counts[s[i] - 'A']++;
	}
	for (int i = 0; i < 26;i++)
	{
		if (counts[i] != 0)
		{
			cout << static_cast<char>(i + 'a') << ":" << counts[i] << "times" << endl;
		}
	}
}

void main()
{
	char s[999];
	int counts[26];
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û´®£º" << endl;
	cin.getline(s, 999);
	count(s, counts);
}