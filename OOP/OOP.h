#pragma once
#include <iostream>

using namespace std;

struct Person {
	virtual string name() const;
	int age() const;
	Person(string name, int age);
private:
	string name_;
	int age_;
};
struct Student :Person {
	Student(string name, int age, string university);
	Student(Person const &a, string university);
	string university();
private:
	string university_;
};
struct Professor : Person {
	Professor(string name, int  age) 
	:Person(name,age) {};
	Professor(Person &a)
		:Person(a.name(), a.age()) {};
	string name() const {
		return "Prof. " + Person::name();
	}
};

//4.1.7
struct Character
{
	std::string const & name() const;
	unsigned health() const;
};
struct LongRange : Character
{
	std::string const & name() const;
	unsigned health() const;

	unsigned range() const;
};
struct SwordsMan : Character
{
	std::string const & name() const;
	unsigned health() const;

	unsigned strength() const;
};
struct Wizard : LongRange
{
	std::string const & name() const;
	unsigned health() const;

	unsigned range() const;

	unsigned mana() const;
};
struct Archer : LongRange
{
	std::string const & name() const;
	unsigned health() const;

	unsigned range() const;

	unsigned accuracy() const;
};

struct Vector2D {
	Vector2D(double x = 0, double y = 0)
		:x(x), y(y) {};
	Vector2D mult(double d) {
		return Vector2D(x*d, y*d);
	}
	double mult(Vector2D const &p) {
		return (x*p.x + y * p.y);
	}
	double x, y;
};

