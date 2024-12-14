#pragma once
#include <iostream>
#include <string>
using namespace std;

class IPerson
{
public:
	IPerson();
	IPerson(string name);
	virtual ~IPerson();

	virtual void showInfo() = 0;

	string getName();
	void setName(string name);
private:
	string _name;
};

