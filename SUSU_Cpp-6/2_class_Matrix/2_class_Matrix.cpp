#include <iostream> 
using namespace std;

class Matrix 
{
private: 
	static const int ROWS = 3; // Количество строк 
	static const int COLS = 3; // Количество столбцов 
	int data[ROWS][COLS]; // 2D массив для данных матрицы

public: 
	// Конструктор для инициализации матрицы нулями 
	Matrix() 
	{ 
		for (int i = 0; i < ROWS; ++i) 
		{ 
			for (int j = 0; j < COLS; ++j) 
			{ 
				data[i][j] = 0; 
			} 
		} 
	}

	// Функция для ввода данных матрицы пользователем 
	void inputMatrix()
	{ 
		cout << "Введите данные матрицы (" << ROWS << "x" << COLS << "):\n"; 
		for (int i = 0; i < ROWS; ++i) 
		{ 
			for (int j = 0; j < COLS; ++j) 
			{ 
				cin >> data[i][j]; 
			} 
		} 
	}

	// Функция для сложения двух матриц 
	Matrix add(const Matrix& m) const 
	{ 
		Matrix result; 
		for (int i = 0; i < ROWS; ++i) 
		{ 
			for (int j = 0; j < COLS; ++j) 
			{ 
				result.data[i][j] = data[i][j] + m.data[i][j]; 
			} 
		} 
		return result; 
	}

	// Функция для вычитания двух матриц 
	Matrix subtract(const Matrix& m) const 
	{ 
		Matrix result; 
		for (int i = 0; i < ROWS; ++i) 
		{ 
			for (int j = 0; j < COLS; ++j) 
			{ 
				result.data[i][j] = data[i][j] - m.data[i][j]; 
			} 
		} 
		return result; 
	}

	// Функция для отображения матрицы 
	void display() const 
	{ 
		for (int i = 0; i < ROWS; ++i) 
		{ 
			for (int j = 0; j < COLS; ++j) 
			{ 
				cout << data[i][j] << " "; 
			} 
			cout << "\n"; 
		} 
	} 
};

	int main() 
	{
		setlocale(LC_ALL, "RU");

		Matrix m1, m2, result;

		cout << "Ввод данных для Матрицы 1:\n"; m1.inputMatrix();
		cout << "Ввод данных для Матрицы 2:\n"; m2.inputMatrix();
		cout << "Матрица 1:\n"; m1.display();
		cout << "Матрица 2:\n"; m2.display();

		result = m1.add(m2); cout << "Результат сложения:\n"; result.display();
		result = m1.subtract(m2); cout << "Результат вычитания:\n"; result.display();

		return 0;
	}