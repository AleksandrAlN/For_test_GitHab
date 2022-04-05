// Array.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	int array = 0;
	cout << "Enter array - ";
	cin >> array;

	int* pArray = new int[array];
	

	for (int i = 0; i < array; i++)
	{
		pArray[i] = i;
		cout << "Item " << i << " = "<< pArray[i] << endl;

	}
}