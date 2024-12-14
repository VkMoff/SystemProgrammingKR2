#include "Class.h"

Class::Class(string info, Classroom *classroom)
{
	_info = info;
	_classroom = classroom;
}

Class::~Class()
{
}

Classroom* Class::getClassroom()
{
	return _classroom;
}

void Class::setClassroom(Classroom* classroom)
{
	_classroom = classroom;
}

string Class::getInfo()
{
	return _info;
}

void Class::setInfo(string info)
{
	_info = info;
}
