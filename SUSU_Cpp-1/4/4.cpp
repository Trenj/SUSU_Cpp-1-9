#include <iostream> 
#include <string>
using namespace std;

int main()
{
    string userInput;

    // Using getline to read a line of text cout << "Please enter your name and father's name, (In English), for example Ivan Ivanov: "; getline(cin, userInput); cout << "You entered using getline: \"" << userInput << "\"" << endl << endl;
    cout << "Please enter your name and father's name, (In English), for example Ivan Ivanov: ";
    getline(cin, userInput);
    cout << "You entered using getline: \"" << userInput << "\"" << endl << endl;


    // Using cin >> to read a line of text cout << "Again, please enter enter your name and father's name, (In English) for example Ivan Ivanov:"; cin >> userInput; // This will only read up to the first whitespace cout << "You entered using cin >>: \"" << userInput << "\"" << endl;
    cout << "Again, please enter enter your name and father's name, (In English) for example Ivan Ivanov:";
    cin >> userInput; // This will only read up to the first whitespace 
    cout << "You entered using cin >>: \"" << userInput << "\"" << endl;

    return 0;
}