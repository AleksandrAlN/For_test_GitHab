// Сalculator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int summ(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int divi(int num1, int num2);

int numOper = 0;
void Menu()
{
    
    setlocale(LC_ALL, "Russian");
    
    cout << " Welcom to the calculator!" << endl
        << " Приветствую в программе калькулятор!" << endl
        << " Выберите номер необходимой операции :" << endl
        << " Сложение - 1; " << endl
        << " Вычитание - 2; " << endl
        << " Умножение - 3; " << endl
        << " Деление - 4; " << endl;
    cin >> numOper;
}

int main()
{
    using namespace std;

    Menu();

    int num1 = 0;
    int num2 = 0;
    
    //cout << " Вы выбрали"

    while (numOper != 0 && 4)
    {
        cout << "Введите первое число" << endl;
        cin >> num1;
        cout << "Введите второе число" << endl;
        cin >> num2;

        switch (numOper)
        {
        case 1:
        {   
            cout << " Введенные номер операции - сложение." << endl;
        int Sumvalue = summ(num1, num2);
        cout << "Значние суммы = " << Sumvalue << "; " << endl;
        num1, num2 = 0;

        system("pause");
        system("cls");
        Menu();
        break;
        }

        case 2:
        {   
            cout << " Введенный номер операции - вычетание." << endl;
        int Subvalue = sub(num1, num2);
        cout << " Значение вычетания = " << Subvalue << " ;" << endl;
        num1, num2 = 0;

        system("pause");
        system("cls");
        Menu();
        break;
        }

        case 3:
        {   
            cout << " Введенный номер операции умножение. " << endl;
        int Mulvalue = mul(num1, num2);
        cout << " Значение умножения = " << Mulvalue << endl;
        num1, num2 = 0;

        system("pause");
        system("cls");
        Menu();
        break;
        }

        case 4:
        {   
            cout << " Введенные номер операции деление. " << endl;
        int Divivalue = divi(num1, num2);
        cout << " Значение деление = " << Divivalue << endl;
        num1, num2 = 0;

        system("pause");
        system("cls");
        Menu();
        break;
        }

        default:
            cout << " Введенные номер операции не верный" << endl;
            system("pause");
            system("cls");
            Menu();
            break;

        }
        
    }
    cout << " Выберете номер от 1 до 4." << endl;
    system("pause");
    system("cls");
    Menu();

}


int summ(int num1, int num2)
{
    int summNum = num1 + num2;
    return  summNum;
}
int sub(int num1, int num2)
{
 int subNum=num1-num2;
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