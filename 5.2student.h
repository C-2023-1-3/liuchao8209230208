#pragma once
class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	Student(int Num,const char Name[], char Sex);
private:
	int num;
	char name[20];
	char sex;
	int len;  //获取name数组有效元素的个数
};