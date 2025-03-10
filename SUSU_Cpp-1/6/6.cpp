#include <iostream>

int main() 
{
	char operation; 
	double num1, num2;

	std::cout << "Enter an operation (+, -, *, /): "; 
	std::cin >> operation;

	std::cout << "Enter two numbers: "; 
	std::cin >> num1 >> num2;

	if (operation == '+') 
	{ 
		std::cout << "Result: " << num1 + num2 << std::endl; 
	}
	else if (operation == '-') 
	{ 
		std::cout << "Result: " << num1 - num2 << std::endl; 
	}
	else if (operation == '*') 
	{ 
		std::cout << "Result: " << num1 * num2 << std::endl; 
	}
	else if (operation == '/') { if (num2 != 0) 
	{ 
		std::cout << "Result: " << num1 / num2 << std::endl; 
	} 
	else 
	{ 
		std::cout << "Error: Division by zero" << std::endl; 
	} 
	}
	else
	{ 
		std::cout << "Error: Invalid operation" << std::endl; 
	}

	return 0;
}