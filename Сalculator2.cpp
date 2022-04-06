// Сalculator2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
 
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

int calculation(int calc, int command);
int sum(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int divi(int num1, int num2);

int main()
{
    Menu();
    int command = 0;
    int num1 = 0;
    int num2 = 0;

    cin >> command;
    cout << "Введите первое число" << endl;
    cin >> num1;
    cout << "Введите второе число" << endl;
    cin >> num2;

    switch (command)
    {
        case 1:

        {  int calcSum = sum(num1, num2);
        calculation(calcSum, command);
        break;
        }

        case 2:
        {    int calcSub = sub(num1, num2);
        calculation(calcSub, command);
        break;
        }

        case 3:
        {     int calcMul = mul(num1, num2);
        calculation(calcMul, command);
        break;
        }

        case 4:
        {   int calcDivi = divi(num1, num2);
        calculation(calcDivi, command);
        break;
        }
        default:
            cout << "Номер коменды не верный. ";
    }
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
int calculation(int calc, int command)
{
    
    cout << "Введенный номер операции - " << command << " Результат: " << calc;
    return 0;
}

