#include "Engine.h"
#include "Even.h"
#include "�alculation.h"
void run()
{
	pair<int, int> task{ 44, 55 };

	pair<string,string> getConvertingPair =convertingPair(task);	//�������������� ���� ������ ���� 
	string getResultCalculationPair = calculationsPair(getConvertingPair);	//�������� � ������ ������ ����

	cout << " This 'int': task.first - " << task.first<<", " << "task.second- " << task.second << endl
	<<" ResultGetCalculation = " <<getResultCalculationPair;
};