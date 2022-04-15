#include "Engine.h"
#include "Even.h"
#include "Ñalculation.h"

void run(pair<string, string> genTask, string conditionTask)
{
	/*pair<string, string> genTask {"30", "yes"};
	string conditionTask = " Answer 'yes' if the number is even, otherwise answer 'no'. ";*/

	welcome();
	string userName = askName();
	getTask(genTask, conditionTask);

	string answerUser = getAnswelUser();
	compareAnswer(answerUser, genTask, userName);
};
void welcome()
{
	cout << "Welcome to the Brain Games! " << endl;
}

string askName()
{
	string name;
	cout << " May I have your name ? ";
	cin >> name;
	cout << helloPerson(name);
	
	return name;
}

string helloPerson(string name)
{
	string helloName = "Hello, " + name + "!";
	return helloName;
}

void getTask(pair<string, string> task, string conditionTask)
{
	pair<string, string> getTask;

		cout << conditionTask << endl << task.first<<endl;
}

string getAnswelUser()
{
	string answerUser;
	cin >> answerUser;

	return answerUser;
}

void compareAnswer(string answerUser, std::pair<string, string> task, string userName)
{
	if (task.second == answerUser)
		cout << "Correct" << endl;
	else
		cout << makeErrorMassege(answerUser, task, userName);
}

string makeErrorMassege(string answerUser, std::pair<string, string> task, string userName)
{
	string wrongAnswer = answerUser + " is wrong answer :( . Correct answer was " +"'"+ task.second + "'" + ". Let's try again " + userName;
	return wrongAnswer;
}