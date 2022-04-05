// GitHab2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Swap.h"

using namespace std;

int main()
{
    int x = 10;
    int y = 15;
    
   swap1 (x, y);
   cout << "swap1 x=" << x << " y=" << y << ";" << endl;

   swap2 ( &x,  &y);
   cout << "swap2 x=" << x << " y=" << y << ";" << endl;

   swap3(x, y);
   cout << "Изменить константное значение нельзя." << endl;

   swap4( &x, &y);
   cout << "Изменить константное значение нельзя." << endl;
   

   return 0;
} 
