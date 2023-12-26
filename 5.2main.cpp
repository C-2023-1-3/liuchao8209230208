#include <iostream>             
#include "student.h"
using namespace std;

int main()
{
	//Student stud;              
	Student stud(007,"tcg", 'm');
	stud.display();              //执行stud对象的display函数
	return 0;
}