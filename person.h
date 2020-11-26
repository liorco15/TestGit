#include<iostream>
#include<string>
using namespace std;

class person {
private:
	int age;
	long id;
	string name;

public:
	person() :age(0), id(000000000), name("unknown");

	person(int, long, string);
	void printP();


};