#include <iostream>
using namespace std;

void swap1(int& x, int& y)
{
    x = 10;
    y = 15;

    cout << "swap1 x=" << x << " y=" << y << ";" << endl;
}
void swap2(int* x, int* y)
{
    int bufX = *x;
    int bufY = *y;
    cout << "swap2 bufX=" << bufX << " bufY=" << bufY << ";" << endl;
    *x = bufY;
    *y = bufX;
    cout << "swap2 x=" << *x << " y=" << *y << ";" << endl;
}
