#include "Even.h"

pair<string, string> genTaskEven()
{
	int randNum = rand();
	return make_pair(to_string(randNum), makeRightAnswer(randNum));
}

string makeRightAnswer(int number)
{
	if (number % 2 == 0)
		return "yes";
	else
		return "no";
}

string conditionTaskEven()
{
	string textTask = " Answer 'yes' if the number is even, otherwise answer 'no'. ";
	return textTask;
}
