#include "Classroom.h"


Classroom::Classroom(int number, int desksCount, string spec)
{
	_number = number;
	_desksCount = desksCount;
	_spec = spec;
}

Classroom::~Classroom()
{
}

void Classroom::showInfo()
{
	cout << endl << _spec << " ����� " << _number << ". � �� " << _desksCount << " ����.";
}
