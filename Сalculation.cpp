#include "Ñalculation.h"

string calculationsPair(pair<string, string>getConvertingTask)
{
	string num1 = getConvertingTask.first;
	string num2 = getConvertingTask.second;

	string getCalculation = num1 + num2;
	return getCalculation;

}