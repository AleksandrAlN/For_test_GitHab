// Array.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int printA (int &arrayA, int *pArray);

int main()
{
	int arrayA [3] = { 1, 8, 6 };
	int* pArray = arrayA;

	printA (*arrayA , pArray);
	
}

int printA (int &arrayA, int *pArray)
{
	
	for (int i = 0; i < 3 ; i++)
	{
		cout << " Num  = " << *pArray << endl;
		pArray++;
	}
	return 0;
}