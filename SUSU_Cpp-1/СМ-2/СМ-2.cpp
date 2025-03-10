#include <iostream>
#include <string> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	int choice;
	std::cout << "Выберите тип цикла (1 - for, 2 - while, 3 - do-while): ";
	std::cin >> choice;

	switch (choice)
	{
	case 1:
	{
		int n1;
		int sum1 = 0;

		cout << "Введите число: ";
		cin >> n1;

		for (int i1 = 1; i1 <= n1; i1++)
		{
			sum1 += i1;
		}

		std::cout << "Сумма чисел от 1 до " << n1 << " равна " << sum1 << std::endl;
	}
	break;

	case 2:
	{
		int n2;
		int sum2 = 0;
		int i2 = 1;

		cout << "Введите число: ";
		cin >> n2;

		while (i2 <= n2)
		{
			sum2 += i2; i2++;
		}

		std::cout << "Сумма чисел от 1 до " << n2 << " равна " << sum2 << std::endl;
	}
	break;

	case 3:
	{
		int n3;
		int sum3 = 0;
		int i3 = 1;

		std::cout << "Введите число: ";
		std::cin >> n3;

		do
		{
			sum3 += i3; i3++;
		} while (i3 <= n3);

		std::cout << "Сумма чисел от 1 до " << n3 << " равна " << sum3 << std::endl;
	}
	break;

	default:
		std::cout << "Некорректный выбор" << std::endl;
		break;
	}

	return 0;
}
