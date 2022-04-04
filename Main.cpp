// GitHab2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Swap.h"

using namespace std;

int main()
{
    int x = 0;
    int y = 0;
    int* pX = &x;
    int* pY = &y;

   swap1 (x, y);
   swap2 ( &x,  &y);
   return 0;
}
