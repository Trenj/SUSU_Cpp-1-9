﻿#include <iostream>

class Counter 
{
private: 
	static int count; 
	// Статическая член-переменная для отслеживания количества экземпляров

public: 
	// Конструктор 
	Counter() 
	{ 
		count++; 
		// Увеличение счетчика при создании нового объекта 
		std::cout << "Вызван конструктор. Текущий счет: " << count << std::endl; 
	}
	// Деструктор 
	~Counter() 
	{ 
		count--; 
		// Уменьшение счетчика при уничтожении объекта 
		std::cout << "Вызван деструктор. Текущий счет: " << count << std::endl; 
	}
	// Статический метод для отображения текущего счета 
	static void displayCount() 
	{ 
		std::cout << "Текущий счет: " << count << std::endl; 
	} 
};

// Инициализация статической член-переменной 
int Counter::count = 0;

int main() 
{
	setlocale(LC_ALL, "RU");

	Counter::displayCount(); // Отображение начального счета

	Counter a; // Создан первый объект 
	Counter::displayCount(); // Отображение счета после создания одного объекта

	{
		Counter b, c; // Созданы еще два объекта 
		Counter::displayCount(); // Отображение счета во внутренней области видимости 
	}	// b и c уничтожены здесь

	Counter::displayCount(); // Отображение счета после уничтожения b и c

	return 0;
}