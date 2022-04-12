#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <utility>

using namespace std;

string getUserName();
string makeErrorMeesage(string wrongAnswer, string rightAnswer, string userName);
string makeCorrectMessage();
string helloPerson(string name);
string makeRightAnswer(int number);
pair<int, string> genTask();
void outputRightAnswer(string userAnswer, string rightAnswer, string userName);