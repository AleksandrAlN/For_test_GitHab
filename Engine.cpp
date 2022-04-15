#include "Engine.h"
#include "Even.h"
#include "Сalculation.h"
void run()
{
	pair<int, int> task{ 44, 55 };

	pair<string,string> getConvertingPair =convertingPair(task);	//Преобразование типа данных пары 
	string getResultCalculationPair = calculationsPair(getConvertingPair);	//Сложение в строку данных пары

	cout << " This 'int': task.first - " << task.first<<", " << "task.second- " << task.second << endl
	<<" ResultGetCalculation = " <<getResultCalculationPair;
};