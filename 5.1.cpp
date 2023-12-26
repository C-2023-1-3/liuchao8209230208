#include<iostream>
using namespace std;

class Time             
{
private:
	int hour;
	int minute;
	int sec;
public:
	void input(Time *p)
	{
		cin >> p->hour;       
		cin >> p->minute;
		cin >> p->sec;
	}
	void output()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time tl;
	tl.input(&tl);
	tl.output();
	return 0;
}