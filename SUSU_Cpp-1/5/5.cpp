#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    // Set console to UTF-8 to support Cyrillic characters
    setlocale(LC_ALL, "RU");

    string userInput;

    // Используем getline для чтения строки текста
    cout << "Пожалуйста, введите ваше имя и отчество (На русском языке), например, Иван Иванов: ";
    getline(cin, userInput);
    cout << "Вы ввели с помощью getline: \"" << userInput << "\"" << endl << endl;

    // Используем cin >> для чтения строки текста
    cout << "Еще раз, пожалуйста, введите ваше имя и отчество (На русском языке), например, Иван Иванов: ";
    cin >> userInput; // то прочитает только до первого пробела 
    cout << "Вы ввели с помощью cin >>: \"" << userInput << "\"" << endl;

    return 0;
}