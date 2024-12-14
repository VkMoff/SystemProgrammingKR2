#pragma once
#include "Employee.h"
class Teacher : virtual public Employee
{
public:
	Teacher();
	Teacher(string spec);
	Teacher(string name, int salary, string spec);
	~Teacher();
	void showInfo();
	string getSpec();
	virtual void setSpec(string spec);
private:
	string _spec;
};

