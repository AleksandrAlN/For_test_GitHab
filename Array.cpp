// Array.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	int array[5] = { 1, 8, 6, 9, 2 };
	cout << "Enter array - "<< endl;
	

	int* pArray = array;
	
	cout<< "  1 pointer - "  << pArray << ", array 0 - " << array[0] << " . " << endl;
	pArray = pArray + 1;
	cout<< "  2 pointer - "  << pArray << ", array 1 - " << array[1] << " . " << endl;
	pArray = pArray + 1;
	cout<< "  3 pointer - "  << pArray << ", array 2 - " << array[2] << " . " << endl;
	pArray = pArray + 1;
	cout<< "  4 pointer - "  << pArray << ", array 3 - " << array[3] << " . " << endl;
	pArray = pArray + 1;
	cout<< "  5 pointer - "  << pArray << ", array 4 - " << array[4] << " . " << endl;
	pArray = pArray + 1;
}