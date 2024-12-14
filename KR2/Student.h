#pragma once
#include "IPerson.h"
#include "Class.h"
class Student : virtual public IPerson
{
public:
	Student(string name, Class* cl);
	~Student();
	void showInfo();

	Class* getClass();
	void setClass(Class* cl);
private:
	Class* _class;
};

