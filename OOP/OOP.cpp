#include "OOP.h"

using namespace std;

Person::Person(string name, int age)
	:name_(name),age_(age)
{};
string Person::name() const { return name_; }
int Person::age() const { return age_; }

Student::Student(string name, int age, string university)
	:Person(name, age), university_(university) {}
Student::Student(Person a, string university)
	:Person(a.name(),a.age()), university_(university){}
string Student::university()
{
	return university_;
}


