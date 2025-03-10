#include <iostream> 
#include <vector> 
#include <list> 
#include <map> 
#include <string> 
#include "locale.h"

class Employee 
{
public: 
	int id; 
	std::string name; 
	std::string department;

	Employee(int id, std::string name, std::string department) : id(id), name(name), department(department) {}

	virtual void display() 
	{ 
		std::cout << "ID: " << id << ", Name: " << name << ", Department: " << department << std::endl; 
	}
};

class FullTimeEmployee : public Employee 
{
public: 
	double salary;

	FullTimeEmployee(int id, std::string name, std::string department, double salary) : Employee(id, name, department), salary(salary) {}

	void display() override 
	{ 
		Employee::display(); std::cout << "Salary: " << salary << std::endl; 
	}
};

class PartTimeEmployee : public Employee 
{
public: 
	double hourlyRate;

	PartTimeEmployee(int id, std::string name, std::string department, double hourlyRate) : Employee(id, name, department), hourlyRate(hourlyRate) {}

	void display() override 
	{ 
		Employee::display(); 
		std::cout << "Hourly Rate: " << hourlyRate << std::endl; 
	}
};

int main() 
{
	setlocale(LC_ALL, "Russian");

	std::vector<Employee*> employees; 
	std::list<std::string> departments; 
	std::map<std::string, std::vector<Employee*>> departmentEmployees;

	// Добавление сотрудников и отделов в контейнеры 
	employees.push_back(new FullTimeEmployee(1, "Иван Иванов", "Разработка", 50000)); 
	employees.push_back(new PartTimeEmployee(2, "Петр Петров", "Маркетинг", 300));

	departments.push_back("Разработка"); departments.push_back("Маркетинг");

	for (auto& emp : employees) 
	{ 
		departmentEmployees[emp->department].push_back(emp); 
	}

	// Вывод информации о сотрудниках 
	for (auto& emp : employees) 
	{ 
		emp->display(); 
	}

	// Очистка динамически выделенной памяти 
	for (auto& emp : employees) 
	{ 
		delete emp; 
	}

	return 0;
}