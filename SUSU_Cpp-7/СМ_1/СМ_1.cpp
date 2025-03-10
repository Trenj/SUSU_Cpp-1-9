#include <iostream>
#include <vector>
#include <fstream>
#include <string>

class Book {
public:
    std::string title;
    std::string author;
    bool isTaken;

    Book(std::string title, std::string author) : title(title), author(author), isTaken(false) {}
};

class Library {
private:
    std::vector<Book> books;

public:
    void addBook(const Book& book) {
        books.push_back(book);
    }

    void takeBook(const std::string& title) {
        for (auto& book : books) {
            if (book.title == title && !book.isTaken) {
                book.isTaken = true;
                std::cout << "Book taken successfully.\n";
                return;
            }
        }
        std::cout << "Book is not available.\n";
    }

    void returnBook(const std::string& title) {
        for (auto& book : books) {
            if (book.title == title && book.isTaken) {
                book.isTaken = false;
                std::cout << "Book returned successfully.\n";
                return;
            }
        }
        std::cout << "Book is not taken.\n";
    }

    void listBooks() {
        for (const auto& book : books) {
            std::cout << "Title: " << book.title << ", Author: " << book.author << ", Status: " << (book.isTaken ? "Taken" : "Available") << "\n";
        }
    }

    void saveToFile(const std::string& filename) {
        std::ofstream file(filename);
        for (const auto& book : books) {
            file << book.title << "," << book.author << "," << book.isTaken << "\n";
        }
        file.close();
    }

    void loadFromFile(const std::string& filename) {
        std::ifstream file(filename);
        std::string line;
        while (std::getline(file, line)) {
            std::string title, author, isTakenStr;
            std::size_t pos = line.find(",");
            title = line.substr(0, pos);
            line.erase(0, pos + 1);
            pos = line.find(",");
            author = line.substr(0, pos);
            line.erase(0, pos + 1);
            isTakenStr = line;
            bool isTaken = (isTakenStr == "1");
            books.push_back(Book(title, author));
            books.back().isTaken = isTaken;
        }
        file.close();
    }
};

int main() {
    Library library;
    library.loadFromFile("library.txt");

    while (true) {
        std::cout << "1. Add book\n2. Take book\n3. Return book\n4. List books\n5. Exit\n";
        int choice;
        std::cin >> choice;
        std::cin.ignore();

        if (choice == 1) {
            std::string title, author;
            std::cout << "Enter title: ";
            std::getline(std::cin, title);
            std::cout << "Enter author: ";
            std::getline(std::cin, author);
            library.addBook(Book(title, author));
        }
        else if (choice == 2) {
            std::string title;
            std::cout << "Enter title: ";
            std::getline(std::cin, title);
            library.takeBook(title);
        }
        else if (choice == 3) {
            std::string title;
            std::cout << "Enter title: ";
            std::getline(std::cin, title);
            library.returnBook(title);
        }
        else if (choice == 4) {
            library.listBooks();
        }
        else if (choice == 5) {
            library.saveToFile("library.txt");
            break;
        }
    }

    return 0;
}
/*
Самостоятельная задача: Система управления библиотекой

Ваша задача - создать простую систему управления библиотекой на C++. 
Система должна позволять добавлять новые книги в библиотеку, брать книги взаймы, 
возвращать книги и выводить список всех книг в библиотеке. 
Также система должна сохранять состояние библиотеки между запусками программы, 
сохраняя и загружая данные о книгах в файл и из файла. Например, 
если пользователь попытается взять взаймы книгу, которая уже кем-то взята, 
система должна сообщить ему об этом. Когда книга возвращается, 
система должна позволить пользователю взять её взаймы. Вам следует создать разные классы, 
например класс для библиотеки и класс для книги, а также использовать вектор.
*/