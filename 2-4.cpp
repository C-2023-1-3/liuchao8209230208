#include <iostream>
using namespace std;

int main() 
{
    char i;
    double a, b, c;

    cout << "��������ʽ: " << endl;
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
            cout << "��������Ϊ0��" << endl;
        }
        break;
    case '%':
        if (b != 0) 
        {
            c =(int)a%(int)b;
        }
        else {
            cout << "��������Ϊ0��" << endl;
        }
        break;
    default:
        cout << "������������������Χ��" << endl;
    }

    cout <<a<<i<<b<<"="<<c<<endl;

    return 0;
}