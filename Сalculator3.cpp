// Сalculator3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <utility>

using namespace std;

void Menu();
int getCommand();
std::pair<int, int> getNumders();
int result( std::pair<int, int> a, int command);
int printResult(int r);


int sum(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int divi(int num1, int num2);

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    Menu();

    int r = result(getNumders(), getCommand());

    printResult(r);
}
std::pair<int, int> getNumders()
{
    int num1 = 0;
    int num2 = 0;

    cout << "Введите первое число" << endl;
    cin >> num1;

    cout << "Введите второе число" << endl;
    cin >> num2;
    return std::pair<int, int>(num1, num2);
}

int getCommand() 
{
    int command = 0;
    cin >> command;
    
    return command;
}

int result(std::pair<int, int> a, int command)
    {
    int result = 0;
    switch (command)
    {
        case 1:
        {    
        result = sum(a.first, a.second);
        break;
        }

        case 2:
        {   
        result = sub(a.first, a.second);
        
        break;
        }

        case 3:
        {     
        result = mul(a.first, a.second);
        
        break;
        }

        case 4:
        {   
        result = divi(a.first, a.second);
        
        break;
        }

        default:
        break;
        
    }
    return result;
}


int printResult(int r)
{
    cout << " Результат проделанной операции = " << r << "; ";
    return 0;
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
