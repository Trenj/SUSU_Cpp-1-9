#include <iostream> 
#include <windows.h> 
using namespace std;


// Определение функций
int plusFunc(float a, float b)
{
    return a + b;
}

int minusFunc(float a, float b)
{
    return a - b;
}

int starFunc(float a, float b)
{
    return a * b;
}

int sticFunc(float a, float b)
{
    return a / b;
}


int main()
{
    setlocale(LC_ALL, "RU");

    float num1, num2;
    string operation_type;

    // Ввод пользователем первого числа
    cout << "Введите первое число: ";
    cin >> num1;

    // Выбор опирации пользователем
    cout << "Введите тип операции (+, -, *, /): ";
    cin >> operation_type;

    // Ввод пользователем второго числа
    cout << "Введите второе число: ";
    cin >> num2;


    if (operation_type == "+") 
    {
        cout << "Сумма чисел " << num1 << " и " << num2 << " = " << plusFunc(num1, num2);
    }
    else if (operation_type == "-") 
    {
        cout << "Разность чисел " << num1 << " и " << num2 << " = " << minusFunc(num1, num2);
    }
    else if (operation_type == "*")
    {
        cout << "Произвидение чисел " << num1 << " и " << num2 << " = " << starFunc(num1, num2);
    }

    else if (operation_type == "/")
    {
        if (num1 == 0 or num2 == 0) 
        {
            cout << "Вычисление данной операции невозможно";
        }
        else
        {
            cout << "Частное чисел " << num1 << " и " << num2 << " = " << sticFunc(num1, num2);
        }
    }

    else 
    {
        cout << "Ошибка некорректного оператора";
    }

    return 0;
}



/*
Измените приведенный выше пример, добавив три функции: 
первая для вычитания чисел, 
вторая для умножения чисел и 
последняя для деления чисел. 
И в главной функции main 
позвольте пользователю выбрать, какую из этих функций он хочет реализовать 
*/