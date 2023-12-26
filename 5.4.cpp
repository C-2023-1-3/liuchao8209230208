#include<iostream>
using namespace std;

class student
{
private:
	int id;
	int score;
public:
	student(int Id, int Score)
	{
		id = Id;
		score = Score;
	}
	int get_id()
	{
		return id;
	}
	int get_score()
	{
		return score;
	}
};
int max(student *p[5])
{
	int maxid = 0;
	int maxscore = 0;
	for (int i = 0; i < 5; i++)
	{
		if (p[i]->get_score()>maxscore)
		{
			maxscore = p[i]->get_score();
			maxid = p[i]->get_id();
		}
	}
	return maxid;
}
void main()
{
	student* a[5];
	a[0] = new student(1, 80);
	a[1] = new student(2, 85);
	a[2] = new student(3, 96);
	a[3] = new student(4, 72);
	a[4] = new student(5, 98);

	
	cout << "最高成绩者的学号为： " << max(a);
}