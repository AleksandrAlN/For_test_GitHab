// Random number.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#pragma once
#include <iostream>
#include <string>
#include < cstring >
using namespace std;

string welcom();
int generation();
void show();
string enterNum(int randNum, string yourName);
string makeErrorMeesage(string wrongAnswer, string rightAnswer);
string makeCorrectMessage();

int main()
{
	string yourName = welcom();
	show();
	int enteNum = generation();
	enterNum(enteNum, yourName);
	return 0;
}
string welcom()
{
	string name;
	string hello= "Welcome to the Brain Games! May I have your name?";

	cout << hello ;
	cin >> name;
	string helloName = "Hello, " + name + "!";
	cout << helloName;
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
	string condition = " Answer 'yes' if the number is even, otherwise answer 'no'. ";
	cout << endl << condition << endl;
}
string enterNum(int randNum, string yourName)
{
	string yourChoose;
	string Yes = " 'yes' ";
	string No = " 'no' ";

	int yourChooseNam = 0;

	cout << " Your answer : ";
	cin >> yourChoose;

	string str = yourChoose;
	

	if (yourChoose == "yes") {
		yourChooseNam += 1;
	}
	else {
		yourChooseNam += 2;
	}

	switch (yourChooseNam)
	{
	case 1:
		if (yourChoose == "yes" && (randNum % 2) == 0)
		{
			makeCorrectMessage();
		}
		else
		{
			makeErrorMeesage(yourChoose, No);
		}
		break;

	case 2:
		if (yourChoose == "no" && (randNum % 2) != 0)
		{
			makeCorrectMessage();
		}
		else
		{
			makeErrorMeesage(yourChoose, Yes);
		}
		break;
	default:
		break;
	}
	return 0;
}
string makeErrorMeesage(string wrongAnswer, string rightAnswer)
{
	string str = wrongAnswer  +" is wrong answer :( . Correct answer was " + rightAnswer + ". Let's try again ";
	cout << str;
	return str;	                                                                     
}
string makeCorrectMessage()
{
	string correct = "Correct!";
	cout << correct;
	return correct;
}