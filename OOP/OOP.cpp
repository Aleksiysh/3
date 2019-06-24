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

Vector::Vector(double x, double y) :x_(x), y_(y) {}
Vector Vector::operator-() { return Vector(-x_, -y_); }
Vector Vector::operator-(Vector const & p) { return Vector(x_ - p.x_, y_ - p.y_); }
Vector & Vector::operator-=(Vector const & p) { x_ -= p.x_; y_ -= p.y_; return *this; };
Vector Vector::operator-(double d) { return Vector(x_ - d, y_ - d); }
Vector & Vector::operator-=(double d) { x_ -= d; y_ -= d; return *this; };
Vector Vector::operator+(Vector const & p) { return Vector(x_ + p.x_, y_ + p.y_); }
Vector Vector::operator*(double d) { return Vector(x_*d, y_*d); }
Vector & Vector::operator*=(double d) { x_ *= d; y_ *= d; return *this; }
double Vector::operator[](size_t i) { return (i == 0) ? x_ : y_; }
Vector & Vector::operator++() { x_++; y_++; return *this; }	//префикс ++p
Vector  Vector::operator++(int) { Vector tmp(*this); ++(*this); return tmp; };	//постфикс p++
Vector & Vector::operator--() { x_--; y_--; return *this; }
Vector  Vector::operator--(int) { Vector tmp(*this); --(*this); return tmp; }


istream & operator>>(std::istream & is, Vector & p)
{
	is >> p.x_ >> p.y_;
	return is;
};
ostream & operator<<(ostream & os, Vector & p)
{
	os << p.x_ << " " << p.y_ ;
	return os;
};
Vector   operator*(double d, Vector const & p) { Vector tmp = p; return tmp * d; };

myString::myString(const char * str)
{
	size_ = 0;
	while (str[size_] != '\0')
		++size_;
		
	data_ = new char[size_ + 1];
	for (size_t i = 0; i < size_ + 1; ++i)
		data_[i] = str[i];
}
