#include <iostream> #include <string>
using namespace std;

class Book 
{
public: 
	// Member Variables 
	string title; 
	string author; 
	int publicationYear; 
	float price;

	// Constructor 
	Book(string t, string a, int year, float p) : title(t), author(a), publicationYear(year), price(p) {}

	// Member Function to display book details 
	void displayDetails() 
	{ 
		cout << "Title: " << title << endl; 
		cout << "Author: " << author << endl;
		cout << "Publication Year: " << publicationYear << endl; 
		cout << "Price: $" << price << endl;
	}
	// Member Function to update the book's price 
	void updatePrice(float newPrice) 
	{ 
		price = newPrice; 
	} 
};

int main() 
{ 
	// Creating an object of Book class and initializing it 
	Book myBook("The Great Gatsby", "F. Scott Fitzgerald", 1925, 20.99);

	// Displaying book details 
	cout << "Initial book details:" << endl; myBook.displayDetails();

	// Updating the book's price
	myBook.updatePrice(15.99);

	// Displaying updated book details 
	cout << "\nUpdated book details:" << endl; 
	myBook.displayDetails();

	return 0;
}