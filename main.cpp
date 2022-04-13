// Game_Calculator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#pragma once
#include "Calculator.h"
#include <iostream>
#include <string>
#include <cstring>
using namespace std;


int main()
{
	string userName = getUserName();
	auto task = genTask();
	cout << "Qestion: " << task.second << " ?" << endl;
	int userAnswer = yourAnswer();
	int rightAnswer = task.first;
	string question = task.second;
	outputRightAnswer(question, userAnswer, rightAnswer, userName);
}

