#include<iostream>
using namespace std;

bool is_prime(int num)
{
	for (int i = 2; i < num; i++)
	{
		if (num% i == 0)
		{
			return false;
		}
	}
	return true;
}
void main()
{
	int a = 2;
	for (int j = 1; j <= 20; j++)
	{
		for (int k = 1; k <= 10; k++)
		{
			
			while (is_prime(a) == 0)
			{
				a++;
			}
			cout << a<<"  ";
			a++;
		}
		cout <<" "<<endl;
	}
}