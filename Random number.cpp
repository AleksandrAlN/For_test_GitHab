// Random number.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;

void welcom();
int generation();
void show();
void enterNum(int randNum);

int main()
{
	
	welcom();
	show();
	int enteNum = generation();
	enterNum (enteNum);
	return 0;
}
void welcom()
{
	
	cout << "Welcome to the game !!<< endl"
		<< " Enter 'YES if a number is even, else enter 'no' " << endl;
}
int generation()
{
	int randNum = 0;
	randNum = rand();
	
	return randNum;
}
void show()
{
	cout << endl << " Guess the number is even or odd." << endl
		<< " Choose: 1 - odd. || 2 - even. " << endl;
}
void enterNum(int randNum)
{
	
	int yourNum = 0;
	int res = 0; //Результат Rand
	int rem = 0;
	
	cin  >> yourNum;
	if ( rem ==(randNum % yourNum))
	{
		cout << " Congratulations you guessed right !!!!" << endl;
		cout << randNum << "  " << yourNum << "  " << endl;
	
	}
	else
	{
		cout << " You didn't guess, the number is even." << endl;
	}
}