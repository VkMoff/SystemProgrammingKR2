#pragma once
#include <iostream>
#include "Classroom.h"
using namespace std;
class Class
{
public:
	Class(string info, Classroom *classroom);
	~Class(); 

	Classroom* getClassroom();
	void setClassroom(Classroom* classroom);
	string getInfo();
	void setInfo(string info);
private:
	string _info;
	Classroom *_classroom;
};

