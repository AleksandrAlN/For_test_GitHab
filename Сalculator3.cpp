// Сalculator3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <map>
using namespace std;

void Menu();
int getCommand();
int Pair();
int resalt(int command);
void printResult(int result);

int sum(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int divi(int num1, int num2);

using namespace std;
int main() 
{	/*int num1 = 0;
	int num2 = 0;
	std::pair<int, int> a;
	a=make_pair(num1, num2);
	cout << a.first << "  " << a.second;
	*/
    
    setlocale(LC_ALL, "Russian");
    Menu();
    int num1 = 0;
    int num2 = 0;
    std::pair<int, int> a;
    a = make_pair(num1, num2);

    cout << "Введите первое число" << endl;
    cin >> a.first;
    cout << "Введите второе число" << endl;
    cin >> a.second;

    getCommand();

    resalt(getCommand());
   
}

int getCommand() 
{
    int command = 0;
    cin >> command;
    
    return command;
}
int resalt(int command )
    {
    switch (command)
    {
        std::pair<int, int> a;
        case 1:
        {    
        int result = sum(a.first, a.second);
        printResult(result);
        }

        case 2:
        {    int result = sub(a.first, a.second);
        printResult(result);
        break;
        }

        case 3:
        {     int result = mul(a.first, a.second);
        printResult(result);
        break;
        }

        case 4:
        {   int result = divi(a.first, a.second);
        printResult(result);
        break;
        }

        default:
        cout << "Номер коменды не верный. ";
    }
    return 0;
}

void printResult(int result) 
{
    cout << " Результат проделанной операции = " << result << "; ";
}


void Menu()
{
    setlocale(LC_ALL, "Russian");
    cout << " Welcom to the calculator!" << endl
        << " Приветствую в программе калькулятор!" << endl
        << " Выберите номер необходимой команды :" << endl
        << " Сложение - 1; " << endl
        << " Вычитание - 2; " << endl
        << " Умножение - 3; " << endl
        << " Деление - 4; " << endl;

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
int divi(int num1, int num2)
{
    int diviNum = num1 / num2;
    return diviNum;
}
