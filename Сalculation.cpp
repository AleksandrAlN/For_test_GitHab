#include "Ñalculation.h"

pair <string, string> genTaskCalc()
{
	int randNum1 = rand();
	int randNum2 = rand();
	int randNumOper = rand() % 2;
	return make_pair(makeQestion(randNum1, randNum2, randNumOper), norrectAnswer(randNum1, randNum2,randNumOper));
}
string conditionTaskCalc()
{
	string textTask = " What is the result of expresion? ";
	
	return textTask;
}



string norrectAnswer(int randNum1, int randNum2, int randNumOper)
{
	int result = 0;
	
	switch (randNumOper)
	{
	case 0:
		result = sum(randNum1, randNum2);
		break;
	case 1:
		result = sub(randNum1, randNum2);
		break;
	case 2:
		result = mul(randNum1, randNum2);
		break;
	default:
		break;
	}
	string resultOper = to_string(result);
	return resultOper;
}
string makeQestion(int randNum1, int  randNum2, int randNumOper)
{
	string operation;
	switch (randNumOper)
	{
	case 0:
		operation = "+";
		break;
	case 1:

		operation = "-";
		break;
	case 2:

		operation = "*";
		break;
	default:
		break;
	}
	string questionForYour = to_string(randNum1) += operation += to_string(randNum2);

	return questionForYour;
}

int sum(int num1, int num2)
{
	int summNum = num1 + num2;
	return  summNum;
}
int sub(int num1, int num2)
{
	int subNum = num1 - num2;
	return subNum;
}
int mul(int num1, int num2)
{
	int mulNum = num1 * num2;
	return mulNum;
}