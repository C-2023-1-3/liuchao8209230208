#pragma once
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	Student(int Num,const char Name[], char Sex);
private:
	int num;
	char name[20];
	char sex;
	int len;  //��ȡname������ЧԪ�صĸ���
};