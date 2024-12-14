#pragma once
#include <iostream>
using namespace std;
class Classroom
{
public:
	Classroom(int number, int desksCount, string spec);
	~Classroom();
	
	void showInfo();
private:
	int _number;
	int _desksCount;
	string _spec;

};

