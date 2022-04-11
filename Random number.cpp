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
void makeErrorMeesage(string str);




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
	string welcome = "Hello ";
	string str;
	str.append(welcome);
	str.append(name);
	
	cout << "Welcome to the Brain Games!" << endl;
	cout << " May I have your name?" << endl;

	cin >> name;
	str.append(name);
	cout << str << "!" << endl;
	
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
string enterNum(int randNum, string yourName)
{
	string yourChoose;
	string Yes = " 'yes'. ";
	string No = " 'no'. ";
	
	string  noAns2 = " Let's try again ";
	string yesAns = " Correct! ";
	
	int yourChooseNam = 0;
	
	cout << " Your answer : ";
	cin >> yourChoose;

	string str = yourChoose;
	str.append(" is wrong answer :( . Correct answer was ");
	
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
			makeErrorMeesage(str);
		}
		else
		{
			str.append(" is wrong answer : (.Correct answer was 'no'. Let's try again ");
			str.append(yourName);
			makeErrorMeesage(str);
			
		}
		break;
		
	case 2:
		if (yourChoose == "no" && (randNum % 2) != 0)
		{
			makeErrorMeesage(str);
		}
		else
		{
			str.append(" is wrong answer : (.Correct answer was 'yes'. Let's try again ");
			str.append(yourName);
			makeErrorMeesage(str);
		}
		break;
	default:
		break;
		
		makeErrorMeesage(str);
	}
	
	return str, yesAns;
}
void makeErrorMeesage(string str)
{
	cout <<  str  << endl;
}