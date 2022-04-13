#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <utility>

using namespace std;

int sum(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);

string getUserName();
string helloPerson(string name);
int yourAnswer();
int ñorrectAnswer(int randNum1, int randNum2, int randNumOper);
string makeQestion(int randNum1, int  randNum2, int randNumOper);
void outputRightAnswer(string question, int userAnswer, int rightAnswer, string userName);
pair <int, string> genTask();
string makeErrorMeesage(string question, int userAnswer, int rightAnswer, string userName);



