#include <iostream> 
#include <windows.h>
using namespace std;

int power(int base, int exponent) 
{ 
	if (exponent == 0) 
		return 1; 
	return base * power(base, exponent - 1); 
}

double power(double base, int exponent) 
{ 
	if (exponent == 0) 
		return 1.0; 
	return base * power(base, exponent - 1); 
}

int main() 
{
	setlocale(LC_ALL, "RU");

	int intBase, exponent; 
	double doubleBase; 
	char baseType;

	cout << "Введите 'i' для целочисленного основания или 'd' для основания с плавающей запятой: "; 
	cin >> baseType;

	cout << "Введите показатель степени (неотрицательное целое число): "; 
	cin >> exponent;

	if (exponent < 0) 
	{ 
		cout << "Показатель степени должен быть неотрицательным." << endl; 
		return 1; 
	}
	if (baseType == 'i') 
	{ 
		cout << "Введите целочисленное основание: "; 
		cin >> intBase; 
		cout << "Результат: " << power(intBase, exponent) << endl; 
	}
	else if (baseType == 'd') 
	{
		cout << "Введите основание с плавающей запятой: "; 
		cin >> doubleBase; 
		cout << "Результат: " << power(doubleBase, exponent) << endl; 
	}
	else 
	{ 
		cout << "Неверный тип основания." << endl; 
	}

	return 0;
}