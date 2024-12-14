#include "TeachingAdmin.h"

TeachingAdmin::TeachingAdmin(string name, int salary, string spec, string adminSpec) : IPerson(name), Employee(salary), Admin(adminSpec), Teacher(spec)
{

}

TeachingAdmin::TeachingAdmin() : IPerson(), Employee(), Admin(), Teacher() {}

TeachingAdmin::~TeachingAdmin()
{
}

void TeachingAdmin::showInfo()
{
	Employee::showInfo();
	cout << "; ��� ����������� ������������� �������������... �� �������� ��� ����: " << getAdminSpec() << "; ����������� �������� ������� " << getSpec();
}

void TeachingAdmin::setSalary(int salary)
{
	Admin::setSalary(salary);
}

int TeachingAdmin::getSalary()
{
	return Admin::getSalary();
}

