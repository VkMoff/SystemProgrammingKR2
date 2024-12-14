#include "IPerson.h"

IPerson::IPerson()
{
}

IPerson::IPerson(string name)
{
	_name = name;
}

IPerson::~IPerson()
{
}

string IPerson::getName()
{
	return _name;
}

void IPerson::setName(string name)
{
	_name = name;
}
