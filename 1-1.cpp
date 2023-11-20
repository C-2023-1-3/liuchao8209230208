#include<iostream>
using namespace std;

int main()
{

	int k = 1;                     //k没有被定义,要定义
	int i = k + 1;          //数据类型没有Int，改为int
	cout << i++ << endl;    //后置递增，输出为2
	i = 1;              //i已被定义，无需再定义
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}