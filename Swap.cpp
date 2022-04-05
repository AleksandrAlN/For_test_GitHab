#include <iostream>
#include "Swap.h"
using namespace std;

void swap1 (int& x, int& y)
{
    int bufX = x;
    x = y;
    y = bufX;

}
void swap2 (int* x, int* y)
{
    int bufX = *x;
    *x = *y;
    *y = bufX;
}

void swap3(const int& x, const int& y)
{
    //Изменить константное значение нельзя
}


void swap4(const int* x, const int* y)
{ 
    //Изменить константное значение нельзя
}
