#include <iostream> 
using namespace std;

class Calculator
{
public:
    // Метод для сложения
    double plus(double a, double b) 
    {
        return a + b;
    }

    // Метод для вычитания
    double minus(double a, double b) 
    {
        return a - b;
    }

    // Метод для умножения
    double star(double a, double b) 
    {
        return a * b;
    }

    // Метод для деления
    double stik(double a, double b) 
    {
        if (b != 0) 
        {
            return a / b;
        }
        else {
            cout << "Оштбка: Деление на ноль не поддерживается." << endl;
            return 0;
        }
    }
};

int main()
{
    setlocale(LC_ALL, "RU");

    Calculator calc;

    double num1, num2;
    char operation;

    cout << "Введите первое число, операцию (+, -, *, /) и второе число: ";
    cin >> num1 >> operation >> num2;

    switch (operation) 
    {
    case '+':
        cout << "Результат: " << calc.plus(num1, num2) << endl;
        break;
    case '-':
        cout << "Результат: " << calc.minus(num1, num2) << endl;
        break;
    case '*':
        cout << "Результат: " << calc.star(num1, num2) << endl;
        break;
    case '/':
        cout << "Результат: " << calc.stik(num1, num2) << endl;
        break;
    default:
        cout << "Неверная операция!" << endl;
        break;
    }

    return 0;
}

/*
Разработка класса Калькулятор для базовых арифметических операций Описание: 
Создайте класс Calculator, который может выполнять 
базовые арифметические операции (+, -, *, /) с двумя операндами. 
Переменные-члены: не требуются. Функции-члены: Методы для каждой операции (+, -, *, /)
*/