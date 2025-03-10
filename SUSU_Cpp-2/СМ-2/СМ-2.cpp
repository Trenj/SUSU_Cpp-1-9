#include <iostream>
#include <cmath>
using namespace std;

// Функция проверки простоты числа
bool isPrime(int num) 
{
    if (num <= 1)
        return false;

    for (int i = 2; i <= sqrt(num); ++i) 
    {
        if (num % i == 0)
            return false;
    }

    return true;
}

// Функция вывода таблицы умножения чисел до 10
void printMultiplicationTable(int num) 
{
    for (int i = 1; i <= 10; ++i) 
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

int main() 
{
    setlocale(LC_ALL, "RU");

    int num;
    int i = 0;

    while (i < 5) {
        std::cout << "Введите целое число для проверки: ";
        std::cin >> num;

        // Проверка являеться ли число простым
        if (isPrime(num)) {
            cout << "Число " << num << " простое" << endl;
        }
        else {
            cout << "Число " << num << " не простое" << endl;
        }

        // Вывод таблицы
        printMultiplicationTable(num);

        i++;
    }

    return 0;
}