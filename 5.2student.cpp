#include <iostream>
using namespace std;
#include"student.h"            

void Student::display()
{
    cout << "num��" << num << endl;
    cout << "name��" ;
    for (int i = 0; i < len; i++)
    {
        cout << name[i];
    }
    cout << endl;
    cout << "sex��" << sex << endl;
}

Student::Student(int Num,const char Name[], char Sex)
{
    len = strlen(Name);
    num = Num;
    sex = Sex;
    for (int i = 0; i < len; i++)
    {
        name[i] = Name[i];
    }
}