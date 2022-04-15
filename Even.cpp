#include "Even.h"

pair<string, string> convertingPair(pair<int, int> task)
{
	pair<string, string> convertingTask;
	convertingTask.first = to_string(task.first);
	convertingTask.second = to_string(task.second);

	return convertingTask;
}