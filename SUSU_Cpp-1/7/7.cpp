#include <iostream> 
#include <windows.h>

int main() 
{
	setlocale(LC_ALL, "RU");

	int n, sum = 0; 
	std::cout << "Введите число: "; 
	std::cin >> n;

	for (int i = 1; i <= n; i++) 
	{ 
		sum += i; 
	}
	std::cout << "Сумма чисел от 1 до " << n << " равна " << sum << std::endl; 
	
	return 0;
}

/*
#include <iostream> 
#include <windows.h>

int main() 
{
	SetConsoleOutputCP(CP_UTF8); 
	SetConsoleCP(CP_UTF8);

	int n, sum = 0, i = 1; 
	std::cout << "Введите число: "; 
	std::cin >> n;

	while (i <= n) 
	{ 
		sum += i; i++; 
	}

	std::cout << "Сумма чисел от 1 до " << n << " равна " << sum << std::endl; 
	return 0;
}

#include <iostream> 
#include <windows.h>

int main() 
{
	SetConsoleOutputCP(CP_UTF8); 
	SetConsoleCP(CP_UTF8);

	int n, sum = 0, i = 1; 
	std::cout << "Введите число: "; 
	std::cin >> n;

	do 
	{ 
		sum += i; i++; 
	} 

	while (i <= n);
	std::cout << "Сумма чисел от 1 до " << n << " равна " << sum << std::endl; 
	return 0;
}


#include <iostream>

int main() 
{
	for (int i = 1; i <= 5; i++)			// Внешний цикл
	{ 
		for (int j = 1; j <= 5; j++)		// Внутренний цикл
		{ 
			std::cout << i * j << " ";		// Выполняется для каждой пары i и j 
		} 
		std::cout << std::endl;				// Переход на новую строку после завершения внутреннего цикла 
	} 
	return 0; 
}

*/