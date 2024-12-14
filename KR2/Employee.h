#pragma once
#include "IPerson.h"
class Employee : virtual public IPerson
{
public:
	Employee();
	Employee(string name, int salary);
	Employee(int salary);
	~Employee();
	void showInfo();
	void setSalary(int salary);
	int getSalary();
private:
	int _salary = 0;
};

