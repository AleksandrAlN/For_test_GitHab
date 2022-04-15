#pragma once
#include <string>
#include <cstring>
#include <utility>
#include <iostream>
using namespace std;

void run(pair<string, string> genTask, string conditionTask);
void welcome();
string askName();
string helloPerson(string name);
void getTask(pair<string, string> genTask, string conditionTask);

string getAnswelUser();
void compareAnswer(string answerUser, std::pair<string, string> genTask, string userName);
string makeErrorMassege(string answerUser, std::pair<string, string> task, string userName);
