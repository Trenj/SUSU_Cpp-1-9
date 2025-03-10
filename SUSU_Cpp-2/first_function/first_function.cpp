#include <iostream> 
#include <windows.h> 
using namespace std;

// Объявление функции 
int addNumbers(int a, int b);

int main() 
{
	setlocale(LC_ALL, "RU");

	int num1, num2, sum;

	// Ввод пользователем двух чисел 
	cout << "Введите первое число: "; 
	cin >> num1; 
	cout << "Введите второе число: "; 
	cin >> num2;

	// Вызов функции для сложения чисел 
	sum = addNumbers(num1, num2);

	// Вывод результата 
	cout << "Сумма = " << sum << endl;

	return 0;
}

// Определение функции 
int addNumbers(int a, int b) 
{ 
	return a + b; 
}