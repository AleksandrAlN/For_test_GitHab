// Random number.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#pragma once
#include <iostream>
#include <string>
using namespace std;

string welcom();
int generation();
void show();
void enterNum(int randNum, string yourName);

int main()
{
	string yourName = welcom();
	show();
	int enteNum = generation();
	enterNum (enteNum, yourName);
	return 0;
}
string welcom()
{
	string name;

	cout << "Welcome to the Brain Games!" << endl;
	cout << " May I have your name?" << endl;
	cin >> name;
	cout << "Hello, " << name << " !" << endl;
	return name;
}
int generation()
{
	int randNum = 0;
	randNum = rand();
	cout << " Question = " << randNum<<"; " << endl;

	return randNum;
}
void show()
{
	cout << " Answer 'yes' if the number is even, otherwise answer 'no'. " << endl;
}
void enterNum(int randNum, string yourName)
{
	string yourChoose;
	string Yes = "yes";
	string No = "no";
	int yourChooseNam = 0;
	
	cout << " Your answer : ";	cin  >> yourChoose;
	if ( yourChoose == "yes") {
		yourChooseNam +=1;
	}
	else {
		yourChooseNam += 2;
	}

	switch (yourChooseNam)
	{
	case 1:
		if (yourChoose == "yes" && (randNum % 2) == 0)
		{
			cout << " Correct! " << endl;
		}
		else
		{
			cout << " '" << yourChoose << "' is wrong answer :(. Correct answer was '" << Yes << "'."
				<< "Let's try again, " << yourName << "!" << endl;
		}
		break;
		
	case 2:
		if (yourChoose == "no" && (randNum % 2) != 0)
		{
			cout << " Correct! " << endl;
		}
		else
		{
			cout << " '" << yourChoose << "' is wrong answer :(. Correct answer was '" << No << "'."
				<< "Let's try again, " << yourName << "!" << endl;
		}
		break;
	default:
		break;
	}
	

	
	
}