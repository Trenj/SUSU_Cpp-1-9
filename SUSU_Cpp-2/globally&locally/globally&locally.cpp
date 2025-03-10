#include <iostream>
#include <windows.h>
using namespace std;

// Глобальная переменная 
int globalNumber = 0;

// Функция для ввода и проверки числа
void inputNumber() 
{ 
	int number; 
	do 
	{ 
		cout << "Введите положительное число: "; 
		cin >> number;

		if (number <= 0) 
		{ 
			cout << "Неверный ввод. Пожалуйста, введите положительное число." << endl; 
		} 
	}

	while (number <= 0);
		// Присваиваем допустимое число глобальной переменной 
		globalNumber = number; 
}

// Рекурсивная функция для вычисления факториала 
int calculateFactorial(int num) 
{ 
	if (num == 0 || num == 1) 
	{ 
		return 1;
	}
	else 
	{ 
		return num * calculateFactorial(num - 1); 
	}
}

// Функция для отображения результата 
void displayResult(int result) 
{ 
	cout << "Факториал числа " << globalNumber << " равен " << result << endl; 

}

int main() 
{
	setlocale(LC_ALL, "RU");

	// Получаем ввод пользователя 
	inputNumber();

	// Вычисляем факториал 
	int factorial = calculateFactorial(globalNumber);

	// Отображаем результат
	displayResult(factorial);

	return 0;
}