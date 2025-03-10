#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    char operation;
    float num1, num2; // Заменили на float

    std::cout << "Введите операцию (+, -, *, /): ";
    std::cin >> operation;
    std::cout << "Введите 2 числа: ";
    std::cin >> num1 >> num2;

    switch (operation)
    {
    case '+':
    {
        std::cout << "Результат: " << num1 + num2 << std::endl;
        break;
    }
    case '-':
    {
        std::cout << "Результат: " << num1 - num2 << std::endl;
        break;
    }
    case '*':
    {
        std::cout << "Результат: " << num1 * num2 << std::endl;
        break;
    }
    case '/':
    {
        if (num2 != 0)
        {
            std::cout << "Результат: " << num1 / num2 << std::endl;
        }
        else
        {
            std::cout << "Ошибка: Делить на ноль нельзя" << std::endl;
        }
        break;
    }
    default:
        std::cout << "Некорректный выбор" << std::endl;
        break;
    }
    return 0;
}
