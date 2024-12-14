#pragma once
#include "Admin.h"
#include "Teacher.h"
class TeachingAdmin : virtual public Admin, public Teacher
{
public:
	TeachingAdmin(string name, int salary, string spec, string adminSpec);
	TeachingAdmin();
	~TeachingAdmin();
	void showInfo();
	void setSalary(int salary);
	int getSalary();
private:

};

