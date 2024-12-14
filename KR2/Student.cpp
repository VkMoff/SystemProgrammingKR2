#include "Student.h"



Student::Student(string name, Class *cl) : IPerson(name)
{
	_class = cl;
}

Student::~Student()
{
}

void Student::showInfo()
{
	cout << "Это школьник " << getName() << ", Он учится в " << _class->getInfo() << " классе";
}

Class* Student::getClass()
{
	return _class;
}

void Student::setClass(Class* cl)
{
	_class = cl;
}

