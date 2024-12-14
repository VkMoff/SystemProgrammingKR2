#pragma once
#include "Employee.h"
class Admin : virtual public Employee
{
public:
	Admin();
	Admin(string adminSpec);
	~Admin();
	void showInfo();
	string getAdminSpec();
	void setAdminSpec(string adminSpec);
private:
	string _adminSpec;
};

