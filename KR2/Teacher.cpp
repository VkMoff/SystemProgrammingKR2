#include "Teacher.h"

Teacher::Teacher() : Employee(), _spec("defaultTeacherSpec") {}

Teacher::Teacher(string spec)
{
	_spec = spec;
}

Teacher::Teacher(string name, int salary, string spec) : Employee(name, salary), _spec(spec)
{
	setName(name);
}

Teacher::~Teacher()
{
}

void Teacher::showInfo()
{
	Employee::showInfo();
	cout << "; он преподаёт предмет " << _spec;
}

string Teacher::getSpec()
{
	return _spec;
}

void Teacher::setSpec(string spec)
{
	_spec = spec;
}
