
#include"Calculator.h"

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



string helloPerson(string name)
{
	string helloName = "Hello, " + name + "!";
	return helloName;
}
string getUserName()
{
	string name;
	cout << "Welcome to the Brain Games! " << endl;
	cout << " May I have your name ? ";
	cin >> name;

	cout << helloPerson(name);
	cout << endl << " What is the result of expresion? " << endl;

	return name;
} // ÑÄåëàòü áîëåå ãèáêîé.

pair <int, string> genTask()
{
	int randNum1 = rand();
	int randNum2 = rand();
	int randNumOper = rand() % 2;
	return make_pair(ñorrectAnswer(randNum1, randNum2, randNumOper), makeQestion(randNum1, randNum2, randNumOper));

}
int ñorrectAnswer(int randNum1, int randNum2, int randNumOper)
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
		return result;
}

int yourAnswer()
{
	int YourAnswer=0;
	cout << "Your answer: ";
	cin >> YourAnswer;
	return YourAnswer;
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

void outputRightAnswer(string question, int userAnswer, int rightAnswer, string userName)
{
	
	if (userAnswer == rightAnswer)
		cout << "Correct!";
	else
		cout << makeErrorMeesage(question, userAnswer,  rightAnswer, userName)<<endl;
}

string makeErrorMeesage (string question, int userAnswer, int rightAnswer, string userName)
{
	string str = "Let's try again, " + userName;
	cout << "Question:" << question << endl
		<< " Your answer: " << userAnswer << endl
		<< "'" << userAnswer << "' is wrong answer :(" << endl
		<< "Correct answer was'" << rightAnswer << "'" << endl;
	return str;
}
