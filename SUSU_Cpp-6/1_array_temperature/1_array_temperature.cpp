#include <iostream> 
#include <limits> 

// Для numeric_limits
class TemperatureLogger 
{
private: 
	static const int MAX_READINGS = 365;	// Предполагаем максимум 365 показаний 
	int temperatures[MAX_READINGS];		// Массив для хранения показаний температуры 
	int numReadings;	// Текущее количество показаний

public: 
	// Конструктор 
	TemperatureLogger() : numReadings(0) 
	{ 
		for (int i = 0; i < MAX_READINGS; ++i) 
		{ 
			temperatures[i] = 0; 
		} 
	}

	// Метод для добавления показания температуры 
	void addReading(int temp) 
	{ 
		if (numReadings < MAX_READINGS) 
		{ 
			temperatures[numReadings++] = temp; 
		} 
		else 
		{ 
			std::cout << "Достигнуто максимальное количество показаний, добавление невозможно." << std::endl; 
		} 
	}

	// Метод для расчета средней температуры 
	double calculateAverage() const 
	{ 
		if (numReadings == 0) return 0; 
		// Предотвращаем деление на ноль 
		int sum = 0; 
		for (int i = 0; i < numReadings; ++i) 
		{ 
			sum += temperatures[i]; 
		} 
		return static_cast<double>(sum) / numReadings; 
	}

	// Метод для поиска максимального показания температуры 
	int findMaxTemperature() const 
	{ 
		int maxTemp = std::numeric_limits<int>::min(); // Инициализируем наименьшим возможным значением 
		for (int i = 0; i < numReadings; ++i) 
		{ 
			if (temperatures[i] > maxTemp) 
			{ 
				maxTemp = temperatures[i]; 
			}
		} return maxTemp;
	}

	// Метод для поиска минимального показания температуры 
	int findMinTemperature() const 
	{ 
		int minTemp = std::numeric_limits<int>::max(); // Инициализируем наибольшим возможным значением 
		for (int i = 0; i < numReadings; ++i) 
		{ 
			if (temperatures[i] < minTemp) 
			{ 
				minTemp = temperatures[i]; 
			} 
		} 
		return minTemp; 
	} 
};

	int main() 
	{
		setlocale(LC_ALL, "RU");

		TemperatureLogger logger; // Пример использования 

		logger.addReading(23); 
		logger.addReading(25); 
		logger.addReading(22); 
		logger.addReading(26); 
		logger.addReading(24);


		std::cout << "Средняя температура: " << logger.calculateAverage() << std::endl; 
		std::cout << "Максимальная температура: " << logger.findMaxTemperature() << std::endl; 
		std::cout << "Минимальная температура: " << logger.findMinTemperature() << std::endl;

		return 0;
	}