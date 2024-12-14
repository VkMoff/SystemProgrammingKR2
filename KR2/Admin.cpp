#include "Admin.h"

Admin::Admin() : Employee(), _adminSpec("defaultAdminSpec") {}

Admin::Admin(string adminSpec)
{
	_adminSpec = adminSpec;
}

Admin::~Admin() {}

void Admin::showInfo()
{
	Employee::showInfo();
	cout << " ; Это представитель администрации. Он - " << _adminSpec;
}

string Admin::getAdminSpec()
{
	return _adminSpec;
}

void Admin::setAdminSpec(string adminSpec)
{
	_adminSpec = adminSpec;
}
