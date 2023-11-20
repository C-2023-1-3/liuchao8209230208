#include<iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 5; i++)
	{
		for (int g = 1; g <= i; g++)
		{
			cout << "*";
		}
		cout << endl;
     }

	return 0;
}