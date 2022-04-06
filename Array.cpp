// Array.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

void printA (int * pArray, int size);

int main()
{
	int arrayA [] = { 1, 8, 6 };
	int* pArray = arrayA;

	int size = (sizeof(arrayA) / sizeof(int));

	printA (arrayA , size);
	
}

void printA (int* pArray, int size)
{
	
	for (int i = 0; i < size ; i++)
	{
		cout << " Num  = " << *pArray << endl;
		pArray++;
	}
	
}