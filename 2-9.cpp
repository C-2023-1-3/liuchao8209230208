#include<iostream>
using namespace std;

int main()
{
	double a = 0, b = 0, c;
	for (int i = 2; i <= 100; i=i * 2)
	{
		a = a + i * 0.8;  //�ܼ�
		b++;  //������
	}
	c = a / b;
	cout << "�ۼƹ���" << b << "��" << endl;
	cout << "ÿ��ƽ����" << c << "Ԫ";

	return 0;
}