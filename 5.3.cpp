#include<iostream>
using namespace std;

class V
{
private:
	double length;  
	double width;  
	double height;  
	double V;
public:
	void input(int num)
	{
		cout << "���������볤����"<<num<<"�ĳ������ߣ� ";
		cin >> length >> width >> height;
	}
	void output(int num)
	{
		V = length * width * height;
		cout << "������" << num << "�����Ϊ�� " <<V<<endl;
	}
};
void main()
{
	V V1;
	V V2;
	V V3;
	V1.input(1);
	V2.input(2);
	V3.input(3);
	V1.output(1);
	V2.output(2);
	V3.output(3);

}