// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include "Even.h"
#include "Сalculation.h"
#include "Engine.h"
#include <iostream>

int main()
{
	auto task = genTaskCalc();
	auto conditionTask = conditionTaskCalc();
	run(task, conditionTask);

	return 0;
}

