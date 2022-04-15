#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <utility>
using namespace std;

pair <string, string> genTask();
string norrectAnswer(int randNum1, int randNum2, int randNumOper);
string makeQestion(int randNum1, int  randNum2, int randNumOper);
int sum(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);