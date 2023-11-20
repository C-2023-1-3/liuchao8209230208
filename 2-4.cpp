#include <iostream>
using namespace std;

int main() 
{
    char i;
    double a, b, c;

    cout << "输入运算式: " << endl;
    cin >> a >> i >> b;

    switch (i)
    {
    case '+':
        c = a + b;
        break;
    case '-':
        c = a - b;
        break;
    case '*':
        c = a * b;
        break;
    case '/':
        if (b != 0) 
        {
            c = a / b;
        }
        else 
        {
            cout << "除数不能为0！" << endl;
        }
        break;
    case '%':
        if (b != 0) 
        {
            c =(int)a%(int)b;
        }
        else {
            cout << "除数不能为0！" << endl;
        }
        break;
    default:
        cout << "您输入的运算符超出范围！" << endl;
    }

    cout <<a<<i<<b<<"="<<c<<endl;

    return 0;
}