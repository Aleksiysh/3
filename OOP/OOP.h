#pragma once
//#include <iostream>
#include <string>

using namespace std;

struct Person {
	Person(string const &name, int age);
	virtual ~Person() {};
	virtual string name() const;
	virtual int age();
	virtual string ocupation() const = 0;
private:
	string name_;
	int age_;
};
struct Teacher : Person{
	Teacher(string const &nm, int age, string const course);
	virtual string ocupation() const;
	virtual string course();
private:
	string course_;
};

struct Professor : Teacher {
	Professor(string const & name, int age, string const & course, string const & thesis);
	virtual string name();
	virtual string thesis();
	virtual string ocupation();

private:
	string thesis_;
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

