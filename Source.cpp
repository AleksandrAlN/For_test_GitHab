#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <utility>
#include "Header.h"


string getUserName()
{
	string name;
	cout << "Welcome to the Brain Games! " << endl;
	cout << " May I have your name ? ";
	cin >> name;

	cout << helloPerson(name);
	cout << endl << " Answer 'yes' if the number is even, otherwise answer 'no'. " << endl;

	return name;
}

string makeErrorMeesage(string wrongAnswer, string rightAnswer, string userName)
{
	string str = wrongAnswer + " is wrong answer :( . Correct answer was " + rightAnswer + ". Let's try again "+ userName;
	return str;
}

string helloPerson(string name)
{
	string helloName = "Hello, " + name + "!";
	return helloName;
}

pair<int, string> genTask()
{
	int randNum = randNum = rand();
	return make_pair(randNum, makeRightAnswer(randNum));

}

string makeRightAnswer(int number)
{
	if (number % 2 == 0)
		return "yes";
	else
		return "no";
}

string makeCorrectMessage()
{
	string correct = "Correct!";
	cout << correct;
	return correct;
}
void outputRightAnswer(string userAnswer, string rightAnswer, string userName) {
	if (userAnswer == rightAnswer)
		cout << "Correct!";
	else
		cout << makeErrorMeesage(userAnswer, rightAnswer, userName);

}