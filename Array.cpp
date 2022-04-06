// Array.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int printA (int *arrayA, int size);

int main()
{
	int arrayA [] = { 1, 8, 6 };
	int* pArray = arrayA;

	int size = (sizeof(arrayA) / sizeof(int));

	printA (arrayA , size);
	
}

int printA (int *arrayA, int size)
{
	
	for (int i = 0; i < 3 ; i++)
	{
		cout << " Num  = " << *arrayA << endl;
		arrayA++;
	}
	return 0;
}