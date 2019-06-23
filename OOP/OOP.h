#pragma once
#include <iostream>
#include <clocale>
#include <windows.h>
using namespace std;

struct Person {
	string name() const;
	int age() const;
	Person(std::string name, int age);
private:
	std::string name_;
	int age_;
};

struct Student :Person {
	Student(string name, int age, string university);
	string university();
private:
	string university_;
};
