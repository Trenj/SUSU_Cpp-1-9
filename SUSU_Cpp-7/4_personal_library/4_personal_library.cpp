#include <iostream> 
#include <fstream> 
#include <vector> 
#include <string> 
#include "locale.h"

class Book 
{
public: 
	std::string title; 
	std::string author; 
	std::string genre; 
	int year;

	Book(std::string title, std::string author, std::string genre, int year) : title(std::move(title)), author(std::move(author)), genre(std::move(genre)), year(year) {}

	// Сериализация данных книги в строку 
	std::string serialize() const 
	{ 
		return title + ";" + author + ";" + genre + ";" + std::to_string(year); 
	}

	// Десериализация строки в данные книги 
	void deserialize(const std::string& data) 
	{ 
		size_t pos = 0; 
		size_t next_pos = data.find(';', pos); 
		title = data.substr(pos, next_pos - pos);

		pos = next_pos + 1; 
		next_pos = data.find(';', pos); 
		author = data.substr(pos, next_pos - pos);

		pos = next_pos + 1; 
		next_pos = data.find(';', pos); 
		genre = data.substr(pos, next_pos - pos);

		pos = next_pos + 1; 
		year = std::stoi(data.substr(pos));
	} 
};

void saveLibrary(const std::vector<Book>& library, const std::string& filename) 
{ 
	std::ofstream fileOut(filename);

	for (const auto& book : library) 
	{ 
		fileOut << book.serialize() << std::endl; 
	} 
	fileOut.close(); 
}
void loadLibrary(std::vector<Book>& library, const std::string& filename)
{
	std::ifstream fileIn(filename);
	std::string line;

	while (std::getline(fileIn, line))
	{
		Book book("", "", "", 0);
		book.deserialize(line);
		library.push_back(book);
	}
	fileIn.close();
}

int main() 
{
	setlocale(LC_ALL, "Russian"); 
	
	// Создание каталога библиотеки с некоторыми книгами 
	std::vector<Book> myLibrary = { Book("Война и мир", "Лев Толстой", "Роман", 1869), Book("Преступление и наказание", "Федор Достоевский", "Роман", 1866) };
	
	// Сохранение каталога библиотеки в файл 
	saveLibrary(myLibrary, "library.txt");

	// Загрузка каталога библиотеки из файла 
	std::vector<Book> loadedLibrary; 
	loadLibrary(loadedLibrary, "library.txt");

	// Вывод каталога библиотеки, загруженного из файла 
	for (const auto& book : loadedLibrary) 
	{ 
		std::cout << "Название: " << book.title << ", Автор: " << book.author << ", Жанр: " << book.genre << ", Год: " << book.year << std::endl; 
	}
	return 0;
}