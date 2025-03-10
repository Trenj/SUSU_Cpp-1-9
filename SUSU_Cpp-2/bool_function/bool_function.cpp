#include <iostream>
using namespace std;


bool isPrime(int a) 
{ 
    if (a <= 1) 
        return false; 
    for (int i = 2; i <= sqrt(a); ++i) 
    { 
        if (a % i == 0) 
            return false; 
    } 
    return true; 
}


int main()
{
    setlocale(LC_ALL, "RU");

    int num;

    std::cout << "Введите число для реализации: ";
    std::cin >> num;

    cout << isPrime(num);

    return 0;
}