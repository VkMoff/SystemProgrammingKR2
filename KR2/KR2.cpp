#include <iostream>
#include "Student.h"
#include "TeachingAdmin.h"
#include "Classroom.h"
int main()
{
	setlocale(LC_ALL, "");
	
	Classroom* kab10 = new Classroom(10, 15, "Кабинет ОБЖ");
	kab10->showInfo();
	cout << "\n------------------------\n";

	Class *idiots = new Class("9В", kab10);
	idiots->setInfo("9В");

	Student *jeka = new Student("Жека", idiots);
	jeka->showInfo();
	cout << "\n------------------------\n";

	TeachingAdmin *lb = new TeachingAdmin("Лилия Борисовна", 33000, "География", "Завуч по УВР");
	lb->showInfo();
	cout << "\n------------------------\n";

	Teacher* rajedef = new Teacher("Владимир Михайлович", 30000, "История");
	rajedef->showInfo();
	cout << "\n------------------------\n";

	Employee* cleaner = new Employee("Валентина Ивановна", 25000);
	cleaner->showInfo();

	cout << "\n------------------------\n";
	cout << "Кабинет, привязанный к классу Жеки - ";
	jeka->getClass()->getClassroom()->showInfo();
	cout << "\n------------------------\n";



	delete kab10;
	delete idiots;
	delete jeka;
	delete lb;
	delete rajedef;
	delete cleaner;
	return 0;
}