// Random number.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <utility>
#include "Header.h"
using namespace std;

int main()
{
	auto userName = getUserName();
	auto task = genTask();

	cout << " Question: " << task.first << endl;
	string userAnswer;
	cin >> userAnswer;

	auto rightAnswer = task.second;
	outputRightAnswer(userAnswer, rightAnswer, userName);
	

	return 0;
}
