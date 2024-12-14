#include "Employee.h"

Employee::Employee() 
{
}

Employee::Employee(string name, int salary) : IPerson(name), _salary(salary) {}

Employee::Employee(int salary) : IPerson("defaultName"), _salary(salary) {}

Employee::~Employee()
{
}

void Employee::showInfo()
{
	cout << "Это работник школы " << getName() << ", ему/ей платят " << _salary;
}

void Employee::setSalary(int salary)
{
	_salary = salary;
}

int Employee::getSalary()
{
	return _salary;
}
