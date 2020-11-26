#include "person.h"

person::person()
{
}

person::person(int Age, long ID, string Name)
{
	age = Age;
	id = ID;
	name = Name;
}

void person::printP()
{
	cout << "age: " << age << endl<<"id: "<<id<<"name: "<<name<<endl;
}
