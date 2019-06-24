#include "OOP.h"

using namespace std;

Person::Person(string const & name, int age)
	:name_(name), age_(age) {}
string Person::name() const { return name_; }
int Person::age() { return age_; }


Teacher::Teacher(string const & nm, int age, string const course)
	: Person(nm, age), course_(course) {}
string Teacher::ocupation() const { return "teacher"; }
string Teacher::course() { return course_; }

Professor::Professor(string const & name, int age, string const & course, string const & thesis)
	: Teacher(name, age, course), thesis_(thesis) {}
string Professor::name() { return "Prof. " + Person::name(); }
string Professor::thesis() { return thesis_; };
string Professor::ocupation() { return "professor"; };
