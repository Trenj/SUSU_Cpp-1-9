#include <iostream> 
#include <string> 
using namespace std;

int main()
{
    int number;
    string word;

    cout << "Enter a number: ";
    cin >> number;
    cout << number << endl;

    // Clear the newline character from the buffer cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter a word: ";
    getline(cin, word);
    cout << word << endl;

    return 0;
}