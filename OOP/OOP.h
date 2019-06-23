#pragma once
#include <iostream>

using namespace std;

struct Person {
	string name() const;
	int age() const;
	Person(string name, int age);
private:
	string name_;
	int age_;
};

struct Student :Person {
	Student(string name, int age, string university);
	string university();
private:
	string university_;
};
