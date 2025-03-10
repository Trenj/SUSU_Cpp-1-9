#include <iostream> 
#include <windows.h>
using namespace std;

// Функция void: Не возвращает никакого значения 
void printMessage() 
{ 
	cout << "Это функция void. Она не возвращает никакого значения." << endl; 

}

// Функция bool: Возвращает булево значение 
bool isEven(int num) 
{ 
	return (num % 2 == 0); 
}

// Функция int: Возвращает целочисленное значение 
int doubleNumber(int num) 
{ 
	return num * 2; 
}

// Функция double: Возвращает значение с плавающей точкой 
double halfNumber(double num) 
{ 
	return num / 2.0; 
}

int main() 
{ 
	
	setlocale(LC_ALL, "RU");
	// Демонстрация функции void 
	printMessage();

	// Демонстрация функции bool 
	int number = 4; 
	cout << "Является ли " << number << " четным? " << (isEven(number) ? "Да" : "Нет") << endl;
	
	// Демонстрация функции int 
	int value = 5; 
	cout << "Удвоенное значение " << value << " равно " << doubleNumber(value) << endl;
	
	// Демонстрация функции double 
	double num = 8.5; 
	cout << "Половина от " << num << " равна " << halfNumber(num) << endl;
	
	return 0;
}