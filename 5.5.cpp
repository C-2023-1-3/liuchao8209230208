#include  <iostream>
using namespace std;

class  Point {
private:
    int  x;
    int  y;

public:
    Point(int  x = 60, int  y = 80) {
        this->x = x;
        this->y = y;
    }

    void  setPoint(int  i, int  j) {
        x = 60 + i;
        y = 80 + j;
    }

    void  display() {
        cout << "�޸ĺ������Ϊ��(" << x << "." << y << ")" << endl;
    }

    int get_x()
    {
        return x;
    }

    int get_y()
    {
        return y;
    }
};

int  main() {
    Point  p(60, 80);
    cout << "��ʼ����Ϊ��(" << p.get_x() << "," << p.get_y() << ")" << endl;

    p.setPoint(35, 20);
    p.display();

    return  0;
}